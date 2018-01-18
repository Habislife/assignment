#include<stdio.h>
int main()
{
	int j,ndigitnumber,i;
	printf("enter a ndigit number\n");
	i=0;
	scanf("%d",&ndigitnumber);
	j=ndigitnumber;
	while(j!=0){
		i++;
		j=j/10;
	}
printf("%d have %d digits",ndigitnumber,i);
}
