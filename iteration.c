#include <stdio.h>

int main()
{
	int div;
	printf("Enter value of div: ");
	scanf("%d", &div);
	for(int i=1; i<=100; i++)
	{
		if(i%div==0)
		{
			printf("%d\n", i);
		}
	}
}
