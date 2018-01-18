#include<stdio.h>
int main()
{int number,i,j,k;
printf("enter a no of  rows\n");
scanf("%d",&number);
k=1;
for(i=1;i<=number;i++)
{
	for(j=1;j<=i;j++)
	{printf("%d  ",k);
	k++;
	}
	printf("\n");
}
return 0;
}
