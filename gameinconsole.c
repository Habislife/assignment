#include<stdio.h>
#include<stdlib.h>
int main()
{
	char*playername;
	int registration,age,amount;
	int answer;
	amount=0;
	printf("Enter a playername\n");
	int rand(registration);
	scanf("%s",&playername);
	printf("Enter a player's age'\n");
	scanf("%s",&age);
	printf("Welcome to HABIS Quiz gaming world.\n");
		printf("MR\\MRS %s\n",&playername);
// QUESTION START //
	printf("What was Janakpur called in the Tretayuga?\n");
	printf("1.Mithila     3.Bhadgaun\n");
	printf("2.Kritipur     4.Alkapuri\n");
		scanf("%d",&answer);
		if (answer==1)
		{
			amount=100;
		answer=0;
		}
		else{
			goto finish;
		}
		printf("Which is the third country to estabilish diplomatic relation with nepal?\n");
	printf("1.England     3.India\n");
	printf("2.France    4.Great Britian\n");
		scanf("%d",&answer);
		if (answer==3)
		{
			amount=amount+100;
		answer=0;
		}
		else{
			goto finish;
		}
		printf("Who invented mimeograph and loudspeaker?\n");
	printf("1.Charles Richter     3.Michael Faraday\n");
	printf("2.Guglielmo Marconi     4.Thomas Elva Edison\n");
		scanf("%d",&answer);
		if (answer==4)
		{
			amount=amount+100;
		answer=0;
		}
		else{
			goto finish;
		}
		printf("Who was the prime minister of nepal when the Narayanhiti Massacre took place?\n");
	printf("1.Sher Bahadur Deuba        3.Krishna Parasad Bhattari\n");
	printf("2.Girija Parasad Koirala    4.Alkapuri\n");
		scanf("%d",&answer);
		if (answer==2)
		{
			amount=amount+100;
		answer=0;
		}
		else{
			goto finish;
		}
		printf("Who  was Author of Aina which was rewarded by Madan puraskar in 2072 B.S ?\n");
	printf("1.Ramlal Joshi         3.Rajan Mukarung \n");
	printf("2.Vijay Kumar Pandey   4.Jagadish Ghimire\n");
		scanf("%d",&answer);
		if (answer==1)
		{
			amount=amount+100;
		answer=0;
		}
		else{
			goto finish;
		}
    printf("What is swayambhunath believed to have emerged from?\n");
	printf("1.Nail of Budhha         3.Sunflower \n");
	printf("2.Rose                   4.Lotus\n");
		scanf("%d",&answer);
		if (answer==4)
		{
			amount=amount+100;
		answer=0;
		}
		else{
			goto finish;
		}

		finish:
     printf("registration   playername\n");
	printf("%d   %s\n",registration,&playername);	
	printf("your price money is Rs.%d",amount);
	return 0;
}
