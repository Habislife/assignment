#include<stdio.h>
int main()
{
	int j,threedigitnumber,firstno,secondno,thirdno,i,final;
	aa:
	printf("enter a threedigit number\n");
	i=0;
	scanf("%d",&threedigitnumber);
	j=threedigitnumber;
	while(j!=0){
		i++;
		j=j/10;
	}
	if(i!=3)
	{printf("enter a valid number which is twodigit from 100-999\n");
	goto aa;
	}
	else{
		firstno=threedigitnumber/100;
		thirdno=threedigitnumber%10;
		secondno=(threedigitnumber-firstno*100-thirdno)/10;
		final=thirdno*100+secondno*10+firstno;
	}
	printf("%d is reversed in %d",threedigitnumber,final);
}
