	#include<stdio.h>
	int main()
	 { 
		int number,sum=0,prev=0,i,j;
		printf("enter a nth term for series\n");
		scanf("%d",&number);
		for(i=1;i<=number;i++)
		{
			for(j=1;j<=i;j++)
			{
				sum=sum+j;
				 if(j==1)
				{printf("(%d+",j);
				}
				else if(j==i)
				{printf("%d)",j);}
				else
				{printf("%d+",j);
				}
			}
			prev =prev+sum;
			
		}
		printf("=%d",prev);
		return 0;
   	
	   }
