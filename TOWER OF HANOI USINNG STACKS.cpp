#include<stdio.h>
void TOHanoi(int n,char x,char y,char z) 
{
   if(n==1)
   printf("\n%c to %c", x,z);
   
   if(n>1) 
   {
      TOHanoi(n-1,x,z,y);
      printf("\n%c to %c",x,z);
      TOHanoi(n-1,z,y,x);
   }
}
int main()
{
   int n;
   printf("enter the number of disks ");
   scanf("%d",&n);
   TOHanoi(n,'A','B','C');
}
