#include<stdio.h>
#define p printf
int main()
{
	int choice,bill=0,qty;
	tmp:
	p("Welcome to the All in one Restaurant\n");
	p("Enter 1 for Pizza Menu.\n");
	p("Enter 2 for Vada Pav Menu.\n");
	p("Enter 3 for Dosa Menu.\n");
	p("Enter 4 for Locho Menu.\n");
	scanf("%d",&choice);
	
	////////system("CLS");
	switch(choice)
	
	{
		case 1:
			p("You Have Selected Pizza menu!!!\n");
			p("Enter 1 for 7 Cheesy Pizza. \t\t Price: 750/-\n");
			p("Enter 2 for Indian style pizza.\t\t Price: 850/-\n");
			p("Enter 3 for Garden Special pizza.\t Price: 950/-\n");
			p("Enter 3 for Peri Peri Special pizza.\t Price: 750/-\n");
			p("Enter 3 for Farm Villa pizza.\t Price: 950/-\n");
			scanf("%d",&choice);
			p("Enter The Quantity here:");
			scanf("%d",&qty);
			////////system("CLS");
			switch(choice)
			{
				case 1:
					p("You have ordered 7 Cheesy Pizza\n");
					bill +=750*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
				
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only." ,bill);
							break;
					}
					
				case 2:
					p("You have ordered Indian Style Pizza\n");
					bill +=850*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
					
				case 3:
					p("You have ordered Garden Special Pizza\n");
					bill +=950*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
			}
			break;
			
		case 2:
			p("You Have Selected Vadapaw menu!!!\n");
			p("Enter 1 for Butter Vada Pav. \t\t Price: 75/-\n");
			p("Enter 2 for Cheese Vada Pav.\t\t Price: 85/-\n");
			p("Enter 3 for Spicy Cheese Vada Pav.\t Price: 95/-\n");
			scanf("%d",&choice);
			p("Enter The Quantity here:");
			scanf("%d",&qty);
			//////////system("CLS");
			switch(choice)
			{
				case 1:
					p("You have selected Butter vada pav.\n");
					bill += 75*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
				
				case 2:
					p("You have selected Cheese vada pav.\n");
					bill += 85*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
					
				case 3:
					p("You have selected Spicy Cheese vada pav.\n");
					bill += 95*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
			}
			
			break;
		case 3:
			p("You Have Selected Dosa menu!!!\n");
			p("Enter 1 for Palak panner Dosa. \t Price: 350/-\n");
			p("Enter 2 for Pizza Dosa.\t\t Price: 450/-\n");
			p("Enter 3 for Special Dosa.\t Price: 650/-\n");
			scanf("%d",&choice);
			p("Enter The Quantity here:");
			scanf("%d",&qty);
			//////////system("CLS");
			switch(choice)
			{
				case 1:
					p("You have selected Palak Panner Dosa.\n");
					bill += 350*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
				
				case 2:
					p("You have selected Pizza Dosa.\n");
					bill += 450*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
					
				case 3:
					p("You have selected Special Dosa.\n");
					bill += 650*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
			}
			
			break;
		case 4:
			p("You Have Selected Locho menu!!!\n");
			p("Enter 1 for Butter locho. \t\t Price: 100/-\n");
			p("Enter 2 for Cheese Butter locho.\t Price: 180/-\n");
			p("Enter 3 for Cheese Garlic locho.\t Price: 240/-\n");
			scanf("%d",&choice);
			p("Enter The Quantity here:");
			scanf("%d",&qty);
			////////system("CLS");
			switch(choice)
			{
				case 1:
					p("You have selected Butter Locho.\n");
					bill += 100*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
				
				case 2:
					p("You have Cheese Butter locho.\n");
					bill += 180*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
					
				case 3:
					p("You have selected Garlic Cheese Locho.\n");
					bill += 240*qty;
					p("Enter 1 for order more\n");
					p("Enter 2 for order bill\n");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							goto tmp;
							break;
						case 2:
							p("Your Total Bill is : %d Rs Only.",bill);
							break;
					}
			}
		
			break;
			
			default:
				p("Sorry it's available.");
				break;
			
	}
	
}