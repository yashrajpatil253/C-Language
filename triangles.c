#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three sides of Triangle\n");	
  scanf("%d%d%d",&a,&b,&c);
  if(a==b&&b==c)
  printf("The triangle is Equilateral\n");
  else
  if(a==b||b==c||a==c)
  printf("The triangle is Isosceles\n");
  else
  printf("The triangle is Scalene\n");
  return 0;
  
}
