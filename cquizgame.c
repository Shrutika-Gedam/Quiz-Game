//learnprogramo-programming made simple
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[30];
     mainhome:
     system("cls");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t   WELCOME TO THE GAME");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{
    reset_score();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome to Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");

    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\n\tWho was the first President of India?");
		printf("\n\n\tA. Mahatma Gandhi\n\n\tB. Dr. Rajendra Prasad\n\n\tC. Dr. B. R. Ambedkar\n\n\tD. Jawaharlal Nehru \n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");count++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        break;
		       }

        case 2:
		printf("\n\n\tWhat city is the statue of liberty in?");
		printf("\n\n\tA. France\n\n\tB. Denmark\n\n\tC. New York City\n\n\tD. Finland \n\t");
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			break;
			}
		else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       break;
		       }

        case 3:
		printf("\n\n\tWhich animal laughs like human being?");
		printf("\n\n\tA. Polar Bear\n\n\tB. Hyena\n\n\tC. Donkey\n\n\tD. Chimpanzee \n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			break;
			}
		else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       break;
		       }

        case 4:
		printf("\n\n\tWhich is the longest river on the earth?");
		printf("\n\n\tA. Indus\n\n\tB. Amazon\n\n\tC. Ganga\n\n\tD. Nile \n\t");
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");count++;
			getch();
            break;
            }
		else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       break;
		       }

        case 5:
        printf("\n\n\tLargest desert in the world is?");
        printf("\n\n\tA. Sahara desert\n\n\tB. Gobi Desert\n\n\tC. Arctic Desert\n\n\tD. Arabian Desert \n\t");
        if (toupper(getch())=='A')
               {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
                }
        else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       break;
		       }

        case 6:
		printf("\n\n\tWhich is the smallest bird ?");
		printf("\n\n\tA. Sparrow\n\n\tB. Eagle\n\n\tC. Woodpecker\n\n\tD. Humming Bird \n\t");
		if (toupper(getch())=='D' )
			{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			break;
			}
		else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       break;
		       }
            }
        }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{
        goto game;
        }

game:
     countr=0;
     for(i=1;i<=10;i++)
     {
     system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n\tWhat is the National Game of England?");
		printf("\n\n\tA. Football\n\n\tB. Basketball\n\n\tC. Cricket\n\n\tD.Baseball \n\t");
		if (toupper(getch())=='C')
			{
             printf("\n\nCorrect!!!");
             countr++;
             getch();
			 break;
			 }
		else
		       {
               printf("\n\nWrong!!!");
               getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\tStudy of Earthquake is called............,");
		printf("\n\n\tA. Seismology\n\n\tB. Cosmology\n\n\tC. Orology\n\n\tD. Etimology \n\t");
		if (toupper(getch())=='A')
			{
             printf("\n\nCorrect!!!");
             countr++;
             getch();
			 break;
			 }
		else
		       {
               printf("\n\nWrong!!!");
               getch();
		       goto score;
		       break;
		       }

        case 3:
		printf("\n\n\tWhich is the largest ocean in the world ? ");
		printf("\n\n\tA. Indian Ocean\n\n\tB. Atlantic Ocean\n\n\tC. Antartic Ocean\n\n\tD. Pacific Ocean \n\t");
		if (toupper(getch())=='C')
			{
             printf("\n\nCorrect!!!");
             countr++;
             getch();
			 break;
			 }
		else
		       {
               printf("\n\nWrong!!!");
               getch();
		       goto score;
		       break;
		       }

        case 4:
		printf("\n\n\tThe Laws of Electromagnetic Induction were given by?");
		printf("\n\n\tA. Faraday\n\n\tB. Tesla\n\n\tC. Maxwell\n\n\tD. Coulomb \n\t");
		if (toupper(getch())=='A')
			{
             printf("\n\nCorrect!!!");
             countr++;
             getch();
			 break;
			 }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		       }

        case 5:
		printf("\n\n\tIn what unit is electric power measured?");
		printf("\n\n\tA. Coulomb\n\n\tB. Watt\n\n\tC. Power\n\n\tD. Units \n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
               printf("\n\nWrong!!!");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\tWhich element is found in Vitamin B12?");
		printf("\n\n\tA. Zinc\n\n\tB. Cobalt\n\n\tC. Calcium\n\n\tD. Iron \n\t");
		if (toupper(getch())=='B' )
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                goto score;
		        getch();
		        break;
		        }

        case 7:
		printf("\n\n\tWhat is the National Name of Japan?");
		printf("\n\n\tA. Polska\n\n\tB. Hellas\n\n\tC. Drukyul\n\n\tD. Nippon \n\t");
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }

        case 8:
		printf("\n\n\tHow many times a piece of paper can be folded at the most?");
		printf("\n\n\tA. 6\n\n\tB. 7\n\n\tC. 8\n\n\tD. Depends on the size of paper\n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }

        case 9:
		printf("\n\n\tWhat is the capital of Denmark?");
		printf("\n\n\tA. Copenhagen\n\n\tB. Helsinki\n\n\tC. Ajax\n\n\tD. Galatasaray \n\t");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }

        case 10:
		printf("\n\n\tWhich is the longest River in the world?");
		printf("\n\n\tA. Nile\n\n\tB. Koshi\n\n\tC. Ganga\n\n\tD. Amazon \n\t");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
                goto score;
                break;
                }

        case 11:
		printf("\n\n\tWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\n\tA. Martina Hingis\n\n\tB. Maria Sarapova\n\n\tC. Kim Clijster\n\n\tD. Serena Williams \n\t");
		if (toupper(getch())=='D')
			{
             printf("\n\nCorrect!!!");
             countr++;
             getch();
			 break;
			 }
		else
              {printf("\n\nWrong!!!");
              getch();
              goto score;
              break;
              }

        case 12:
		printf("\n\n\tWhich city is known at 'The City of Seven Hills'?");
		printf("\n\n\tA. Rome\n\n\tB. Vactican City\n\n\tC. Madrid\n\n\tD. Berlin \n\t");
		if (toupper(getch())=='A')
			  {
               printf("\n\nCorrect!!!");
               countr++;
               getch();
			   break;
			   }
		else
              {
              printf("\n\nWrong!!!");
              getch();
              goto score;
              break;
              }

		case 13:
		printf("\n\n\tOzone plate is being destroyed regularly because of____ ?");
		printf("\n\n\tA. L.P.G\n\n\tB. Nitrogen\n\n\tC. Methane\n\n\tD. C.F.C \n\t");
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }

        case 14:
		printf("\n\n\tWho is the author of 'Pulpasa Cafe'?");
		printf("\n\n\tA. Narayan Wagle\n\n\tB. Lal Gopal Subedi\n\n\tC. B.P. Koirala\n\n\tD. Khagendra Sangraula \n\t");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
               printf("\n\nWrong!!!");
               getch();
		       goto score;
		       break;
		       }

		case 15:
		printf("\n\n\tWhich Blood Group is known as the Universal Recipient?");
		printf("\n\n\tA. A\n\n\tB. AB\n\n\tC. B\n\n\tD. O \n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;
            }
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }

		case 16:
		printf("\n\n\tWhat is the unit of measurement of distance between Stars?");
		printf("\n\n\tA. Light Year\n\n\tB. Coulomb\n\n\tC. Nautical Mile\n\n\tD. Kilometer \n\t");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
		        goto score;
		        break;
		        }


		case 17:
		printf("\n\n\tThe country famous for Samba Dance is........");
		printf("\n\n\tA. Brazil\n\n\tB. Venezuela\n\n\tC. Nigeria\n\n\tD. Bolivia \n\t");
		if (toupper(getch())=='A')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
                goto score;
		        break;
		        }

		case 18:
		printf("\n\n\tWind speed is measure by__________?");
		printf("\n\n\tA. Lysimeter\n\n\tB. Air vane\n\n\tC. Hydrometer\n\n\tD. Anemometer \n\t");
		if (toupper(getch())=='D')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
                goto score;
		        break;
		        }

		case 19:
		printf("\n\n\tWhich city in the world is popularly known as The City of Temple?");
		printf("\n\n\tA. Delhi\n\n\tB. Bhaktapur\n\n\tC. Kathmandu\n\n\tD. Agra\n\t");
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
                goto score;
		        break;
		        }

		case 20:
		printf("\n\n\tWhich hardware was used in the First Generation Computer?");
		printf("\n\n\tA. Transistor\n\n\tB. Valves\n\n\tC. I.C\n\n\tD. S.S.I \n\t");
		if (toupper(getch())=='B')
			{
            printf("\n\nCorrect!!!");
            countr++;
            getch();
			break;
			}
		else
		       {
                printf("\n\nWrong!!!");
                getch();
                goto score;
		        break;
		        }
        }
}

	score:
    system("cls");
	score=(float)countr*10;
	if(score>0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won %.2f points",score);
	     goto go;
    }

	 else if(score==100.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A PROFESSIONAL IN IQ !!!!!!!!!");
	    printf("\n\t\t You won %.2f points",score);
	    printf("\t\t Thank You!!");
	}
	 else
       {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
	    goto go;
	    }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;
		}
		}
		}

void show_record()
    {
    system("cls");
	char name[30];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
	}

void reset_score()
    {
    system("cls");
    float sc;
	char nm[30];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
    }

void help()
	{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 10 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	}

void edit_score(float score, char plnm[30])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
