#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>

/**
 * print_error - Print an error message to stderr and exit with status 98.
 * @message: The error message to display.
 */
void print_error(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type:    %d\n", header->e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error opening the ELF file");
    }

    Elf64_Ehdr header;
    ssize_t n = read(fd, &header, sizeof(header);
    if (n == -1) {
        print_error("Error reading ELF header");
    }

    if (n < sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    print_elf_header_info(&header);
    close(fd);
    return 0;
}
