#include<stdio.h>
#include<math.h>
int main()
{
	int number,r ,sum=0,i;
	printf("enter a number");
	scanf("%d",&number);
	i=number;
	while(i!=0)
	{r=i%10;
	i=i/10;
	sum=sum+pow(r,3);	
	}
	if(sum==number)
	{printf("armstrong");
	}
	else{printf("not");
	}
	return 0;
	
}
