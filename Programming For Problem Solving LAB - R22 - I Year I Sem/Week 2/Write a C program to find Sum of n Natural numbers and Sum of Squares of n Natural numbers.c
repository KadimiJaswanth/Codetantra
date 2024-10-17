#include<stdio.h>
void main()
{
	int n,sum,sumofsquare;
	printf("n : ");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	sumofsquare=(n*(n+1)*(2*n+1))/6;
	printf("sum : %d\n",sum);
	printf("sum of squares : %d\n",sumofsquare);
}
