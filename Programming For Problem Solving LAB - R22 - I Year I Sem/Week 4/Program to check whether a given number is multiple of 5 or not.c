#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to check: ");
	scanf("%d",&a);
	if(a%5==0)
		printf("%d is a multiple of 5\n",a);
	else
		printf("%d is not a multiple of 5\n",a);
}
