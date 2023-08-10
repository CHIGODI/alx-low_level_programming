#include <stdio.h>
/**
 * main: program that prints size of various types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
  printf("size of char:%zu",sizeof(char));
  printf("size of int:%zu",sizeof(int));
  printf("size of long int:%zu",sizeof(long int));
  printf("size of long long int:%zu",sizeof(long long int));
  printf("size of float:%zu",sizeof(float));
  return  (0);
}
