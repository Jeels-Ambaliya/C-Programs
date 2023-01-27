#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int Type , Ticket, Place , Amount=0;
	
	P("Press 1 To BollyWood\n");
	P("Press 2 To HollyWood\n");
	P("Press 3 To TollyWood\n");
	P("Press 4 To Bhoj Puri\n");
	
	P("\nEnter Your Choice :");
	S("%d",&Type);
	
	switch(Type)
	{
		case 1:
			system("cls");
			P("--------------BollyWood-------------------\n\n");
			P("Press 1 to PK\t\t\t\t\t 210 Rs. \n");
			P("Press 2 to Shaadi Ke Side Effects\t\t 220 Rs. \n");
			P("Press 3 to Yeh Jawaani Hai Deewani\t\t 190 Rs.\n");
			P("Press 4 to Mere Dost Picture Abhi Baki Hai\t 235 Rs.\n");
			P("Press 5 to Jawaani Jaaneman\t\t\t 200 Rs.\n");
			
			P("\nEnter Your Choice :");
			S("%d",&Type);
			
			P("\nHow Many Ticket You Want ? :");
			S("%d",&Ticket);
			
			system("cls");
			P("Press 1 To Top Place    ( Ticket Price + 10% ) \n");
			P("Press 2 To Middle Place ( Ticket Price + 5% )\n");
			P("Press 3 To Bottom Place ( Ticket Price )\n");
			P("\nEnter Your Choice :");
			S("%d",&Place);
			
				switch(Type)
				{
					case 1:
						P("You Select PK Movie.\n");
						Amount += 210*Ticket;
						break;
						
					case 2:
						P("You Select PK Movie.\n");
						Amount += 220*Ticket;
						break;
						
					case 3:
						P("You Select PK Movie.\n");
						Amount += 190*Ticket;
						break;
						
					case 4:
						P("You Select PK Movie.\n");
						Amount += 235*Ticket;
						break;
						
					case 5:
						P("You Select PK Movie.\n");
						Amount += 200*Ticket;
						break;
						
					default:
						P("Ignore.\n");
						break;					
				}
			break;
			
		case 2:
			system("cls");
			P("--------------HollyWood-------------------\n\n");
			P("Press 1 to The Dark Knight\t 250 Rs.\n");
			P("Press 2 to Baby\t\t\t 300 Rs.\n");
			P("Press 3 to X-Men\t\t 210 Rs.\n");
			P("Press 4 to The Avengers\t\t 290 Rs.\n");
			
			P("\nEnter Your Choice :");
			S("%d",&Type);
			
			P("\nHow Many Ticket You Want ? :");
			S("%d",&Ticket);
			
			system("cls");
			P("Press 1 To Top Place    ( Ticket Price + 10% ) \n");
			P("Press 2 To Middle Place ( Ticket Price + 5% )\n");
			P("Press 3 To Bottom Place ( Ticket Price )\n");
			P("\nEnter Your Choice :");
			S("%d",&Place);
			
			switch(Type)
				{
					case 1:
						P("You Select The Dark Knight Movie.\n");
						Amount += 250*Ticket;
						break;
						
					case 2:
						P("You Select Baby Movie.\n");
						Amount += 300*Ticket;
						break;
						
					case 3:
						P("You Select X-Men Movie.\n");
						Amount += 210*Ticket;
						break;
						
					case 4:
						P("You Select The Avenger Movie.\n");
						Amount += 290*Ticket;
						break;
						
					default:
						P("Ignore.\n");
						break;					
				}
			
			break;
			
		case 3:
			system("cls");
			P("--------------TollyWood-------------------\n\n");
			P("Press 1 to Police Wala Gunda\t\t 200 Rs.\n");
			P("Press 2 to Haseena Maan Jayegi\t\t 150 Rs.\n");
			P("Press 3 to Love Ke Liye Kuch Bhi Karega\t 300 Rs.\n");
			P("Press 4 to Kunwara\t\t\t 100 Rs.\n");
			
			P("\nEnter Your Choice :");
			S("%d",&Type);
			
			P("\nHow Many Ticket You Want ? :");
			S("%d",&Ticket);
			
			system("cls");
			P("Press 1 To Top Place    ( Ticket Price + 10% ) \n");
			P("Press 2 To Middle Place ( Ticket Price + 5% )\n");
			P("Press 3 To Bottom Place ( Ticket Price )\n");
			P("\nEnter Your Choice :");
			S("%d",&Place);
			
			switch(Type)
				{
					case 1:
						P("You Select Police Wala Gunda Movie.\n");
						Amount += 200*Ticket;
						break;
						
					case 2:
						P("You Select Haseena Maan Jayegi Movie.\n");
						Amount += 150*Ticket;
						break;
						
					case 3:
						P("You Select Love Ke Liye Kuch Bhi Karenge Movie.\n");
						Amount += 300*Ticket;
						break;
						
					case 4:
						P("You Select Kunwara Movie.\n");
						Amount += 100*Ticket;
						break;
						
					default:
						P("Ignore.\n");
						break;					
				}
			
			break;
			
		case 4:
			system("cls");
			P("--------------Bhoj Puri-------------------\n\n");
			P("Press 1 to Rickshawala I Love You\t 210 Rs.\n");
			P("Press 2 to Setting Baaz\t\t\t 260 Rs.\n");
			P("Press 3 to Pepsi Peeke Lagelu Sexy\t 290 Rs.\n");
			P("Press 4 to Chhapra Express\t\t 310 Rs.\n");
			
			P("\nEnter Your Choice :");
			S("%d",&Type);
			
			P("\nHow Many Ticket You Want ? :");
			S("%d",&Ticket);
			
			system("cls");
			P("Press 1 To Top Place    ( Ticket Price + 10% ) \n");
			P("Press 2 To Middle Place ( Ticket Price + 5% )\n");
			P("Press 3 To Bottom Place ( Ticket Price )\n");
			P("\nEnter Your Choice :");
			S("%d",&Place);
			
			switch(Type)
				{
					case 1:
						P("You Select Rickshawala I Love You Movie.\n");
						Amount += 210*Ticket;
						break;
						
					case 2:
						P("You Select Setting Baaz Movie.\n");
						Amount += 260*Ticket;
						break;
						
					case 3:
						P("You Select Pepse Peeke Lagelu Sexy Movie.\n");
						Amount += 290*Ticket;
						break;
						
					case 4:
						P("You Select Chaapra Express Movie.\n");
						Amount += 310*Ticket;
						break;
						
					default:
						P("Ignore.\n");
						break;					
				}
			
			break;	
			
		default:
			P("Enter Valid Detail.");		
	}
	
	switch(Place)
	{
		case 1:
			Amount += ( Amount * 10 ) / 100 ;
			break;
		
		case 2:
			Amount += ( Amount * 5 ) / 100 ;
			break;
			
		case 3:
			
			break;
			
		default:
			P("Ignore.");
			break;		
			
	}
	system("cls");
	P("---------------------Bill-----------------------\n\n");
	P("You Pay %d Rs Only.",Amount);
	
}
