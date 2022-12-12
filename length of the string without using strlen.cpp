#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("enter a string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';++i);
	printf("length of the string:%d",i);
	return 0;
}
