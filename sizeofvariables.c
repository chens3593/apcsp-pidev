#include<stdio.h>

int main()
{
  int a = 545;
  char c='a';
  float f=3.14;
  double d=3.1415; 
  short int s = 3;
  signed int i = 3141;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char c value: %c and size: %d bytes\n", c, sizeof(c));
  printf("float f value: %f and size: %d bytes\n", f, sizeof(f));
  printf("double d value: %lf and size: %d bytes\n", d, sizeof(d));
  printf("short int s value: %d and size: %d bytes\n", s, sizeof(s));
  printf("signed int i value: %d and size: %d bytes\n", i, sizeof(i));
}

