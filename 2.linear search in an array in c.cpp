#include<stdio.h>
int main()
{
    int size,a[20],i,value;
    printf("the size of the array:");
    scanf("%d",&size);
    printf("enter array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(a[i]==value)
        {
            printf("the value is found and at the position: %d",i+1);
        }
    }
    return 0;
}
