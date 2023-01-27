#include<stdio.h>

main()
{
	int i=1,N ,sum=1;
	
	printf("Enter Number:");
	scanf("%d",&N);
	
	while(i<=N)
	{
		sum = sum*i;
		
		i++;
	}
	
	system("cls");
	printf("----------------Answer--------------\n\n");
	printf("%d",sum);
	
}
