	#include<stdio.h>
	int main()
	 { 
		int number;
		float sum=0;
		int i;
		printf("enter a nth term for series\n");
		scanf("%d",&number);
		for(i=1;i<=number;i++)
		{
				sum=sum+(float)1/i;
				 if(i==1)
				{printf("(1+");
				}
				else if(i==number)
				{printf("1/%d)",i);}
				else
				{printf("1/%d+",i);
				}			
		}
		printf("=%f",sum);
		return 0;
   	
	   }
