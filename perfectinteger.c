#include<stdio.h>
int main()
{
	int i,number,rem,sum=0;
	printf("enter a number\n");
	scanf("%d",&number);
	for(i=1;i<number;i++)
	{if(number%i==0)
	{sum=sum+i;
	}
	}
	if(number==sum)
	{printf("perfect integer");
	}
	else
	{printf("not perfect integer");
	}
}
