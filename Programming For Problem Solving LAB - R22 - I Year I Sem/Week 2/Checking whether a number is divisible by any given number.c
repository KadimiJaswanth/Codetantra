#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(b==0)
		printf("infinity");
	else if(a%b!=0)
		printf("not divisible");
	else
		printf("divisible");
}
