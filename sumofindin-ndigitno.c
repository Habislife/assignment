#include<stdio.h>
int main()
{
	int rem,l,ndigitno,indno,sum;
	sum=0;
	printf("enter a n digit number\n");
	scanf("%d",&ndigitno);
	l=ndigitno;
	while(l!=0){
		rem=l%10;
		l=l/10;
		sum=sum+rem;
	}
	printf("%d",sum);

	return 0;
	
}
