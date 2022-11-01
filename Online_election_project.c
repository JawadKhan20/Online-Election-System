#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define CANDIDATE_COUNT
#define CANDIDATE1 "Vladimir Putin"
#define CANDIDATE2 "Kim Jong-un"
#define CANDIDATE3 "Narendra Modi"
#define CANDIDATE4 "Joe Biden"
#define CANDIDATE5 "NOTA"
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, votesCount5=0;
int inValidvotes=0;
static int i=0;

struct vote{
  int voter_id;
  char voter_name[50];
  char voter_surname[50];
  char voter_phone[15];
  char voter_password[30];
  int voter_check;
 } v[50];

void interface1()
{
    printf("\n\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*     ONLINE ELECTION SYSTEM       =*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*         C MINI PROJECT           =*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
    printf("\n\n");
    getc;
    
}
void interface2()
{
    printf("\n\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*            WELCOME               =*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*               TO                 =*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*     ONLINE ELECTION SYSTEM       =*=*=*=*=");
    printf("\n\t\t=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
    printf("\n\n");
    getc;
    
}
void check_required()
{
  int noo=0;
  for(noo=0;noo<50;noo++)
  {
    v[noo].voter_check=0;  
  }
  getc;
}
void castVote()
{
  system("clear");
  interface1();
  interface2();
  int choice;
  int var;
  int hi=0,ji=0;
  int hii=0;
  char passwerd[30];
  printf("\n\t\t Enter your voter id : ");
  scanf("%d",&var);
  for(hi=0,ji=0;hi<i || ji<=i;hi++,ji++)
  {
      if(var==v[hi].voter_id)
      {
          do
          {
              printf("\n\t\t Enter your password: ");
              scanf("%s",passwerd);
              if(strcmp(v[hi].voter_password,passwerd)==0)
              {
                  if(v[hi].voter_check==0)
                  {
                  printf("\n\t\t Voter name : %s",v[hi].voter_name);
                  printf("\n\t\t ### Please choose your Candidate ####");
                  printf("\n\t\t 1. %s",CANDIDATE1);
                  printf("\n\t\t 2. %s",CANDIDATE2);
                  printf("\n\t\t 3. %s",CANDIDATE3);
                  printf("\n\t\t 4. %s",CANDIDATE4);
                  printf("\n\t\t 5. %s",CANDIDATE5);

                  printf("\n\n Input your choice (1 - 5) : ");
                  scanf("%d",&choice);
  
                  switch(choice)
                  {
                    case 1: votesCount1++; break;
                    case 2: votesCount2++; break;
                    case 3: votesCount3++; break;
                    case 4: votesCount4++; break;
                    case 5: votesCount5++; break;
                    default: inValidvotes++;
                  }
                  v[hi].voter_check++;
                  }
                  else
                  {
                      printf("\n\t\t Sorry you have already voted!!!");
                  }
                  hii=0;
              }
              else 
              {
                  printf("\n\t\tYou have enterd the password incorrectly!!!");
                  printf("\n\t\t Please re-enter the password correctly.....");
                  hii++;
              }
          }
          while(hii!=0 && hii<=3);
          break;
          
      }
      if(ji==i)
      {
         printf("\n\t\t Sorry the voter id doesnot exist!!!");
         break;
      }
      
  }
  printf("\n\t\tThank you for voting");
  fflush(stdin); 
  getchar();
 
  
   
}



void votesCount(){
system("clear");
interface1();
interface2();
printf("\n\t\t ##### Voting Statics ####");
printf("\n\t\t %s - %d ", CANDIDATE1, votesCount1);
printf("\n\t\t %s - %d ", CANDIDATE2, votesCount2);
printf("\n\t\t %s - %d ", CANDIDATE3, votesCount3);
printf("\n\t\t %s - %d ", CANDIDATE4, votesCount4);
printf("\n\t\t %s - %d ", CANDIDATE5, votesCount5);
fflush(stdin);
getchar();
} 

void getLeadingCandidate(){
    system("clear");
    interface1();
    interface2();
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
    fflush(stdin);
    getchar();
}

void vigilanceofficer()
{ 
    system("clear");
    interface1();
    interface2();
    char vigilance_password[]="aticle@world";
    char enter_password[30];
    printf("\n\t\tEnter the password: ");
    scanf("%s",enter_password);
      if(strcmp(vigilance_password,enter_password)==0)
      {
    
       int choice_officer=0;
      do{
        printf("\n\t\t 1. Find Vote Count");
        printf("\n\t\t 2. Find leading Candidate");
        printf("\n\t\t 0. Exit");

        printf("\n\t\t Please enter your choice : ");
        scanf("%d", &choice_officer);

        switch(choice_officer)
        {
        case 1: votesCount();break;
        case 2: getLeadingCandidate();break;
        default: printf("\n Please wait,you are being directed to home page");
        }
      }while(choice_officer!=0);
      }
      else
      {
          printf("\n\t\t Please renter the password correctly");
      }
fflush(stdin);
getchar();


}

void voterlogin()
{
    system("clear");
    interface1();
    interface2();
    int choice_voter;
    do
    {
        printf("\n\t\t 1.Cast your vote");
        printf("\n\t\t 0.Exit");
        printf("\n\t\t Please enter your choice:");
        scanf("%d",&choice_voter);
        
        switch(choice_voter)
        {
            case 1: castVote();break;
            default: printf("\n Please wait you are being directed to home page");
        }
    }
    while(choice_voter!=0);
    fflush(stdin);
    getchar();
}

void voterregistration()
{
    system("clear");
    interface1();
    interface2();
    static int x=0;
    static int id=3458889;
    printf("\n\t\t Your voter id is %d",id);
    printf("\n\t\t Please enter the voter id alloted ot you: ");
    scanf("%d",&v[x].voter_id);
    printf("\n\t\t Enter your name: ");
    scanf("%s",v[x].voter_name);
    printf("\n\t\t Enter your surname: ");
    scanf("%s",v[x].voter_surname);
    printf("\n\t\t Enter your phone number: ");
    scanf("%s",v[x].voter_phone);
    printf("\n\t\t Enter your password: ");
    scanf("%s",v[x].voter_password);
    printf("\n\t\t You have successfully completed the registration!!!");
    x++;
    id++;
    i++;
    fflush(stdin);
    getchar();
}


int main()
{
    system("clear");
    interface1();
    interface2();
    int i;
    int choice;

    do{
    printf("\n\t\t ###### Welcome to Election/Voting 2019 #####");
    printf("\n\t\t If you are a new voter please register yourself first by selecting choice 3");
    printf("\n\t\t 1. Vigillance officer login ");
    printf("\n\t\t 2. Voter login ");
    printf("\n\t\t 3. Voter registration");
    printf("\n\t\t 0. Exit");


    printf("\n\t\t Please enter your choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1: vigilanceofficer();break;
    case 2: voterlogin();break;
    case 3: voterregistration();break;
    default: printf("\n Thank you ");
    }
    }while(choice!=0);

    fflush(stdin);
    getchar();
}

