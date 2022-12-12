#include<stdio.h>
int main()
{
	int n,size,i,a[20],b[20],item,j;
	do
		{
		printf("\n 1.Insertion");
		printf("\n 2.Display");
		printf("\n 3.Deletion");
		printf("\n Enter Choice \t");
		scanf("%d",&n);
		switch(n)
		{
			case 1: 
				printf("\n Inserting Element into the Array");
				printf("\n Enter Size\t");
				scanf("%d",&size);
				for(i=0; i<size; i++)
				{
					scanf("%d",&a[i]);
				}
				break;
			case 2: 
				printf("\n Displaying the Array \n");
				for(i=0; i<size; i++)
				{
					printf("%d \t",a[i]);
				}
				break;
			case 3: 
				printf("\n Deleting an Element from the Array");
				printf("\n Enter Element to be Deleted \t");
				scanf("%d",&item);
				for(i=0,j=0; i<size,j<size; i++)
				{
					if(a[i]!=item)
					{
						b[j]=a[i];
						j++;
					}
				}
				printf("\n Displaying the Array \n");
				for(i=0; i<size-1; i++)
				{
					printf("%d \n",b[i]);
				}
				break;
			default: 
				printf("entered the wrong number");
				break;
		}
	}while(n!=4);
	return 0;
}
