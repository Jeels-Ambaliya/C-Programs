#include<stdio.h>

int main()
{
	int Row , Col , I , J , Sum;
	
	printf("Enter How Many Row You Want ? :");
	scanf("%d",&Row);
	printf("Enter How Many Column You Want ? :");
	scanf("%d",&Col);
	
	int A[Row][Col];
	
	printf("\n");
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			printf("A[%d][%d] :",I,J);
			scanf("%d",&A[I][J]);
		}
		printf("\n");
	}
	
	printf("\n--------------Output-------------\n\n");
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			if(I==J)
			{
				printf("%d  ",A[I][J]);
				Sum = Sum + A[I][J];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n\nDigonal Sum Is : %d",Sum);
}
