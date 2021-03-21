#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter the Limit\n");
	scanf("%d",&n);
	do
	{
		printf("First N Natural Numbers are %d\n",i+1);
		i++;
		
	}while(i<n);
	return 0;
}
