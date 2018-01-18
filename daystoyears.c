#include<stdio.h>
int main()
{
	int days,day,years,week;
	printf("enter  days for finding years,week&days \n");
	scanf("%d",&days);
	day=days;
	years=days/365;
	days=days-years*365;
	week=days/7;
	days=days-week*7;
	printf("%d days means %d years %d weeks %d days",day,years,week,days);
return 0;
}
