#include<stdio.h>
void main() {
	int a[20], i, n, key, flag = 0, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
for(i=0;i<n;i++)
	{
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);
	for(i=0;i<n;i++)
		{
	if (a[i]==key) {
		printf("The key element %d is found at the position %d\n",key,i);
		break;
	}
		}if(i==n)
		printf("The key element %d is not found in the array\n",key);
	}
