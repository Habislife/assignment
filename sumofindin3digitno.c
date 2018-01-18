#include<stdio.h>
int main()
{
	int rem,l,ndigitno,indno,sum,i=0;
	sum=0;
	printf("enter a three digit number\n");
	scanf("%d",&ndigitno);
	l=ndigitno;
	while(l!=0){
		rem=l%10;
		l=l/10;
		i++;
		sum=sum+rem;
	}
	if(i==3)
	printf("%d",sum);
	else
	{printf("enter valid number");
	}
	return 0;
	
}
