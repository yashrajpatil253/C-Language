#include<stdio.h>
int main()	
{
	int radius;
	float pi=3.14;
	printf("Enter the Radius of Circle\n");
	scanf("%d",&radius,&pi);
	printf("The Area Of Circle is%f\n",radius*radius*pi);
	int height;
	printf("Enter the height of the Circle\n");
	scanf("%d",&height);
	printf("The Volume Of Cylinder is%f",pi*radius*radius*height);
	
	return 0;
}
