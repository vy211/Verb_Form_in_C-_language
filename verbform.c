//write on turbo c
/*
@Vipin Yadav
*/



#include<stdio.h>
#include<conio.h>
//#include<ctype.h>
//#include<string.h>
void main()
{
    int i,choice,diff,j; 
	char m[10],c;     
	char* first[100] = {"Abide","Abuse","Admiral","Allow","Appear","Apply","Arise","Arrive","Ask","Attack",
	"Awake","Be","Bear","Beat","Become","Beget","Begin","Behold","Bend","Bereave","Beseech","Bet","Bid","Bid",
	"Bite","Bleed","Bless","Blow","Boil","Borrow","Break","Breathe","Breed","Bring","Brodcast","Build","Burn","Brust","Buy","Call",
	"Can","Care","Carry","Cast","Catch","Cheat","Chide","Choose","Clean","Climb","Close","Come","Complete","Cook","Copy","Count","Do",
	"Drink","Drive","Dry","Eat","Enter","Fail","Fight","Find","Finish","Flow","Fly","Fprget","Forgive","Fry","Get","Give","Go","Grow","Hang",
	"Has","Hate","Hear","Hide","Hold","Keep","Know","Like","Love","Make","Mar","March","Marry","May","Meet","Melt","Mind",
	"Miss","Mistake","Mix","Mortage","Move","Nap","Open"};
	char* second[100]={"Abode","Abused","Admired","Allowed","Appeared","Applied","Arose","Arrived","Asked","Attaked","Awoke","Was,Were","Bore","Beat",
	"Become","Begot","Began","Beheld","Bent","Bereft","Besought","Bet","Bade","Bid","Bit","Bled","Blessed","Blew","Boild","Borrowed","Broke","Breathed","Bred",
	"Brought","Brodcast","Built","Burnt","Brust","Bought","Called","Could","Cared","Carried","Cast","Cought","Cheated","Chid","Chose","Cleaned","Climbed",
	"Closed","Came","Completed","Cooked","Copyed","Counted","Did","Drank","Drove","Dried","Ate","Entered","Fell","Fought","Found","Finished","Flowed","Flew",
	"Forgot","Forgave","Fried","Got","Gave","Went","Grew","Hung","Had","Hated","Heard","Hid","Held","Kept","Knew","Liked","Loved","Made","Marred","Marched",
	"Married","Might","Met","Melted","Mineded","Missed","Mistook","Mixed","Mortaged","Moved","Napped","Opend"};
	char* third[100]={"Abode","Abused","Admired","Allowed","Appeared","Applied","Arisen","Arrived","Asked","Awoken","Attaked","Been","Born","Beaten","Become",
	"Begotten","Begun","Beheld","Bent","Bereft","Besought","Bet","Bedden","Bid","Bitten","Bled","Blessed","Blow","Boiled","Borrowed","Broken","Breathed","Bred",
	"Brought","Brodcast","Built","Burnt","Brust","Bought","Called","Could","Cared","Carried","Cast","Caught","Cheated","Chiden","Chosen","Cleaned","Climbed",
	"Closed","Come","Completed","Cooked","Copyed","Counted","Done","Drunk","Driven","Dried","Eaten","Entered","Fellen","Fought","Found","Finished","Flowed",
	"Flewn","Forgotten","Forgiven","Fried","Gotten","Given","Gone","Grown","Hanged","Had","Hated","Heard","Hidden","Held","Kept","Know","Liked","Loved","Made",
	"Marred","Marched","Married","Might","Met","Melted","Mineded","Missed","Mistook","Mixed","Mortaged","Moved","Napped","Opened"};
	printf("**********************************************Form Of Meaning******************************************\n\n");
	printf("                                                                                         by VIPIN YADAV\n");
	printf("             #####Some Option#####\n\n");
	printf("\n1.All Meaning:");
	printf("\n2.Search by Charecter: ");
	printf("\n3.Search by Meaning\n");
	printf("\nEnter Your  Choice=");
	scanf("%d",&choice);
                                      
	//printf("Sl.No.	Base form - Ist Form	Past simple - 2nd Form	Past Participle - 3rd form");       
	switch(choice){
		case 1:
			printf("Sl.No.	Base form - Ist Form	Past simple - 2nd Form	Past Participle - 3rd form");       
				for(i=0;i<100;i++){
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			}
			break;
					
		case 2:
			{
			
			printf("\nEnter Your Charecter:-");
		    scanf("%s",&c);
		     printf("\n");
		     printf("Sl.No.	Base form - Ist Form	Past simple - 2nd Form	Past Participle - 3rd form");       
		     if(c=='A'||c=='a')
		     {
		     	for(i=0;i<11;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='b'||c=='B'){
			 	for(i=11;i<39;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='c'||c=='C'){
			 	for(i=39;i<56;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='d'||c=='D'){
			 	for(i=56;i<60;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='E'||c=='e'){
			 	for(i=60;i<62;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='f'||c=='F'){
			 	for(i=62;i<71;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='g'||c=='G'){
			 	for(i=71;i<75;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='h'||c=='H'){
			 	for(i=75;i<81;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 
			 
			 else if(c=='K'||c=='k'){
			 	for(i=81;i<83;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='l'||c=='L'){
			 	for(i=83;i<85;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='m'||c=='M'){
			 	for(i=85;i<98;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }	
			 else if(c=='n'||c=='N'){
			 	for(i=98;i<99;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else if(c=='o'||c=='O'){
			 	for(i=99;i<100;i++)
				printf("\n*%4d %20s %20s %20s *",i+1,first[i],second[i],third[i]);
			 }
			 else
			    printf("\n\n                  MEANING IS NOT AVAILABE!!!!!!!!!!");	
				
				
				break;	 
		    }
	/*case 3:
			printf("\nEnter Your Meaning-");
			
			scanf("%s",&m[10]);
		      printf("Enter Your Charecter:-");	*/
		default:
		     printf("\n\n                          Wrong Choice!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");	
	    }
	getch();
	getch();
	getch();
	getch();
	getch();
	getch();
	getch();
	getch();
}
