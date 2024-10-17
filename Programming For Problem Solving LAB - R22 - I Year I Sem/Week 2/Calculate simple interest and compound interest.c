#include<stdio.h>
#include<math.h>
void main()
{
	float P,R,T,SI,CI;
	printf("Enter P,R,T: ");
	scanf("%f%f%f",&P,&R,&T);
	SI = (P * R * T) / 100;
	printf("SI= %f\n",SI);
	CI = P *pow(1 + (R / 100), T) - P;
	printf("CI= %f\n",CI);
}
