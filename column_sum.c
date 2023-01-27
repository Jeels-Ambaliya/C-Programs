#include<stdio.h>

int main()
{
	int Row , Col , I , J , Sum;
	
	printf("Enter How Many Row You Want ? :");
	scanf("%d",&Row);
	printf("Enter How Many Column You Want ? :");
	scanf("%d",&Col);
	
	int A[Row][Col];
	
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			printf("A[%d][%d] :",I,J);
			scanf("%d",&A[I][J]);
		}
	}
	
	printf("\n--------------Output-------------\n\n");
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			printf("%d ",A[I][J]);
		}
		printf("\n");
	}
	printf("________\n");
	for(I=0;I<Row;I++)
	{
		Sum = 0;
		for(J=0;J<Col;J++)
		{
			Sum = Sum + A[J][I];
		}
		printf("%d ",Sum);
	}
}
