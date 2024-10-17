#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number to check: ");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is even\n",a);
	else
		printf("%d is odd\n",a);
}
