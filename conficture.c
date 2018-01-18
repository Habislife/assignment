	#include<stdio.h>
	int main()
	 { 
		int number,num;
		printf("enter a number\n");
		scanf("%d",&number);
		num=number;
		printf("%d\n",number);
		while(number!=1)
		{
			if(number%2==0)
			{
				number=number/2;
				printf("%d(%d/2)\n",number,num);
			}
			else{
				number=number*3+1;
			printf("%d(%d*3+1)\n",number,num);
			}
			num=number;
		}
		return 0;
   	
	   }
