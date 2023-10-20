#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *message) {
    char error_message[1024];
    int len = snprintf(error_message, sizeof(error_message), "%s\n", message);
    write(STDERR_FILENO, error_message, len);
    exit(98);
}

void write_info(char *info) {
    write(STDOUT_FILENO, info, strlen(info));
}

void write_hex_byte(uint8_t byte) {
    char hex[3];
    snprintf(hex, sizeof(hex), "%02x", byte);
    write(STDOUT_FILENO, hex, sizeof(hex) - 1);
}

void print_elf_header_info(Elf64_Ehdr *header) {
    write_info("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        write_hex_byte(header->e_ident[i]);
        if (i < EI_NIDENT - 1) {
            write_info(" ");
        } else {
            write_info("\n");
        }
    }

    write_info("Class:   ");
    write_info(header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64\n" : "ELF32\n");
    
    write_info("Data:    ");
    write_info(header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian\n" : "2's complement, big endian\n");
    
    write_info("Version: ");
    char version[3];
    snprintf(version, sizeof(version), "%d", header->e_ident[EI_VERSION]);
    write_info(version);
    write_info(" (current)\n");

    write_info("OS/ABI:  ");
    char osabi[3];
    snprintf(osabi, sizeof(osabi), "%d", header->e_ident[EI_OSABI]);
    write_info(osabi);
    write_info("\n");

    write_info("ABI Version: ");
    char abiversion[3];
    snprintf(abiversion, sizeof(abiversion), "%d", header->e_ident[EI_ABIVERSION]);
    write_info(abiversion);
    write_info("\n");

    write_info("Type:    ");
    char type[3];
    snprintf(type, sizeof(type), "%d", header->e_type);
    write_info(type);
    write_info("\n");

    write_info("Entry point address: 0x");
    char entry_point[18];
    snprintf(entry_point, sizeof(entry_point), "%lx", (unsigned long)header->e_entry);
    write_info(entry_point);
    write_info("\n");
}

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
    ssize_t n = read(fd, &header, sizeof(header));
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
