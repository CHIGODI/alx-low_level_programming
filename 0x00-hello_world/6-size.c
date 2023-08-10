#include <stdio.h>
/**
 * main: program that prints size of various types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
  printf("size of char:%zu\n",sizeof(char));
  printf("size of int:%zu\n",sizeof(int));
  printf("size of long int:%zu\n",sizeof(long int));
  printf("size of long long int:%zu\n",sizeof(long long int));
  printf("size of float:%zu\n",sizeof(float));
  return  (0);
}
