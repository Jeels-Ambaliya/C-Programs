#include<stdio.h>

int main()
{
	int A[5][5] , I , J , Sum;

	for(I=0;I<5;I++)
	{
		for(J=0;J<5;J++)
		{
			printf("A[%d][%d] :",I,J);
			scanf("%d",&A[I][J]);
		}
		printf("\n");
	}
	
	printf("\n--------------Output-------------\n\n");
	for(I=0;I<5;I++)
	{
		for(J=0;J<5;J++)
		{
			if(J==0 || J==5-1 || I==0 || I==5-1)
			{
				printf("  ");
			}
			else
			{
				printf("%d ",A[I][J]);
				Sum = Sum + A[I][J];	
			}
		}
		printf("\n");
	}
	printf("\n\nInner Element Sum Is : %d",Sum);
}

