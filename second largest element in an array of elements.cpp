#include <stdio.h>
int main()
{
	int arr[50],n,i,j=0,lar,seclar;
    printf("size of array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
		printf("element - %d : ",i);
	    scanf("%d",&arr[i]);
	}
    lar=0;
	for(i=0;i<n;i++)
    { 
		if(lar<arr[i])
	    {
           lar=arr[i];
           j = i;
		}
    }	
    seclar=0;
	for(i=0;i<n;i++)
	{
		if(i==j)
        {
			i++;  
		  	i--;
        }
      	else
        {
          	if(seclar<arr[i])
	     	{
				seclar=arr[i];
            }
        }
	}
  	printf("The Second largest element in the array is :  %d \n\n", seclar);
}
