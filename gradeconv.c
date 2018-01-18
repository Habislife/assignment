#include<stdio.h>
#include<conio.h>
int main(){
	int numgrade,c;
	char* lettergrade;
	printf("ENTER A NUMERICAL GRADE\n");
	aa:
	scanf("%d",&numgrade);
	c=numgrade;
	if(c>100||c<0)
	{printf("invalid grade\n");
	printf("enter a valid grade\n");
	goto aa;
	}
	else if(c<=59)
	{lettergrade="f";
	}
	else if(c<=69)
	{lettergrade="d";
	}else if(c<=79)
	{lettergrade="c";
	}
	else if(c<=89)
	{lettergrade="b";
	}
	
	else{
	lettergrade="a";
}
printf("you get %s",lettergrade);
	return 0;
}
