#include<stdio.h>
#include<string.h>

int main()
{
	char Pwd[200] , N , I , U = 0 , L = 0 , D = 0 , S = 0;
	
	printf("Enter Password.. : ");
	gets(Pwd);
	
	N = strlen(Pwd);
	for(I=0;I<N;I++)
	{
		if(Pwd[I] >= 'A' && Pwd[I] <= 'Z')
		{
			U++;
		}
		else if(Pwd[I] >= 'a' && Pwd[I] <= 'z')
		{
			L++;
		}
		else if(Pwd[I] >='0' && Pwd[I] <= '9')
		{
			D++;
		}
		else
		{
			S++;
		}
	}
	
	printf("\n-------- Password Information -----------------\n");
	printf("Upper Letter : %d\n",U);
	printf("Lowwer Letter : %d\n",L);
	printf("Digit : %d\n",D);
	printf("Special Character : %d\n",S);
	printf("Password Length : %d\n",N);
	
	printf("\n-------------------- Output ---------------\n\n");
	if(U>0 && L>0 && D>0 && S>0 && N>=6)
	{
		printf("Password Are Strong...\n");
	}
	else if(U>0 && L>0 && D>0 && N>=6)
	{
		printf("Your Password Was Not Weak But You Can Strong Your Password...\n");
	}
	else
	{
		printf("Password Are Weak...\n");
	}
}
