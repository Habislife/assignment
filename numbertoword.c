#include<stdio.h>
#include<conio.h>
int main(){
	int i=0,c,firstno,twodigit,secondno;
	char* first;
	char*second;
	aa:
		i=0;
	printf("Enter a two digit number\n");
	scanf("%d",&twodigit);
	c= twodigit;
	while(c!=0)
	{i++;
	c=c/10;
	}
	if (i!=2)
	{printf("enter a valid no\n");
	goto aa;
	}
	else{
		firstno=twodigit/10;
		secondno=twodigit%10;
		if(firstno==1)
		{first="teen";}
		else if(firstno==2){
			first="twenty";
		}
		else if(firstno==3){
			first="thirty";
		}
		else if(firstno==4)
		{	first="forty";
		}
		else if(firstno==5){
			first="fifty";
		}
	else if(firstno==6){
			first="sixty";
		}
		else if(firstno==7){
			first="seventy";
		}
		else if(firstno==8){
			first="eighty";
		}
		else{
			first="ninty";
		}
		if (secondno==1){
			second="one";
		}
		else if(secondno==0){
		second="";}
		else if(secondno==2){
		second="two";}
		else if(secondno==3){
		second="three";}
		else if(secondno==4){
		second="four";}
		else if(secondno==5){
		second="five";}
		else if(secondno==6){
		second="six";}
		else if(secondno==7){
		second="seven";}
		else if(secondno==8){
		second="eight";}
		else{
			second="nine";
		}
		if(twodigit==10)
		{printf("ten");
		}
	    else if(twodigit==11)
		{printf("eleven");
		}
		else if(twodigit==12)
		{printf("tweleve");
		}
		else if(twodigit==13)
		{printf("thirteen");
		}
		else if(firstno==1)
		{printf("%s%s",second,first);
		}
		else{
		printf("%s%s",first,second);
		}
	}
	
}
