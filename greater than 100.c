	#include<stdio.h>
	//product of a and b is greater than 100 or not//
	int main()
	 { 
		int firstno,secondno;
		printf("enter a first number\n");
		scanf("%d",&firstno);
		printf("enter a second number\n");
		scanf("%d",&secondno);
		if(firstno*secondno==100)
		{
		printf("%d*%d is equals to",firstno,secondno);
		}
		else if(firstno*secondno>100)
		{
		printf("%d*%d is greater than 100",firstno,secondno);
		}
		else
		{
			printf("%d*%d is less than 100",firstno,secondno);
		}
		return 0;
   	
	   }
