#include<stdio.h>
#include<string.h>
int main()
{
	char n;
	printf("Enter the Input");
	scanf("%c",&n);
	if((n>='a' && n<='z')||(n>='A' && n<='Z'))
	{
 printf("alphabet");
 }
 else
 {
 printf("Not alphabet");
 }
 getch();
 }
