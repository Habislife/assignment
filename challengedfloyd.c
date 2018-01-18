#include<stdio.h>
int main()
{int number,i,j,k;
printf("enter a no of  rows\n");
scanf("%d",&number);
k=0;
for(i=1;i<=(2*number-1);i=i+2)
{
	for(j=1;j<=i;j++)
	{
	if(j<=(i+1)/2)
	{k++;
}
else{k--;
}
	printf("%d  ",k);
	
	}
	printf("\n");
}
return 0;
}
