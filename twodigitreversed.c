#include<stdio.h>
int main()
{
	int j,twodigitnumber,firstno,secondno,i,final;
	aa:
	printf("enter a twodigit number\n");
	i=0;
	scanf("%d",&twodigitnumber);
	j=twodigitnumber;
	while(j!=0){
		i++;
		j=j/10;
	}
	if(i!=2)
	{printf("enter a valid number which is twodigit from 10-99\n");
	goto aa;
	}
	else{
		firstno=twodigitnumber/10;
		secondno=twodigitnumber%10;
		final=secondno*10+firstno;
	}
	printf("%d is reversed in %d",twodigitnumber,final);
}
