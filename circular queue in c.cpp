#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int queue[100];
void enqueue(int x)
{
	if(rear==99)
	{
		printf("Queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=x;
	}
	else if(rear==99&&front!=0)
	{
		rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
int main()
{
	do{
	int x;
	printf("\nPress 1. For Enqueue\nPress 2. For Dequeue\nPress 3. For Display\nPress 4. For Exit\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1: 
		{
			int a;
			printf("enter the value:");
	        scanf("%d",&a);
	        enqueue(a);
	        break;
	    }
	    case 2: 
	    {
			dequeue();
	 		break;
	 	}
		case 3:
	 	{ 
	 		display();
	 		break;
	 	}
	 	case 4:
	 	{
	 		exit(0);
	 	}
	 	default:printf("Invalid");
	}
	}while(1);
}
