#include <stdio.h>

int main()
{
  int a = 0;
  printf("Enter a value: ");
  scanf("%d", &a);
  printf("\n");
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else if(a>0)
  {
    printf("a is greater than 0\n");
  }
  else if(a<0)
  {
    printf("a is less than 0\n");
  }
    
}
