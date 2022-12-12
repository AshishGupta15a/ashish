#include <stdio.h>
int main()
{
    int a[20],ub,lb=0,mid=(lb+ub)/2,value,size,temp,i,j;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    scanf("%d",&a[i]);
    for(i=1;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
         for(j=0;j<size-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
         }
    }     
    printf("the sorted list is:");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&value);
    ub=size;
    while (lb<=ub)
    {
        if (a[mid]>value)
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
        mid=(lb+ub)/2;
    }
    if (a[mid]=value)
    {
        printf("element is present in the array at the position:%d",mid);
    }
    else
    {
        printf("the element is not found");
    }
    return 0;
}
