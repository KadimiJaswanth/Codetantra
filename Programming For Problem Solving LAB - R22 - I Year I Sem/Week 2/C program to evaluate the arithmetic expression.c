#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,eval;
	printf("enter value of a : ");
	scanf("%d",&a);
	printf("enter value of b : ");
	scanf("%d",&b);
	printf("enter value of c : ");
	scanf("%d",&c);
	printf("enter value of d : ");
	scanf("%d",&d);
	printf("enter value of e : ");
	scanf("%d",&e);
	printf("enter value of f : ");
	scanf("%d",&f);
	printf("enter value of g : ");
	scanf("%d",&g);
	eval=((a - (((b / c) * d) + e)) * (f + g));
	printf("after evaluation result is :%d ",eval);
}
