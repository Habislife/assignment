#include<stdio.h>
int main()
{
	char* month;
	int year,julian,fours,hundred,fourhundred,dayoftheweek,k;
	int totalday,i,j,l,m,d,e;
	printf("enter yearin all four digit\n");
	scanf("%d",&year);
	julian=1;
	fours=(year-1)/4;
	hundred=(year-1)/100;
	fourhundred=(year-1)/400;
	printf("year : %d\n",year);
		for(i=1;i<=12;i++)
		{if (i==1)
         {m=31;}
           else if(i==2)
           {if(year%4==0&&year%100!=0||year%400==0)
		 {
			m=28;
		  }
		 else{
			m=29;
		 }}
         else if(i==3)
         {m=31;}
		 else if(i==4)
		 {m=30;}
		 else if(i==5)
		 {m=31;}
         else if(i==6)
         {m=30;}
          else if(i==7)
         {m=31;}
           else if(i==8)
          {m=31;}
         else if(i==9)
         {m=30;}
          else if(i==10)
         {m=31;}
          else if(i==11)
         {m=30;}
          else
          {m=31;}
			{if (i==1)
         {month="january";}
           else if(i==2)
           {month="feburary";}
         else if(i==3)
         {month="march";}
		 else if(i==4)
		 {month="april";}
		 else if(i==5)
		 {month="may";}
         else if(i==6)
         {month="june";}
          else if(i==7)
         {month="july";}
           else if(i==8)
          {month="august";}
         else if(i==9)
         {month="september";}
          else if(i==10)
         {month="october";}
          else if(i==11)
         {month="november";}
          else
          {month="december";}
			k=1;
				dayoftheweek=(year+julian+fours-hundred+fourhundred)%7;
	d=dayoftheweek;
	printf("%s\n",month);
			for(e=0;e<=6;e++)
	{
		if (e<d){
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
		for(l=0;l<=6;l++)
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
julian=julian+m;
	       		
	
}
}
}


