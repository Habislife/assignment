#include<stdio.h>
int main()
{
	int year,julian,fours,hundred,fourhundred,dayoftheweek;
	printf("enter yearin all four digit\n");
	scanf("%d",&year);
	printf("enter a julian day for a year\n");
	scanf("%d",&julian);
	fours=(year-1)/4;
	hundred=(year-1)/100;
	fourhundred=(year-1)/400;
	dayoftheweek=(year+julian+fours-hundred+fourhundred)%7;
	printf("%d",dayoftheweek);
}
