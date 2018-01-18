#include<stdio.h>
// calendar//
int main()
{
	int daysinmonth,weekstartingday,k;
	int m,d,i,j,l;
	aa:
	printf("how many days are in month\n");
	scanf("%d",&daysinmonth);
	m=daysinmonth;
	if(m!=28&&m!=29&&m!=30&&m!=31){
		printf("enter a valid days for month\n");
		goto aa;
	}
	cc:
	printf("from which days month is start\n");
	printf("1-sunday\n");
	printf("2-monday\n");
	printf("3-tuesday\n");
	printf("4-wednesday\n");
	printf("5-thursday\n");
	printf("6-friday\n");
	printf("7-saturday\n");
	scanf("%d",&weekstartingday);
	d=weekstartingday;
	if(d>7||d<1){
		printf("enter between 1-7\n");
		goto cc;
	}
	k=1;
	for(i=1;i<=7;i++)
	{
		if (i<d){
			printf("   ");
		}
		else{
			printf(" %d ",k);
			k++;
		}
	}
	printf("\n");
	 while(k<=m)
	 {
		for(l=1;l<=7;l++)
		{
			if(k<=m)
			{
		     if(k/10==0)
		     {printf(" %d ",k);
			 }
			 else{
			 	printf("%d ",k);
			 }
			}
			k++;
		}
		printf("\n");
}
	return 0;
}
