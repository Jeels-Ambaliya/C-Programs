#include<stdio.h>

int main()
{
	float Unit , Bill , Add;
	
	printf("Enter Your Units:");
	scanf("%f",&Unit);
	
	if(Unit <= 50)
	{
		Bill = Unit * 0.50;
	}
	else if(Unit > 50 && Unit <= 100)
	{
		Bill = Unit * 0.75;
	}
	else if(Unit > 100 && Unit < 250)
	{
		Bill = Unit * 1.20;
	}
	else if(Unit >= 250)
	{
		Bill = Unit * 1.50;
	}
	else
	{
		printf("Ignore");
	}
	
	Add = ( Bill * 20 ) / 100 ;
	
	system("cls");
	printf("------------Bill--------------\n\n");
	
	printf("You Pay Only %.2f Rs.",Bill + Add);
}
