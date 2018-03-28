#include <stdio.h>
#include <conio.h>
#include<string.h>
main()
{
    char u[10],p[10],x[]="abc",z[]="abc";
	int c4,c5,ph;
	printf("\n\n\n\t\t\t\tLOGIN\n\n\n");
	/*printf("Enter your registered mobile number : ");
	scanf("%d",&ph);
	printf("\n\n\t(Username and Password is sent to your Pre-registered Mobile.)\n\n\n");*/
	printf("\tEnter username : ");
	scanf("%s",&u);
	printf("\n\tEnter password : ");
	scanf("%s",&p);
    c4=strcmp(u,x);  //  Comparing strings u & x...
    c5=strcmp(p,z); //   Comparing strings p & z...
    if((c4==0)&&(c5==0))
     {
     	system("cls");
        printf("\n\t\t\tLogin Sucessful!   :-)\n\n");
     }
	else
	 {
		printf("\n\n\t\t\tWrong Creditals! GOODBYE..\n\n");
		return 0;				   
     }
     while(1)
     {
	int c,s;   //c for choice. s for nested switch.
	printf("\n\n\t\t\t Train  details.\n\n\n");
	printf(" Sr. No.\t\tTrain No.\t\tFare\t\tSeats Avilable\n\n 1.\t\t\t M1234(Slow)\t\t300\t\t\t23\n\n 2.\t\t\t M6785(A.C)\t\t450\t\t\t15\n\n 3.\t\t\t M9567(A.C+Superfast)\t520\t\t\t32\n\n\n\n 4. ABOUT DEVLOPERS OF APPLICATIONn\n\n\n\t 5. QUIT");
	printf("\n\n\tEnter a choice : ");
	scanf("%d",&c);
	system("cls");  // Clearing the Screen...
	switch (c)
	 {
	 	case 1:
	 		  while(1)
	 		  {
	 		  printf("\n\n\t\t\tPLEASE CONTINUE....");
	 		  printf("\n\n\t1. Book tickets\n\n\t2. View booked tickets\n\n\t3. Quit this Appliction\n\n");
	 		  printf("  Please type your choice  ");
	 		  scanf("%d",&s);
	 		  system("cls");
	 		  switch (s)
	 		   {
	 		   	 case 1:
	 		   		    printf("\n\n\t\t\t PLEASE FILL DETAILS\n\n");
	 		   		    int n,i,age;
                        char name[100],g[5],a1[1000];
	                    printf("\tEnter number Passangers: ");
	                    scanf("%d",&n);
	                    FILE *fptr;
	                    fptr=fopen("user1.txt","w");
	                     if(fptr==NULL)  //  Checks for blank
                      	{
	                    	printf("Error!");
		                    exit(1);
	                    }
	
	                    for(i=0;i<n;++i)
	                    {
		                printf("\n For Person %d",i+1);
		                fflush(stdin);
		                printf("\n\n\tEnter name : ");           
	                	gets(name);
	                	printf("\n\n\tEnter Age : ");
		                scanf("%d",&age);
		                fflush(stdin);
		                printf("\n\n\tEnter Gender(M/F)  : ");
		                scanf("%S",&g);
	                	fflush(stdin);
	                	printf("\n\n\tEnter Adress : ");
	                	gets(a1);
		                fprintf(fptr,"\tName : %s\t\tAge : %d\n\n\tGender : %s\t\tAdress : %s\n\n",name,age,g,a1);
                       	}
	                    fclose(fptr);
	                     printf("\n\n\n\t\tTICKETS BOOKED! Thanks..\n\n");
	                    
	                   break;         
	                     case 2:
	 		   		     printf("\n\n\t\t\tVIEWING BOOKED TICKETS (FOR TRAIN M1234\t Fare: 300)\n\n");
	 		   		
	 		   		    FILE *fptr1;
	 		   		    fptr1=fopen("user1.txt","r");
	 		   		    int fare=300;
	 		   		    char ch;
	                    if(fptr1==NULL)  //  Checks for blank
	                    {
	                      printf("  Blank File..! Please Book your ticket Again!");
	                    }
	                    while(1)
	                    {
	                      ch=fgetc(fptr1);    //  To get character from a file.
						  if(ch==EOF)	     //   Checking for End Of File.
						  break;
						  printf("%c",ch);
						  
						
						}
						printf("\n\n\t\tTHANKS FOR BOOKING  :-)");
						
	 		   	     break;
	 		   	    case 3:printf("\n\n\n\n\n\t\t\tTHANKS FOR USING OUR APPLICATION :-)\n\n\n\n");
					 return 0;
					 default:
					 	printf("\n\n\t\tINVALID CHOICE!");
					 	break;
	 		   	 }
	 		   		
			    }
		case 2:
			  while(1)
	 		  {
	 		  printf("\n\n\t\t\tPLEASE CONTINUE....");
	 		  printf("\n\n\t1. Book tickets\n\n\t2. View booked tickets\n\n\t3. Quit this Appliction\n\n");
	 		  int c1,s1;
			   printf("  Please type your choice  ");
	 		  scanf("%d",&s1);
	 		  system("cls");
	 		  switch (s1)
	 		   {
	 		   	 case 1:
	 		   		    printf("\n\n\t\t\t PLEASE FILL DETAILS\n\n");
	 		   		    int n1,age1,j;
                        char name1[100],g1[5],a2[1000];
	                    printf("\tEnter number Passangers: ");
	                    scanf("%d",&n1);
	                    FILE *fptr2;
	                    fptr2=fopen("user2.txt","w");
	                     if(fptr2==NULL)  //  Checks for blank
                      	{
	                    	printf("Error!");
		                    exit(1);
	                    }
	
	                    for(j=0;j<n1;++j)
	                    {
		                printf("\n For Person %d",j+1);
		                fflush(stdin);
		                printf("\n\n\tEnter name : ");           
	                	scanf("%s",&name1);
	                	printf("\n\n\tEnter Age : ");
		                scanf("%d",&age1);
		                fflush(stdin);
		                printf("\n\n\tEnter Gender(M/F)  : ");
		                scanf("%S",&g1);
	                	fflush(stdin);
	                	printf("\n\n\tEnter Adress : ");
	                	gets(a2);
		                fprintf(fptr2,"\tName : %s\t\tAge : %d\n\n\tGender : %s\t\tAdress : %s\n\n",name1,age1,g1,a2);
                       	}
	                    fclose(fptr2);
	                     printf("\n\n\n\t\tTICKETS BOOKED! Thanks..\n\n");
	                     return 0;
						 break;        
	                   case 2:
	 		   		   printf("\n\n\t\t\tVIEWING BOOKED TICKETS (FOR TRAIN M6785\t Fare: 450)\n\n");
	 		   		
	 		   		FILE *fptr3;
	 		   		fptr3=fopen("user2.txt","r");
	 		   		int fare=300;
	 		   		char ch2;
	                    if(fptr3==NULL)  //  Checks for blank
	                    {
	                      printf("  Blank File..! Please Book your ticket Again!");
	                    }
	                    while(1)
	                    {
	                      ch2=fgetc(fptr3);    //  To get character from a file.
						  if(ch2==EOF)	     //   Checking for End Of File.
						  break;
						  printf("%c",ch2);
						  
						
						}
	                    case 3:printf("\n\n\n\n\n\t\t\tTHANKS FOR USING OUR APPLICATION :-)\n\n\n\n");
					    return 0;
					    default:
					 	printf("\n\n\t\tINVALID CHOICE!");
					 	break;
	 		   	     }
	 		   	    }
	 	        
	   	    case 3:
	   	      	while(1)
	 		    {
	 		    printf("\n\n\t\t\tPLEASE CONTINUE....");
	 		    int y,w;
	 		    printf("\n\n\t1. Book tickets\n\n\t2. View booked tickets\n\n\t3. Quit this Appliction\n\n");
	 		    printf("  Please type your choice  ");
	 		    scanf("%d",&w);
	 		    system("cls");
	 		    switch (w)
	 		    {
	 		   	 case 1:
	 		   		    printf("\n\n\t\t\t PLEASE FILL DETAILS\n\n");
                        int m,n3,y;
	                    char name3[100],g3[10],a3[1000];
	                    printf("  Enter number Passangers: ");
	                    scanf("%d",&n3);
	                    FILE *fptr4;
	                    fptr4=fopen("user3.txt","w");
	                    if(fptr4==NULL)  //  Checks for blank
	                     {
		                    printf("Error!");
		                    exit(1);
	                     }
	
	                    for(m=0;m<n3;++m)
	                    {
		                printf("\n For Person %d",m+1);
		                fflush(stdin);
		                printf("\n\n\tEnter name : ");           
	                	gets(name3);
	                	printf("\n\n\tEnter Age : ");
		                scanf("%d",y);
		                fflush(stdin);
		                printf("\n\n\tEnter Gender(M/F)  : ");
		                scanf("%s",&g3);
	                	fflush(stdin);
	                	printf("\n\n\tEnter Adress : ");
	                	gets(a3);
		                fprintf(fptr4,"\tName : %s\t\tAge : %d\n\n\tGender : %s\t\tAdress : %s\n\n",name3,y,g3,a3);
                       	}
	                    fclose(fptr4);
	                     printf("\n\n\n\t\tTICKETS BOOKED! Thanks..\n\n");
	                    
	                    break;         
	                   case 2:
	 		   		    printf("\n\n\t\t\tVIEWING BOOKED TICKETS (FOR TRAIN M9567\t Fare: 520)\n\n");
	 		   		
	 		   		   FILE *fptr5;
	 		   		   fptr5=fopen("user3.txt","r");
	 		   		   int fare=300;
	 		   		   char ch5;
	                    if(fptr5==NULL)  //  Checks for blank
	                    {
	                      printf("Blank File..! Please Book your ticket Again!");
	                    }
	                    while(1)
	                    {
	                      ch5=fgetc(fptr5);    //  To get character from a file.
						  if(ch5==EOF)	     //   Checking for End Of File.
						  break;
						  printf("%c",ch5);
						  
						
						}
	 		   	        break;
	 		   	        case 3:printf("\n\n\n\n\n\t\t\tTHANKS FOR USING OUR APPLICATION :-)\n\n\n\n");
					    return 0;
	 		   	 	    break;
					   	default:
					 	printf("\n\n\t\tINVALID CHOICE!");
				   	 	break;
						}
		             }
			case 4:
	 		        system("cls");
			        printf("Thanks for using");
			        return 0;
	 		   	    break;
	 	    case 5:
			        printf("\n\n\n\n\n\t\t\tTHANKS FOR USING OUR APPLICATION :-)\n\n\n\n");
					return 0;
	 		   	 	break;	
	 	
	 	         default: 
			        printf("\n\n\t\t\t\tNot a valid choice!\n\n");
					break; 	 	
	 		  
	}		    	}
    getch();
    return 0; 
}

