#include<stdio.h>

int main()
{
	int I , N , A[N] , M ,B[M] , Add ;
	
	//N
	printf("Enter The Number Of First Values :");
	scanf("%d",&N);
	for(I=0;I<N;I++)
	{
		printf("A[%d] : ",I);
		scanf("%d",&A[I]);
	}
	printf("\n");
	
	//M
	printf("Enter The Number Of Second Values :");
	scanf("%d",&M);
	for(I=0;I<M;I++)
	{
		printf("B[%d] : ",I);
		scanf("%d",&B[I]);
	}
	printf("\n---------------Output--------------\n\n");
	
	//Logic
	for(I=0;I<M;I++)
	{
		A[N+I] = B[I];
	}
	
	Add = N + M ;
	for(I=0;I<Add;I++)
	{
		printf("C[%d] : %d\n",I , A[I]);
	}
}
