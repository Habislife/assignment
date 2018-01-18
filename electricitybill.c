#include<stdio.h>
int main()
{
	int stunit,unit;
	float cost1=0,cost2=0,cost3=0,cost4=0,totalcost=0,costwithvat=0;
	printf("enter total unit\n");
	scanf("%d",&unit);
	stunit=unit;
	cost1=80.0;
	unit=unit-20;
	if(unit<=0);
	else{
	
	if(unit!=0){
		if(unit-80<=0)
		{cost2=unit*7.5;
		}
		else{
			cost2=80*7.5;
			unit=unit-80;
		}
		
	}
//SECONDTIME//
	if(unit!=0){
		if(unit-100<=0)
		{cost3=unit*8.5;
		}
		else{
			cost3=100*8.5;
			unit=unit-100;
		}
		
	}	
	//BEYOND 200//
		if(unit!=0){
		cost4=unit*9.5;
		
	}
}
	totalcost=cost1+cost2+cost3+cost4;
	costwithvat=totalcost+0.15*totalcost;
	printf("the total amount in Rs.%f",costwithvat);
	return 0;
}
