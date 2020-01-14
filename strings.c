#include <stdio.h>
#include <string.h>

int main()
{
	char str1[26];
	char str2[27]="abcdefghijklmnopqrstuvwxyz";
	char str3[53];
	for(int i=0; i<26; i++)
	{
		str1[i]=i+97;
	}
	if(strcmp(str1,str2)==0)
		printf("the strings are identical\n");
	else
		printf("the strings are different\n");
	for(int i=0; i<26;i++)
	{
		str1[i]-=32;
	}
	if(strcmp(str1, str2)==0)
		printf("the strings are still identical\n");
	else
		printf("the strings are now different\n");
	strcpy(str3, str1);
	strcat(str3, str2);
	printf("The first string is %s\n", str1);
	printf("The second string is %s\n", str2);
	printf("The third string is %s\n", str3);
}
