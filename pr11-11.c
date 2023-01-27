#include<stdio.h>

main()
{
	int I,N,J ;
	
	printf("Enter Number:");
	scanf("%d",&N);
	
	for(I=1;I<=10;I++)
	{
		for(J=1;J<=N;J++)
		{
			printf("%d %d %d\t",J,I,J*I);
		}
		printf("\n");
	}
	
}

