	#include<stdio.h>
	//to find side of triangles is or not //
	int main()
	 { 
		int firstside,secondside,thirdside;
		printf("enter length  of first side\n");
		scanf("%d",&firstside);
		printf("enter lenght of second side\n");
		scanf("%d",&secondside);
		printf("enter lenght of third side\n");
		scanf("%d",&thirdside);
		if(firstside+thirdside>secondside)
		{
		printf("%d,%d%&%d are side of triangle",firstside,secondside,thirdside);
		}
		else if(firstside+secondside>thirdside)
		{
		printf("%d,%d&%d are side of triangle",firstside,secondside,thirdside);
		}
		else if(firstside<secondside+thirdside)
		{
		printf("%d,%d&%d are side of triangle",firstside,secondside,thirdside);
		}
		else
		{
			printf("%d,%d&%d are not side of triangle",firstside,secondside,thirdside);
		}
		return 0;
   	
	   }
