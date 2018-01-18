	#include<stdio.h>
	//a is divisible by b or not//
	int main()
	 { 
		int firstno,secondno;
		printf("enter a first number\n");
		scanf("%d",&firstno);
		printf("enter a second number\n");
		scanf("%d",&secondno);
		if(firstno%secondno==0)
		{
		printf("%d is divisible by %d",firstno,secondno);
		}
		else
		{
			printf("%d isnot divisible by %d",firstno,secondno);
		}
		return 0;
   	
	   }
