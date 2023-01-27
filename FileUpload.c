#include<stdio.h>
#include<string.h>

struct Student
{
	int Roll_No , GRNO ;
	char Name[100] , Gender[100] , Cast[100] ;
	float Eng , Maths , Sci , Social , Hindi , Gujarati ;
};

int StudPer(float Eng , float Maths ,float Sci ,float Social ,float Hindi ,float Gujarati, int N)
{
	float Per;
	int I;
	
	for(I=0;I<N;I++)
	{
		Per = (Eng + Maths + Sci + Social + Hindi + Gujarati)/6;
		return Per;
	}
}

int main()
{
	int N , I ;
	float Per[100];
	
	FILE *FP;
	
	printf("How Many Student Data Enter : ");
	scanf("%d",&N);
	
	char Grade[N];
	struct Student S[N];
	
	//Get Data
	for(I=0;I<N;I++)
	{
		system("CLS");
		printf("Student : %d/%d\n",I+1,N);
		fflush(stdin);
		printf("Enter Name : ");
		gets(S[I].Name);
		printf("Enter Gender : ");
		gets(S[I].Gender);
		printf("Enter Cast : ");
		gets(S[I].Cast);
		printf("Enter Roll No : ");
		scanf("%d",&S[I].Roll_No);
		printf("Enter GR No : ");
		scanf("%d",&S[I].GRNO);
		
		printf("\nEnter English Subject Marks \t\t: ");
		scanf("%f",&S[I].Eng);
		printf("Enter Maths Subject Marks \t\t: ");
		scanf("%f",&S[I].Maths);
		printf("Enter Science Subject Marks \t\t: ");
		scanf("%f",&S[I].Sci);
		printf("Enter Social Science Subject Marks \t: ");
		scanf("%f",&S[I].Social);
		printf("Enter Hindi Subject Marks \t\t: ");
		scanf("%f",&S[I].Hindi);
		printf("Enter Gujarati Subject Marks \t\t: ");
		scanf("%f",&S[I].Gujarati);
	}
	
	
	//Find Percentage Using UDF
	for(I=0;I<N;I++)
	{
		Per[I] = StudPer(S[I].Eng,S[I].Maths,S[I].Sci,S[I].Social,S[I].Hindi,S[I].Gujarati,N);
	}
	
	//Find Grade
	for(I=0;I<N;I++)
	{
		if(Per[I]<100 && Per[I]>=80)
		{
			Grade[I] = 'A';
		}
		else if(Per[I]<80 && Per[I]>=60)
		{
			Grade[I] = 'B';
		}
		else if(Per[I]<60 && Per[I]>=50)
		{
			Grade[I] = 'C';
		}
		else if(Per[I]<50 && Per[I]>=33)
		{
			Grade[I] = 'D';
		}
		else if(Per[I]<33)
		{
			Grade[I] = 'F';
		}
	}
	
	//File Data Insert
	FP = fopen("Student Marks.txt","a");
	if(FP == NULL)
	{
		printf("File Was Not Open....!!\n");
	}
	
	//Final Output
	fprintf(FP,"\t\t\t\t\t\t\t\t\t\t\t Student Result \n\n\n");
	fprintf(FP,"Roll No\tName\t\tGR Number\tGender\tCast\t\tEnglish\tMaths\tScience\tSS\t\tHindi\t\t Gujarati\tPer\tGrade\n");
	fprintf(FP,"________________________________________________________________________________________________________________________________________\n");
	fprintf(FP,"________________________________________________________________________________________________________________________________________\n");
	for(I=0;I<N;I++)
	{
		fprintf(FP,"%d\t\t%s\t\t\t%d\t\t\t%s\t\t%s\t\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\t%c\t\n",S[I].Roll_No,S[I].Name,S[I].GRNO,S[I].Gender,S[I].Cast,S[I].Eng,S[I].Maths,S[I].Sci,S[I].Social,S[I].Hindi,S[I].Gujarati,Per[I],Grade[I]);
	}
	
	
	printf("\n Data Inserted In File .....!!\n");

}
