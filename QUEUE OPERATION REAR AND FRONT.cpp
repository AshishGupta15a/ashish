#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front=-1;
int rear=-1;
int a[SIZE];
void rear_of_queue();
void front_of_queue();
void display();
int main()
{
	int choice;
	do
	{
		printf("\n 1. Insert");
		printf("\n 2. Delete");
		printf("\n 3. Display ");
		printf("\n 4. Exit");
		printf("\n Enter Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				rear_of_queue();
				break;
			case 2:
				front_of_queue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("wrong choice");
				exit(0);
		}		
	}while(choice!=4);
}
void rear_of_queue()
{
	int no;
	printf("\n Enter No.:");
	scanf("%d",&no);
	if(rear < SIZE-1)
	{
		a[++rear]=no;
		if(front==-1)
		front=0;
	}
	else
	{
		printf("\n Queue overflow");
	}
}
void front_of_queue()
{
	if(front==-1)
	{
		printf("\nQueue Underflow");
		return;
	}
	else
	{
		printf("\nDeleted Item:%d\n",a[front]);
	}
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is empty....");
		return;
	}
	for(i=front;i<=rear;i++)
	printf("\t%d",a[i]);
}
