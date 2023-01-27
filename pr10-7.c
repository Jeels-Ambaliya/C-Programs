#include<stdio.h>

main()
{
	int I=2000;
	
	printf("---------------Answer-------------\n\n");
	while(I<=3000)
	{
		if(I%4==0)
		{
			printf("%d\t",I);
		}
		I++;
	}
}
