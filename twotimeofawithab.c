	#include<stdio.h>
	//product of a and b is greater than 2a or not//
	int main()
	 { 
		int firstno,secondno;
		printf("enter a first number\n");
		scanf("%d",&firstno);
		printf("enter a second number\n");
		scanf("%d",&secondno);
		if(firstno*secondno==2*firstno)
		{
		printf("%d*%d is equals to2*%d",firstno,secondno,firstno);
		}
		else if(firstno*secondno>2*firstno)
		{
		printf("%d*%d is greater than 2*%d",firstno,secondno,firstno);
		}
		else
		{
			printf("%d*%d is less than 2*%d",firstno,secondno,firstno);
		}
		return 0;
   	
	   }
