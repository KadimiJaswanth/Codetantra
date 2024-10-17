#include<stdio.h>
void main() {
	int a[20], i, n, j, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		{
			printf("Enter element for a[%d] : ",i);
			scanf("%d",&a[i]);
		}
	printf("Before sorting the elements in the array are\n");
	for(i=0;i<n;i++)
		{
			printf("Value of a[%d] = %d\n",i,a[i]);
		}
	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	printf("After sorting the elements in the array are\n");
	for(i=0;i<n;i++)
		{
			printf("Value of a[%d] = %d\n",i,a[i]);
		}
