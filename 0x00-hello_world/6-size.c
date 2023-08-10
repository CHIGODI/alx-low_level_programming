#include <stdio.h>
/**
 * main: program that prints size of various types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
  printf("size of a char:%zu\n",sizeof(char));
  printf("size of an int:%zu\n",sizeof(int));
  printf("size of a long int:%zu\n",sizeof(long int));
  printf("size of a long long int:%zu\n",sizeof(long long int));
  printf("size of a float:%zu\n",sizeof(float));
  return  (0);
}
