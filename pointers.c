#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  float d;
  float e;
  float* ptrtod;
  float* ptrtoe;
  ptrtod = &d;
  ptrtoe = &e;
  d=1.23;
  e=2.72;
  printf("The value of d is %f and its address is %d\n", *ptrtod, &d);
  printf("The value of e is %f and its address is %d\n", *ptrtoe, &e);
  float dum=*ptrtod;
  d=*ptrtoe;
  e=dum;
}
