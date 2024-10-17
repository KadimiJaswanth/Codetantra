#include<stdio.h>
#include<stdlib.h>
void main()
{
	float radius,carea,rarea,tarea,rl,rb,th,tb;
	int choice;
	while(1)
		{
	printf("1. Area of circle\n2. Area of rectangle\n3. Area of triangle\n4. Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
			printf("Enter radius : ");
			scanf("%f",&radius);
			carea=3.14*radius*radius;
			printf("Area of circle : %f\n",carea);
			break;
			case 2:
			printf("Enter length and width : ");
			scanf("%f%f",&rl,&rb);
			rarea=rl*rb;
			printf("Area of rectangle : %f\n",rarea);
			break;
			case 3:
			printf("Enter base and height : ");
			scanf("%f%f",&tb,&th);
			tarea=(tb*th)/2;
			printf("Area of triangle : %f\n",tarea);
			break;
			case 4:
			exit (0);
		}
		}
}
