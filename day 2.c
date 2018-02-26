#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
void main()

{                     
printf("     |     |  _  |     __   __    _   _   _\n");
printf("     |  _  | |_  |    |    |  |  | |_| | |_\n");
printf("     |_| |_| |_  |___ |__  |__|  |     | |_\n");
	char*playername;
	int quest[10];
    int i,j;
	int registration,age,point=0;
	int answer,question;
	char sex;
char level;
int k,l;
int life;
	point=0;
	printf("Enter a playername\n");
	srand(time(NULL));
registration =rand()%1000;
	scanf("%s",&playername);
	age1:
	printf("Enter a player's age in number ex 15,19,20\n");
	scanf("%d",&age);
	if(age<5||age>100)
	{
		printf("Enter a valid age(5-10)\n");
		goto age1;
	}
	gender:
		printf("Enter a sex(M/F)\n");
	scanf("%s",&sex);
	if(sex=='m'||sex=='M'){
	printf("Welcome to HABIS Quiz gaming world.\n");
		printf("MR. %s\n",&playername);
}
    else if(sex=='f'||sex=='F'){
	printf("Welcome to HABIS Quiz gaming world.\n");
		printf("MRS./MS %s\n",&playername);}
		else
		{printf("enter a valid sex.\n");
		goto gender;
		}
		lev:
		printf("Enter a level\n");
	printf("Easy-E/e\n");
	printf("Medium-M/m\n");
	printf("Hard-H/h\n");
	scanf("%s",&level);
	if(level=='E'||level=='e')
	{k=6;}
    else if(level=='M'||level=='m')
	{k=11;}
		else if(level=='H'||level=='h')
		{k=16;}
		
		else
		{printf("enter a valid level.\n");
		goto lev;
		}
		l=(k-1)*2;
		j=1;
		life=3;
		while(j<k)
{
		ques:
			srand(time(NULL));
question =rand()%51+1;
		//printf("Enter a question number\n ");
		int check=0;
//		scanf("%d",&question);
//		if(question<1||question>30)
//		{
//		printf("Enter a valid question number(1-30).");
//		goto ques;
//		}
			for (i=0;i<j;i++)
		{
			if ( quest[i]==question){
				check=check+1;
			}
		}
	if (check!=0)
	{
		//printf("question is already taken.\n");
		goto ques;
	}
else
{
	quest[j-1]=question;
}
if(question==1)
{
start1:
	printf("What was Janakpur called in the Tretayuga?\n");
	printf("1.Mithila     3.Bhadgaun\n");
	printf("2.Kritipur     4.Alkapuri\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start1;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 1.Mithila\n");
			goto finish;
		}
	
}
else if(question==2)
{
start2:
	printf("Which lake is situated at highest altitude in Nepal?\n");
	printf("1.Tilicho     3.Gosaikunda\n");
	printf("2.Rara     4.Phoksundo\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start2;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Tilicho\n");
			goto finish;
		}
}
else if(question==3)
{
start3:
	printf("Which is the scientist who discovered the Solar system?\n");
	printf("1.Sir Issac Newton     3.Copernicus\n");
	printf("2.Gaileo               4.Thomas Elva Edison\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
		   printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start3;
			}
		if (answer==3)
		{point=point+2;
		 answer=0;}
		else{
              printf("Your answer is 3.Copernicus\n");
			goto finish;
			}
		}
else if(question==4)
{
		start4:
		printf("Which is the third country to estabilish diplomatic relation with nepal?\n");
	printf("1.England     3.India\n");
	printf("2.France    4.Great Britian\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start4;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3.India\n");
			goto finish;
		}
}
else if(question==5)
{start5:
		printf("Which temple is located at highest altitude of Nepal?\n");
	printf("1.Manakamana     3.Muktinath\n");
	printf("2.Maheswori Dyochen    4.Malikarjun(Darchula)\n");
		scanf("%d",&answer);
		if(answer<1||answer>4){
		printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start5;
			}
		if (answer==3)
		{
		point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3.Muktinath\n");
			goto finish;
			}
		}
else if(question==6)
{
		start6:
		printf("How many countries are the founder members of the United Nations ?\n");
	printf("1.51     3.55\n");
	printf("2.45    4.35\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start6;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 1. 51\n");
			goto finish;
		}
}
else if(question==7)
{
	start7:
		printf("Who invented mimeograph and loudspeaker?\n");
	printf("1.Charles Richter     3.Michael Faraday\n");
	printf("2.Guglielmo Marconi     4.Thomas Elva Edison\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start7;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 4.Thomas Elva Edison\n");
			goto finish;
		
}
}else if(question==8)
{
	start8:
		printf("Which is the largest river in Nepal?\n");
	printf("1.Karnali     3.Saptagandaki\n");
	printf("2.Rapti        4.Saptakoshi\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start8;
			}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 4.Saptakoshi\n");
			goto finish;
		}
}
else if(question==9)
{
		start9:
		printf("How many satellite does the Jupiter have?\n");
	printf("1.28     3.16\n");
	printf("2.13      4.18\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start9;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3.16\n");
			goto finish;
		}
}
else if(question==10)
{
start10:
		printf("Which tree is called the tree of medicine?\n");
	printf("1.Neem        3.Tulsi\n");
	printf("2.Himalayan Yew    4.Rubber\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start10;
		}
				if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 1.Neem");
			goto finish;
		}
}
else if(question==11)
{
start11:
		printf("Who was the prime minister of nepal when the Narayanhiti Massacre took place?\n");
	printf("1.Sher Bahadur Deuba        3.Krishna Parasad Bhattari\n");
	printf("2.Girija Parasad Koirala    4.Madan Bhandari\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start11;
		}
				if (answer==2)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 2.Girija Parsad Koirala\n");
			goto finish;
		}	
}
else if(question==12)
{
	start12:
      printf("Who is author of 'Naso',a story book?\n");
	printf("1.Diamond Sumsher        3.B.P.Koirala\n");
	printf("2.Guru Parsad Mainali    4.Bal Krishna Sama\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{   printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start12;
			}
        if (answer==2)
		{point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 2.Guru Prasad Mainali");
			goto finish;
			}
}
else if(question==13)
{
		start13:
		printf("Who  was Author of Aina which was rewarded by Madan puraskar in 2072 B.S ?\n");
	printf("1.Ramlal Joshi         3.Rajan Mukarung \n");
	printf("2.Vijay Kumar Pandey   4.Jagadish Ghimire\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start13;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 1.Ramlal Joshi\n");
			goto finish;
		}
	
}
else if(question==14)
{
	start14:
		printf("Nepalese Women declared CNN Hero in Year 2012(AD) is:\n");
	printf("1.Anuradha Koirala       3.Puspa Basnet\n");
	printf("2.Himani Shah   4.Durga Ghimire\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start14;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3.Puspa Basnet\n");
			goto finish;
		}
}
else if(question==15)
{
	start15:
		printf("Nepalese Women declared CNN Hero in Year 2011(AD) is:\n");
	printf("1.Anuradha Koirala       3.Puspa Basnet\n");
	printf("2.Himani Shah   4.Durga Ghimire\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start15;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
		printf("Your answer is 3.Pushpa Basnet\n");
			goto finish;
		}
		
}else if(question==16)
{
	start16:
    printf("Which is largest donor of nepal ?\n");
	printf("1.AUSTRAILA         3.U.S.A \n");
	printf("2.KOREA             4.JAPAN\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start16;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 4.JAPAN\n");
			goto finish;
		}	
}else if(question==17)
{
		start17:
    printf("What is swayambhunath believed to have emerged from?\n");
	printf("1.Nail of Budhha         3.Sunflower \n");
	printf("2.Rose                   4.Lotus\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start17;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 4.Lotus\n");
			goto finish;
		}
}
else if(question==18)
{start18:
    printf("Which is odd in Pigeon,Dove,Crow,Bat and Nightingale ?\n");
	printf("1.BAT         3.PIGEON \n");
	printf("2.DOVE            4.CROW\n");
     printf("     5.NIGHTINGALE              \n");
		scanf("%d",&answer);
		if(answer<1||answer>6)
		{	printf("enter a valid answer\n");
			printf("enter 1 2 3 4 5\n");
			goto start18;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 1.BAT\n");
			goto finish;}
		}
else if(question==19)
{
	start19:
		printf("RANI MAHAL IS FAMOUS AS NEPAL'S TAJ MAHAL?\n");
	printf("1.Pokhara    3.Palpa\n");
	printf("2.Simkot    4.Basantapur\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start19;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3. Palpa\n");
			goto finish;
		}
}
else if(question==20)
{
	start20:
    printf("How many types of nutrient are there?\n");
	printf("1.5         3.6 \n");
	printf("2.12            4.4\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start20;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
          printf("Your answer is 3.6\n");
			goto finish;
        }
}
else if(question==21)
{
	start21:
    printf("Where is Gobi Desert located?\n");
	printf("1.Mongolia         3.Africa \n");
	printf("2.Nambia            4.India\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start21;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
          printf("Your answer is 1.Mongolia\n");
			goto finish;
        }	
}
else if(question==22)
{
	start22:
    printf("Which European country did Renaissance commence from?\n");
	printf("1.France         3.Germany \n");
	printf("2.Italy          4.England\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start22;
		}
		if (answer==2)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 2.Italy\n");
			goto finish;
	    }
	}
else if(question==23)
{
start23:
    printf("Which creature is called 'The Flying Fox'?\n");
	printf("1.Bat         3.Dolphin \n");
	printf("2.Lizard      4.Parrot\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start23;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 1.Bat\n");
			goto finish;

	    } 
		}
else if(question==24)
{
		start24:
		printf("What does mean by WWW means?\n");
	printf("1.World Website Writer     3.World Women Wrestling \n");
	printf("2.Wider Web Whitehacker     4.World Wide Web\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start24;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 4.World Wide Web\n");
			goto finish;
		}
}
else if(question==25)
{
	start25:
    printf("Which is the longest living animal of the world?\n");
	printf("1.Tortoise        3.Rabbit\n");
	printf("2.Elephant        4.Dog\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start25;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 1.Tortoise \n");

			goto finish;
       }		
}
else if(question==26)
{
		start26:
		printf("Which is the lightest gas?\n");
	printf("1.Oxygen       3.Helium\n");
	printf("2.Hydrogen   4.Carbondioxide\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start26;
		}
				if (answer==2)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 2.Hydrogen\n");
			goto finish;
		}
}
else if(question==27)
{
	start27:
    printf("Which creature produces its food itself?\n");
	printf("1.Amoeba        3.Water Silk\n");
	printf("2.Paramecium     4.Euglena\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start27;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 4.Euglena\n");
			goto finish;
       }
}
else if(question==28)
{
	start28:
		printf("When is noble prize is awarded every year?\n");
	printf("1.1st JAN          3.10th DEC \n");
	printf("2.31st DEC        4.21th OCT\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start28;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
			printf("Your answer is 3.10th DEC\n");
			goto finish;
		}
}
else if(question==29)
{
	start29:
    printf("Who is known as the goddess of alcohol?\n");
	printf("1.Baidehi        3.Satrupa\n");
	printf("2.Gandhari     4.Mandira\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start29;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
           printf("Your answer is 4.Mandira\n");
			goto finish;
       }
}

else if (question==30)
{
	start30:
    printf("Which country is known as the 'Pearl of the East'?\n");
	printf("1.Hongkong        3.Singapore\n");
	printf("2.Nepal           4.China\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start30;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		
		else{
           printf("Your answer is 3.Singapore\n");
			goto finish;
       }
}
else if(question==31)
{
start31:
	printf("Neutron was discovered by ?\n");
	printf("1.Newton     3.Mendeelev\n");
	printf("2.Rutherford     4.Chadwick\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start2;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.Chadwick.\n");
			goto finish;
		}
}
else if(question==32)
{
start32:
	printf("The theory of evolution was produced by:\n");
	printf("1.Darwin     3.Newton\n");
	printf("2.Einstein   4.Mendeleev\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start32;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Darwin.\n");
			goto finish;
		}
}
else if(question==33)
{
start33:
	printf(" Cinematography was invented by ? \n");
	printf("1.Graham Bell     3.Edison\n");
	printf("2.Zeiss           4.Faraday\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start33;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.Edison.\n");
			goto finish;
		}
}
 else if(question==34)
{
start34:
	printf("Inert gases were discovered by ?\n");
		printf("1.Dalton       3.Newton\n");
			printf("2.Roentgen     4.Ramsay\n");

		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start34;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.Ramsay.\n");
			goto finish;
		}
}
else if(question==35)
{
start35:
	printf("Who wrote 'A Brief History of Time'?\n");
	printf("1.Einstein       3.Stephen Hawking\n");
	printf("2.Newton         4.Faraday\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start35;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.Stephen Hawking.\n");
			goto finish;
		}
}
 else if(question==36)
{
start36:
printf("Who discoverd Oxygen?\n");
	printf("1.Lavoisier         3.Joseph pristley \n");
	printf("2.Dalton            4.Swinton\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start36;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.Swinton.\n");
			goto finish;
		}
}
else if(question==37)
{
start37:
    printf("Which is the purest water form of nature?\n");
	printf("1.Rain water       3.Spring water\n");
	printf("2.Well water       4.Mineral water\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start37;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Rain water.\n");
			goto finish;
		}
}
else if(question==38)
{
start38: 
    printf(" The most abundant element on the earth crust is?\n");
	printf("1.Calcium       3.Oxygen\n");
	printf("2.Zinc          4.Gold\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start38;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.Oxygen.\n");
			goto finish;
		}
}
else if(question==39)
{
start39: 
      printf("Which country is known as 'Economic power House' of Europe?\n");
	printf("1.Germany    3.Denmark\n");
	printf("2.France     4.Spain\n");
		scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start39;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Germany.\n");
			goto finish;
		}
}
else if(question==40)
{
start40: 
        printf("Which country is the biggest producer of Cement in the world ?\n");
	printf("1.Germany    3.Denmark\n");
	printf("2.France     4.Spain\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start40;
		}
		if (answer==2)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 2.France.\n");
			goto finish;
		}
}
 else if(question==41)
{
start41: 
          printf("Which country is known as 'Hermit of Kingdom'?\n");
	printf("1.Japan    3.Korea\n");
	printf("2.China     4.India\n");

	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start41;
		}
		if (answer==2)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 2.China.\n");
			goto finish;
		}
}
else if(question==42)
{
start42: 
                printf("Which is father of zoology?\n");
	printf("1.Aristotle    3.Charles Darwin\n");
	printf("2.Mendel       4.Perkins\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start42;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Aristotle.\n");
			goto finish;
		}
}
else if(question==43)
{
start43: 
                printf("Who is wife of Karna,mythical warrior of mahabharat?\n");
	printf("1.Parshavi    3.Padmawati\n");
	printf("2.Subhadra       4.Sunayana\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start43;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.Padmawati.\n");
			goto finish;
		}
}
else if(question==44){
	start44:
		printf("What  is the first Nepali newspaper published in Nepal?\n");
	printf("1.Sudhasagar    3.Gorkhapatra\n");
	printf("2.Kantipur       4.The Himalayan Times\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start44;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Sudhasagar.\n");
			goto finish;
}
}
//45
else if(question==45){
	start45:
		printf("When was Durbar High School estabilished?\n");
	printf("1.1990 B.S    3.1910 B.S\n");
	printf("2.1997 B.S       4.1907 B.S\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start45;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.1910.\n");
			goto finish;
}
}
//46
else if(question==46){
	start46:
		printf("When  is the International litreacy day observed?\n");
	printf("1.10 Dec    3.9 Oct\n");
	printf("2. 16 July       4.8 Sep\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start46;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.8 Sep.\n");
			goto finish;
}
}
//47
else if(question==47){
	start47:
		printf("When was Pokhara University estabilished?\n");
	printf("1.2045 B.S       3.2050 B.S\n");
	printf("2.2016 B.S       4.2048 B.S\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start47;
		}
		if (answer==3)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 3.2050 B.S.\n");
			goto finish;
}
}
//48
else if(question==48){
	start48:
		printf("Who is author of 'Seto Bagh'?\n");
	printf("1.Bal Krishna Sama    3.Vidyapati\n");
	printf("2.Parijat            4.Diamond Sumsher\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start48;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.Diamond Sumsher.\n");
			goto finish;
}
}
//49
else if(question==49){
	start49:
		printf("Who is author of 'U Mareki Chhaina'?\n");
	printf("1.Bal Krishna Sama    3.Mohan Prasad Khanal\n");
	printf("2.Madanmani Dixit            4.Diamond Sumsher\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start49;
		}
		if (answer==1)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 1.Bal Krishna Sama.\n");
			goto finish;
}
}
//50
else{
	start50:
		printf("Who is author of 'Muna Madan'?\n");
	printf("1.Bal Krishna Sama    3.Madhav Prasad Ghimire\n");
	printf("2.Parijat            4.Laxmi Parsad Devkota\n");
	scanf("%d",&answer);
		if(answer<1||answer>4)
		{
			printf("enter a valid answer\n");
			printf("enter 1 2 3 4\n");
			goto start48;
		}
		if (answer==4)
		{
			point=point+2;
		answer=0;
		}
		else{
        printf("Your answer is 4.Laxmi Prasad Devkota.\n");
			goto finish;
}
}
 j=j+1;
}
finish:
	if(life>1)
	{
		life=life-1;
		goto ques;
	}
	if (point>=l)
	{
printf("|     |             _  _  _ \n");
printf("|  _  | .   _   _  |_ |_ |_|\n");
printf("|_| |_| |  | | | | |_ |_ |\\ \n");
		printf("registration   playername\n");
	    printf("%d                      %s\n",registration,&playername);	
	printf("your point is %d",point);
	}
	else{
printf("|         ___   ___   __ \n");
printf("|        |   | |___  |__  \n");
printf("|______  |___|  ___| |__  \n");
	printf("registration   playername\n");
	printf("%d          %s\n",registration,&playername);	
	printf("your point is %d",point);
}
getch();
}
