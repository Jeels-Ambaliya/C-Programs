#include<stdio.h> 
 
main()    
{    
	int n,r,sum=0,temp , mul=0;  
	   
	printf("enter the number=");    
	scanf("%d",&n);    
	
	temp=n;    
	
	while(n>0)    
	{    
		r=n%10;    
		sum=sum+r;    
		n=n/10;    
	}  
	
	while(n>0)    
	{    
		r=n%10;    
		mul=mul*r;    
		n=n/10;    
	}  
	
	if(temp==sum && temp==mul)    
	{
		printf("Armstrong Number ");   
	}
	else 	
	{
		printf("Not Armstrong Number");
    }   
	   
//		return 0;  
} 
