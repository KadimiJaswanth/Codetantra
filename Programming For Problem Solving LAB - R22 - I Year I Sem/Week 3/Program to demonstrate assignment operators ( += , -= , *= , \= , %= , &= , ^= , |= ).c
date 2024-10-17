#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a value: ");
	scanf("%d",&a);
	b=a;
	printf("After assigning a value to c, c value is: %d\n",b);
	b+=a;
	printf("+= Value of c: %d\n",b);
	b-=a;
	printf("-= Value of c: %d\n",b);
	b*=a;
	printf("*= Value of c: %d\n",b);
	b/=a;
	printf("/= Value of c: %d\n",b);
	b>>=a;
	printf(">>= Value of c: %d\n",b);
	b&=a;
	printf("&= Value of c: %d\n",b);
	b^=a;
	printf("^= Value of c: %d\n",b);
	b|=a;
	printf("|= Value of c: %d\n",b);
}
