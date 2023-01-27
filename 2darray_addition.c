#include<stdio.h>

int main()
{
	//First Value
		
	int Row , Col , I , J ;
	
	printf("Enter Frist 2D Array Row :");
	scanf("%d",&Row);
	printf("Enter Frist 2D Array Column :");
	scanf("%d",&Col);
	
	int A[Row][Col];
	
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			printf("Enter Valur Of A[%d][%d] : ",I,J);
			scanf("%d",&A[I][J]);
		}
	}
	
	//Secound Value
	printf("\nSecound 2D Array.\n");
	int Row2 , Col2 ;
	
	printf("Enter Secound 2D Array Row :");
	scanf("%d",&Row2);
	printf("Enter Secound 2D Array Column :");
	scanf("%d",&Col2);
	
	int B[Row2][Col2];
	
	for(I=0;I<Row2;I++)
	{
		for(J=0;J<Col2;J++)
		{
			printf("Enter Valur Of B[%d][%d] : ",I,J);
			scanf("%d",&B[I][J]);
		}
	}
	
	int C[Row][Col];
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			C[I][J] = A[I][J] + B[I][J];
		}
		printf("\n");
	}
	
	printf("\n---------------Output---------------\n\n");
	for(I=0;I<Row;I++)
	{
		for(J=0;J<Col;J++)
		{
			printf(" %d",C[I][J]);
		}
		printf("\n");
	}
}
