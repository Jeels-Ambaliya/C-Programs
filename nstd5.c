#include<stdio.h>
#define P printf

main()
{
	int A,B,C,D,E;
	
	P("Enter Value Of A :");
	scanf("%d",&A);
	P("Enter Value Of B :");
	scanf("%d",&B);
	P("Enter Value Of C :");
	scanf("%d",&C);
	P("Enter Value Of D :");
	scanf("%d",&D);
	P("Enter Value Of E :");
	scanf("%d",&E);
	
	P("\n\n------------Answer----------\n");
	
	if(A==B && A==C && A==D && A==E && B==C && B==D && B==E && C==D && C==E && D==E )
	{
		P("All Value Are Equal.");
	}
	else if(A==B && B==C && C==D && A==C && A==D && B==D)
	{
		if(A>E)
		{
			P("A & B & C & D are Bigger than E.");
		}
		else
		{
			P("E is Big.");
		}
	}
	else if(A==B && B==C && A==C)
	{
		if(A>D)
		{
			P("A and B and C is Big.");
		}
		else 
		{
			P("D is Big.");
		}
	}
	else if(A==C && C==D && D==A)
	{
		if(A>B)
		{
			P("A and C and D is Big.");
		}
		else 
		{
			P("B is Big.");
		}
	}
	else if(A==B && B==D && D==A)
	{
		if(A>C)
		{
			P("A and B and D is Big.");
		}
		else 
		{
			P("C is Big.");
		}
	}
	else if(B==C && C==D && D==B)
	{
		if(B>A)
		{
			P("B and C and D is Big.");
		}
		else 
		{
			P("A is Big.");
		}
	}
	else if(A==B)
	{
		if(A>C)
		{
			P("A and B Are Big.");
		}
		else
		{
			P("C is Big.");
		}
	}
	else if(A==C)
	{
		if(A>B)
		{
			P("A and C Are Big.");
		}
		else
		{
			P("B is Big.");
		}
	}
	else if(A==D)
	{
		if(A>B)
		{
			P("A and D Are Big.");
		}
		else
		{
			P("B And C are Big.");
		}
	}
	else if(B==C)
	{
		if(C>A)
		{
			P("B and C Are Big.");
		}
		else
		{
			P("A is Big.");
		}
	}
	else if(A>B)
	{
		if(A>C)
		{
			if(A>D)
			{
				if(A>E)
				{
					P("A is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
			else
			{
				if(D>E)
				{
					P("D is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
		}
		else
		{
			if(C>D)
			{
				if(C>E)
				{
					P("C is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
			else
			{
				if(D>E)
				{
					P("D is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
		}
	}
	else
	{
		if(B>C)
		{
			if(B>D)
			{
				if(B>E)
				{
					P("B is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
			else
			{
				if(D>E)
				{
					P("D is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
		}
		else
		{
			if(C>D)
			{
				if(C>E)
				{
					P("C is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
			else
			{
				if(D>E)
				{
					P("D is Big.");
				}
				else
				{
					P("E is Big.");
				}
			}
		}
	}
}

