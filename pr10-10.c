#include<stdio.h>

main()
{
	int i=1,N ;
	
	printf("Enter Number:");
	scanf("%d",&N);
	
	while(i<=10)
	{
		printf("%d * %d = %d\n",N,i,N*i);
		while(i<=10)
		{
			printf("%d * %d = %d\n",N,i,N*i);
			i++;
		}
		//i++;
	}
	
}
