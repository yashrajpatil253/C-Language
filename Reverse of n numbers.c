#include<stdio.h>
int main()

{
int n,i;
printf("Enter the value of n from which we want the reverse order");
scanf("%d",&n);
i=n;//i is initialized with the value of n
printf("while loop\n");
while(i>=0)
{
printf("%d\t",i);
i--;//the value of i will be decremented by 1 each time the while loop executes till i=0 the loop executed for i=-1 the loop will be terminated
}
printf("\nDo while loop\n");
i=n;//As the value of i has changed from i=n to i=0 because of i-- so we give value to i=N again for do while loop
do
{
printf("%d\t",i);
i--;
}
while(i>=0);
printf("\nfor loop\n");
for(i=n;i>=0;i--)
{
printf("%d\t",i);
}
return 0;
}
