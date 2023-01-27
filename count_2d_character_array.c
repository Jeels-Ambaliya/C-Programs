#include<stdio.h>
#include<string.h>

int main()
{
	int N , I , Count = 0 ;
	
	printf("How Many Name You Print : ");
	scanf("%d",&N);
	
	char Name[N][100];
	
	for(I=0;I<N;I++)
	{
		fflush(stdin);
		printf("Enter Name[%d] : ",I);
		gets(Name[I]);
	}
	
	printf("\n---------------- Output ---------------\n\n");
	for(I=0;I<N;I++)
	{
		printf("%s = %d\n",Name[I],strlen(Name[I]));
		Count = Count + strlen(Name[I]);
	}
	printf("\nTotal Number Of Character Is : %d",Count);
}
