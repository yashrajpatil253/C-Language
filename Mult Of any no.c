#include<stdio.h>
int main()
{
int n,i,range;
printf("Enter the No For which you want multiplication table\n");
scanf("%d",&n);
printf("Enter the range\n");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("The Multiplication table is %dX%d=%d\n",n,i,n*i);
}
return 0;	
	
}
