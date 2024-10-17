#include<stdio.h>
void main()
{
	int a,b;
	printf("Number 1: ");
	scanf("%d",&a);
	printf("Number 2: ");
	scanf("%d",&b);
	if(a==b)
		printf("Result: %d = %d\n",a,b);
	else if(a>b)
		printf("Result: %d > %d\n",a,b);
	else
		printf("Result: %d < %d\n",a,b);
}
