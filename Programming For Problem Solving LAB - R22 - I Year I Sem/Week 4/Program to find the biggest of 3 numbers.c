#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Number 1: ");
	scanf("%d",&a);
	printf("Number 2: ");
	scanf("%d",&b);
	printf("Number 3: ");
	scanf("%d",&c);
	if(a>b)
		if(a>c)
			printf("%d is greater among three\n",a);
	    else
			printf("%d is greater among three\n",c);
	else
		if(b>c)
			printf("%d is greater among three\n",b);
	    else
			printf("%d is greater among three\n",c);
}
