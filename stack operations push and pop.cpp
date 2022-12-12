#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],top=-1;
void push(int n)
{
	if(top==max-1)
		printf("\n OverFlow");
	else
	{
		top++;
		a[top]=n;
	}
}
void pop()
{
    int del;
	if(top==-1)
		printf("\n Underflow \t");
	else
	{
		del=a[top];
		printf("\n Deleting \t %d",del);
		top--;
	}
}
void Displaying_elements()
{
	int i;
    if(top==-1)
        puts("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",a[i]);
    }
}
int main()
{
	int choice,n;
	do
	{
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.Display");
		printf("\n Enter Choice \t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the element to push:");
				scanf("%d",&n); 
				push(n);
				break;
			case 2: 
		    	pop();
				break;
			case 3: 
				Displaying_elements();
				break;
			case 4:
				exit(0); 
				break;
		}
	}while(1);
	return 0;
}
