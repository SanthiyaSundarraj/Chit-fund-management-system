#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define clrscr system("cls");
int customer();
void cal();
void groupcrt();
int bidding();
void scheme();
struct regdate
{
    int day,month,year;
}rd;
struct date
{
	int d,m,y;
};
struct add
{
	long long int pincode;
	char street[50],area[50],city[30],state[30],country[30];
};
void grpdet();
void custogrp(char a[5],int n);
void cusdet();
int main()
{
 int option,in,x,i;
 char pass[10],user[10],ch,name[10]="santhiya",password[8]="12345678",flag=0,flag1=0;
 login:
 printf("\n\n\t\t\t\t\t\t\t\tABC CHIT FUNDS\n\n\n\t\t\t\t\t\t\tYOU ARE IN GOOD HANDS....\n\n\n\n\n\n\n");
 printf("\t\t\tUSER NAME : ");
 scanf("%s",user);
 for(i=0;name[i]!='\0';i++)
 {
 	if(name[i]!=user[i])
 	{
	 flag1=1;}
 }
 printf("\n\n\t\t\tPASSWORD(8 digits)  : ");
 for(i=0;i<8;i++)
 {
 		ch='*';
		printf("%c",ch);
 	ch=getch();
 	pass[i]=ch;
 	if(password[i]!=ch)
 	{
	 flag=1;}
//	ch='*';
//	printf("%c",ch);
 }
  if(flag1==1 || flag==1)
	{
		clrscr;
		printf("Invalid username or password.... Try again....\n\n");
		goto login;
	 }
 index:
 	clrscr;
 printf("\n\n\t\t\t\t\tWelcome to Chit Management");
 printf("\n\n\t1.To view Scheme");
 printf("\n\n\t2.To view Group Details");
 printf("\n\n\t3.To Create a new group");
 printf("\n\n\t4.To view Customer Details");
 printf("\n\n\t5.To Add a New Customer");
 printf("\n\n\t6.Bidding");
 printf("\n\n\t7.To view to monthly instalment");
 printf("\n\n\t8.Exit");
 printf("\n\nEnter your choice : ");
 scanf("%d",&in);
 switch(in)
 {
 case 1:
 	{
 printf("\nYou are Entering into Scheme Details\n\n\n" );
 scheme();
 break;}
 case 2:{
 printf("\nYou are Entering into Group Details\n\n\n" );
grpdet();
break;}
case 3:
	{
printf("\nYou are Entering into Creating a New Group\n\n\n" );
groupcrt();
break;}
case 4:
	{
printf("\nYou are Entering into Customer Details\n\n\n" );
cusdet();
break;}
case 5:
{
printf("\nYou are Entering into Adding a New Customer\n\n\n" );
customer();
break;
}
case 6:{
	printf("\nYou are Entering into Bidding Section\n\n\n");
x=bidding();
break;
}
case 7:
	{
		cal();
		break;
	}
case 8:{
	clrscr;
	printf("\nThank You for Visiting\n");
    exit(0);
break;}
default:{
printf("\nPlease enter a valid option : " );
goto index;
}
}
printf("\nDo you want to continue ?\n If yes,press 1\n If no,press 2\nEnter your choice :");
opt:
scanf("%d",&option);
if(option==1)
{
    goto index;
}
else if(option==2)
{
	clrscr;
    printf("\n\n\n\nThank you for visting\n\n\n\n\n\n\n\n\n\n");
}
else
    {
    printf("Enter a valid option : ");
    goto opt;
}

}
void scheme()
{
	clrscr;
  printf("                            SCHEMES AVAILABLE                               \n                                20 Months                                     \n ------------------------------------------------------------------------------\n| S.No | Group code |  Net Amount  |  No.of.months  |  Max amount per month  |\n------------------------------------------------------------------------------\n|   1  |     G1     |    50,000    |       20       |         2,500          |\n|      |            |              |                |                        |\n|   2  |     G2     |   1,00,000   |       20       |         5,000          |\n|      |            |              |                |                        |\n|   3  |     G3     |   2,00,000   |       20       |        10,000          |\n------------------------------------------------------------------------------\n                                25 Months                                     \n------------------------------------------------------------------------------\n| S.No | Group code |  Net Amount  |  No.of.months  |  Max amount per month  |\n------------------------------------------------------------------------------\n|   1  |     G4     |   1,50,000   |       25       |         6,000          |\n|      |            |              |                |                        |\n|   2  |     G5     |   2,50,000   |       25       |        10,000          |\n|      |            |              |                |                        |\n|   3  |     G6     |   3,00,000   |       25       |        12,000          |\n|      |            |              |                |                        |\n|   4  |     G7     |   5,00,000   |       25       |        20,000          |\n|      |            |              |                |                        |\n|   5  |     G8     |  10,00,000   |       25       |        40,000          |\n|      |            |              |                |                        |\n|   6  |     G9     |  15,00,000   |       25       |        60,000          |\n|      |            |              |                |                        |\n|   7  |     G10    |  25,00,000   |       25       |      1,00,000          |\n------------------------------------------------------------------------------\n                                40 Months                                     \n------------------------------------------------------------------------------\n| S.No | Group code |  Net Amount  |  No.of.months  |  Max amount per month  |\n------------------------------------------------------------------------------\n|   1  |     G11    |    5,00,000  |       40       |        12,000          |\n|      |            |              |                |                        |\n|   2  |     G12    |   20,00,000  |       40       |        50,000          |\n|      |            |              |                |                        |\n|   3  |     G13    |   25,00,000  |       40       |        62,500          |\n------------------------------------------------------------------------------");
}
void groupcrt()
{
  FILE *g1,*g2,*g3,*g4,*g5,*g6,*g7,*g8,*g9,*g10,*g11,*g12,*g13;
  char a[10];
  int n,cusid,cus,old;
  clrscr;
  printf("\n\nSelect a Group Code from 1-13 : ");
  gcode:
  scanf("%d",&n);
  clrscr;
  printf("\t\t\t\tGROUP DETAILS\n\n\n\n\n");
  switch(n)
  {
      case 1:
	  		g1=fopen("g1.c","w+");
			printf("Group ID\tg1\n");
             printf("No.of members\t20\n");
             printf("Chit Value\t50,000\n");
             printf("Max Amount per month\t2,500\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t20\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t:   ");
             dat:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat;
             }
             a[0]='g';
             a[1]='1';
             fprintf(g1,"Group ID\tg1\n");
             fprintf(g1,"No.of members\t20\n");
             fprintf(g1,"Chit Value\t50,000\n");
             fprintf(g1,"Max Amount per month\t2,500\n");
             fprintf(g1,"Company Commission\t4.00\n");
             fprintf(g1,"No.of Installments\t20\n");
             fprintf(g1,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			 custogrp(a,20);
			fclose(g1);
            break;

       case 2:printf("Group ID\tg2\n");
             printf("No.of members\t20\n");
             printf("Chit Value\t1,00,000\n");
             printf("Max Amount per month\t5,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t20\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t :  ");
        dat1:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat1;
             }
             g2=fopen("g2.c","w+");
			 fprintf(g2,"Group ID\tg2\n");
             fprintf(g2,"No.of members\t20\n");
             fprintf(g2,"Chit Value\t1,00,000\n");
             fprintf(g2,"Max Amount per month\t5,000\n");
             fprintf(g2,"Company Commission\t4.00\n");
             fprintf(g2,"No.of Installments\t20\n");
             fprintf(g2,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			 a[0]='g';
			 a[1]='2';
			 custogrp(a,20);
			 fclose(g2);		
             break;

        case 3:printf("Group ID\tg3\n");
             printf("No.of members\t20\n");
             printf("Chit Value\t2,00,000\n");
             printf("Max Amount per month\t10,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t20\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t : ");
            dat2:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat2;
             }
             g3=fopen("g3.c","w+");
			 fprintf(g3,"Group ID\tg3\n");
             fprintf(g3,"No.of members\t20\n");
             fprintf(g3,"Chit Value\t2,00,000\n");
             fprintf(g3,"Max Amount per month\t10,000\n");
             fprintf(g3,"Company Commission\t4.00\n");
             fprintf(g3,"No.of Installments\t20\n");
             fprintf(g3,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			 a[0]='g';
			 a[1]='3';
			 custogrp(a,20);
			 fclose(g3);
             break;

        case 4:printf("Group ID\tg4\n");
              printf("No.of members\t25\n");
              printf("Chit Value\t1,50,000\n");
              printf("Max Amount per month\t6,000\n");
              printf("Company Commission\t4.00\n");
              printf("No.of Installments\t25\n");
              printf("Chit Registration Date(DD/MM/YYYY)\t: ");
              dat3:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat3;
             }
              g4=fopen("g4.c","w+");
              fprintf(g4,"Group ID\tg4\n");
              fprintf(g4,"No.of members\t25\n");
              fprintf(g4,"Chit Value\t1,50,000\n");
              fprintf(g4,"Max Amount per month\t6,000\n");
              fprintf(g4,"Company Commission\t4.00\n");
              fprintf(g4,"No.of Installments\t25\n");
              fprintf(g4,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			 a[0]='g';
			 a[1]='4';
			 custogrp(a,25);
			  fclose(g4);
              break;

       case 5:printf("Group ID\tg5\n");
              printf("No.of members\t25\n");
             printf("Chit Value\t2,50,000\n");
             printf("Max Amount per month\t10,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t :");
             dat4:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat4;
             }
             g5=fopen("g5.c","w+");
			 fprintf(g5,"Group ID\tg5\n");
             fprintf(g5,"No.of members\t25\n");
             fprintf(g5,"Chit Value\t2,50,000\n");
             fprintf(g5,"Max Amount per month\t10,000\n");
             fprintf(g5,"Company Commission\t4.00\n");
             fprintf(g5,"No.of Installments\t25\n");
             fprintf(g5,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			 fclose(g5);
			 a[0]='g';
			 a[1]='5';
			 custogrp(a,25);
		     break;

       case 6:printf("Group ID\tg6\n");
             printf("No.of members\t25\n");
             printf("Chit Value\t3,00,000\n");
             printf("Max Amount per month\t12,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat5:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat5;
             }
             g6=fopen("g6.c","w+");
             fprintf(g6,"Group ID\tg6\n");
             fprintf(g6,"No.of members\t25\n");
             fprintf(g6,"Chit Value\t3,00,000\n");
             fprintf(g6,"Max Amount per month\t12,000\n");
             fprintf(g6,"Company Commission\t4.00\n");
             fprintf(g6,"No.of Installments\t25\n");
             fprintf(g6,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
			  a[0]='g';
			 a[1]='6';
			  custogrp(a,25);
			 fclose(g6);
             break;

       case 7:printf("Group ID\tg7\n");
             printf("No.of members\t25\n");
             printf("Chit Value\t5,00,000\n");
             printf("Max Amount per month\t20,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t : ");
             dat6:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat6;
             }
			 g7=fopen("g7.c","w+");
			 fprintf(g7,"Group ID\tg7\n");
             fprintf(g7,"No.of members\t25\n");
             fprintf(g7,"Chit Value\t5,00,000\n");
             fprintf(g7,"Max Amount per month\t20,000\n");
             fprintf(g7,"Company Commission\t4.00\n");
             fprintf(g7,"No.of Installments\t25\n");
             fprintf(g7,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
              a[0]='g';
			 a[1]='7';
			  custogrp(a,25);
			 fclose(g7);
			 break;

      case 8:printf("Group ID\tg8\n");
             printf("No.of members\t25\n");
             printf("Chit Value\t10,00,000\n");
             printf("Max Amount per month\t40,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat7:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat7;
             }
             g8=fopen("g8.c","w+");
			 fprintf(g8,"Group ID\tg8\n");
             fprintf(g8,"No.of members\t25\n");
             fprintf(g8,"Chit Value\t10,00,000\n");
             fprintf(g8,"Max Amount per month\t40,000\n");
             fprintf(g8,"Company Commission\t4.00\n");
             fprintf(g8,"No.of Installments\t25\n");
             fprintf(g8,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
              a[0]='g';
			 a[1]='8';
			  custogrp(a,25);
			 fclose(g8);
			 break;

       case 9:printf("Group ID\tg9\n");
             printf("No.of members\t25\n");
             printf("Chit Value\t15,00,000\n");
             printf("Max Amount per month\t60,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat8:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat8;
             }
             g9=fopen("g9.c","w+");
			 fprintf(g9,"Group ID\tg9\n");
             fprintf(g9,"No.of members\t25\n");
             fprintf(g9,"Chit Value\t15,00,000\n");
             fprintf(g9,"Max Amount per month\t60,000\n");
             fprintf(g9,"Company Commission\t4.00\n");
             fprintf(g9,"No.of Installments\t25\n");
             fprintf(g9,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
              a[0]='g';
			 a[1]='9';
			  custogrp(a,25);
			 fclose(g9);
			 break;

       case 10:printf("Group ID\tg10\n");
             printf("No.of members\t25\n");
             printf("Chit Value\t25,00,000\n");
             printf("Max Amount per month\t1,00,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t25\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat9:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat9;
             }
             g10=fopen("g10.c","w+");
			 fprintf(g10,"Group ID\tg10\n");
             fprintf(g10,"No.of members\t25\n");
             fprintf(g10,"Chit Value\t25,00,000\n");
             fprintf(g10,"Max Amount per month\t1,00,000\n");
             fprintf(g10,"Company Commission\t4.00\n");
             fprintf(g10,"No.of Installments\t25\n");
             fprintf(g10,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
              a[0]='g';
			 a[1]='1';
			 a[2]='0';
			  custogrp(a,25);
			 fclose(g10);
             break;

       case 11:printf("Group ID\tg11\n");
             printf("No.of members\t40\n");
             printf("Chit Value\t5,00,000\n");
             printf("Max Amount per month\t12,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t40");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat10:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat10;
             }
             g11=fopen("g11.c","w+");
             fprintf(g11,"Group ID\tg11\n");
             fprintf(g11,"No.of members\t40\n");
             fprintf(g11,"Chit Value\t5,00,000\n");
             fprintf(g11,"Max Amount per month\t12,000\n");
             fprintf(g11,"Company Commission\t4.00\n");
             fprintf(g11,"No.of Installments\t40");
             fprintf(g11,"Chit Registration Date : %d/%d/%d\n",rd.day,rd.month,rd.year);
             a[0]='g';
			 a[1]='1';
			 a[2]='1';
			  custogrp(a,40);
			 fclose(g11);
             break;

        case 12:printf("Group ID\tg12\n");
             printf("No.of members\t40\n");
             printf("Chit Value\t20,00,000\n");
             printf("Max Amount per month\t50,000\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t40\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat11:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat11;
             }
             g12=fopen("g12","w+");
             fprintf(g12,"Group ID\tg12\n");
             fprintf(g12,"No.of members\t40\n");
             fprintf(g12,"Chit Value\t20,00,000\n");
             fprintf(g12,"Max Amount per month\t50,000\n");
             fprintf(g12,"Company Commission\t4.00\n");
             fprintf(g12,"No.of Installments\t40\n");
             fprintf(g12,"Chit Registration Date : %d/%d/%d\n");
			  a[0]='g';
			 a[1]='1';
			 a[2]='2';
			  custogrp(a,40);
			 fclose(g12);
             break;

       case 13:printf("Group ID\tg13\n");
             printf("No.of members\t40\n");
             printf("Chit Value\t25,00,000\n");
             printf("Max Amount per month\t62,500\n");
             printf("Company Commission\t4.00\n");
             printf("No.of Installments\t40\n");
             printf("Chit Registration Date(DD/MM/YYYY)\t: ");
             dat12:
             scanf("%d/%d/%d",&rd.day,&rd.month,&rd.year);
             if((rd.day>31) || (rd.day<1) ||(rd.month>12) || (rd.month<1) || (rd.year>2028) || (rd.year<2017))
             {
                 printf("\nEnter the valid date(DD/MM/YYYY):");
                 goto dat12;
             }
			 g13=fopen("g13.c","w+");
			 fprintf(g13,"Group ID\tg13\n");
             fprintf(g13,"No.of members\t40\n");
             fprintf(g13,"Chit Value\t25,00,000\n");
             fprintf(g13,"Max Amount per month\t62,500\n");
             fprintf(g13,"Company Commission\t4.00\n");
             fprintf(g3,"No.of Installments\t40\n");
             fprintf(g13,"Chit Registration Date : %d/%d/%d\n");
              a[0]='g';
			 a[1]='1';
			 a[2]='3';
			  custogrp(a,40);
			 fclose(g13);
             break;

      default:printf("Invalid Selection,\tPlease Select the Appropriate Group Code:");
              goto gcode;
  }
}
void grpdet()
{
	FILE *f;
	char a[5],c;
	clrscr;
	printf("\n\n\n\n");
	printf("Enter the id of the group : ");
	scanf("%s",a);
	printf("\n\n\n\n\t\t\t\t\t\t\tGROUP DETAILS\n\n\n\n\n");
	strcat(a,".c");
	f=fopen(a,"r");
	while((c=fgetc(f))!=EOF)
	printf("%c",c);
	fclose(f);
	printf("\n");
}
void cusdet()
{
	FILE *f;
	char a[10],c;
	clrscr;
	printf("Enter the id of the customer : ");
	scanf("%s",a);
	printf("\n\n\n\n");
	strcat(a,".c");
	f=fopen(a,"r");
	while((c=fgetc(f))!=EOF)
	printf("%c",c);
	fclose(f);
	printf("\n");
}
void custogrp(char a[10],int n)
{
	int i,option,op,c;
	char memid[10];
	FILE *f;
	printf("\n\nNow we are going to add the members into the group \n\n");
	strcat(a,".c");
	f=fopen(a,"a+");
	fprintf(f,"\nTHE MEMBERS INCLUDED ARE \n");
	for(i=1;i<n;i++)
	{
		mem:
		printf("Enter 1 if the customer-%d is an already existing member \n else press 2\nEnter your choice : ",i);
		scanf("%d",&option);
		printf("HEllo \n");
		if(option==1)
		{
			printf("Enter the customer id of customer-%d : ",i);
			scanf("%s",memid);
		}
		else if(option==2)
		{
			printf("To create a new member id press 1\nTo rewrite the member id press 2\nEnter your choice : ");
			opt:
			scanf("%d",&op);
			if(op==1)
			{
				c=customer();
				printf("You have successfully created a new member id\n now enter the newly created member id : ");
				scanf("%s",memid);
			}
			else if(op==2)
			{
				goto mem;
			}
			else
			{
				printf("Enter the valid option : ");
				goto opt;
			}
		}
		else
		{
			printf("Enter a valid option : ");
			goto mem;
		}
		fprintf(f,"%s",memid);
	}
}
int customer()
{
	FILE *f;
    struct date dob,gdob;
	struct add cus,g;
	long long int phno,anin,gphno,gpin;
	int i,count;
	char cnt,name[50],gname[50],gemail[50],email[50],m[10];
	f=fopen("customer1.c","a+");
	clrscr;
	printf("\t\t\tMEMBER ID CREATION\n\n");
	printf("Enter the Customer Name ( eg : MOHAN BALAJI<tab> : ");
	nam:
	scanf("%[^\t]s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if((isalpha(name[i])==1)||(isspace(name[i])==1))
		{
			printf("Re-enter a Proper Name : ");
			goto nam;
		}
	}
	fprintf(f,"Name : %s\n",name);
	printf("Enter the Date of Birth(DD/MM/YYYY) : ");
	dateob:
	scanf("%d/%d/%d",&dob.d,&dob.m,&dob.y);
	if((dob.d>31)||(dob.d<1)||(dob.m>12)||(dob.m<1)||(dob.y>2002)||(dob.y<1960))
	{
		printf("Re-enter a Valid Date of Birth (DD/MM/YYYY): ");
		goto dateob;
	}
	fprintf(f,"Date of Birth : %d/%d/%d\n",dob.d,dob.m,dob.y);
	printf("Enter the Mobile Number:");
	phn:
	scanf("%lld",&phno);
	count=0;
	while(phno!=0)
	{
		phno=phno/10;
		++count;
	}
	if(count!=10)
	{
		printf("Re-enter a Valid Mobile Number:");
		goto phn;
	 }
	 fprintf(f,"Mobile number : %lld\n",phno);
	 printf("Enter the Annual Income:");
	 ann:
	 scanf("%lld",&anin);
	 if(anin<50000)
	 {
		printf("Re-enter Annual Income:");
		goto ann;
	 }
	 fprintf(f,"Annual income : %lld\n",anin);
	 printf("RESIDENTIAL ADDRESS : \n");
	 printf("Street:");
	 scanf("%s",cus.street);
	 printf("Area:");
	 ar:
	 scanf("%s",cus.area);
	 for(i=0;cus.area[i]='\0';i++)
	 {
		if((isalpha(cus.area[i])==1)||(isspace(cus.area[i])==1))
		{
			printf("Re-enter the Valid Area:");
			goto ar;
		}
	 }
	 printf("City:");
	 ci:
	 scanf("%s",cus.city);
	 for(i=0;cus.city[i]='\0';i++)
	 {
		if((isalpha(cus.city[i])==0)||(isspace(cus.city[i])==0))
		{
			printf("Re-enter the Valid City:");
			goto ci;
		}
	 }
	 printf("State:");
	 stat:
	 scanf("%s",cus.state);
	 for(i=0;cus.state[i]!='\0';i++)
	 {
		if((isalpha(cus.state[i])==1)||(isspace(cus.state[i])==1))
		{
			printf("Re-enter the Valid State:");
			goto stat;
		}
	 }
	 printf("Country:");
	 coun:
	 scanf("%s",cus.country);
	 for(i=0;cus.country[i]!='\0';i++)
	 {
		if((isalpha(cus.country[i])==1)||(isspace(cus.country[i])==1))
		{
			printf("Re-enter the Valid Country:");
			goto coun;
		}
	 }
	 printf("Pin-code:");
	 pin:
	 scanf("%lld",&cus.pincode);
	 count=0;
	 while(cus.pincode!=0)
	 {
		cus.pincode=cus.pincode/10;
		++count;
	 }
	 if(count!=6)
	 {
		printf("Re-enter the Valid Pin-code:");
		goto pin;
	 }
	 fprintf(f,"RESIDENTIAL ADDRESS : \n Area : %s\n Street : %s\n City : %s\n State : %s\n Country : %s\n Pincode : %lld\n",cus.area,cus.street,cus.city,cus.state,cus.country,cus.pincode);
	 printf("Enter the E-mail Id:");
	 scanf("%s",email);
	 fprintf(f,"\nEmail id : %s\n",email);
	 printf("\n\n\n\t\t\tGUARENTOR DETAILS\n\nEnter the Guaranteer Name:");
	 gnam:
	 scanf("%[^\t]s",gname);
	 for(i=0;gname[i]='\0';i++)
	 {
		if((isalpha(gname[i])==1)||(isspace(gname[i])==1))
		{
			printf("Re-enter the Guaranteer Name:");
			goto gnam;
		}
	 }
	 printf("Enter the Guaranteer Date of Birth(DD/MM/YYYY):");
	 gdateob:
	 scanf("%d/%d/%d",&gdob.d,&gdob.m,&gdob.y);
	 if((gdob.d>31)||(gdob.d<1)||(gdob.m>12)||(gdob.m<1)||(gdob.y>2002)||(gdob.y<1960))
	 {
		printf("Enter the Valid Date of Birth(DD/MM/YYYY):");
		goto gdateob;
	 }
	 printf("Enter the Guaranteer Mobile Number:");
	 gph:
	 scanf("%lld",&gphno);
	 count=0;
	 while(gphno!=0)
	 {
		gphno=gphno/10;
		++count;
	 }
	 if(count!=10)
	 {
		printf("Re-enter the Valid Mobile Number:");
		goto gph;
	 }
	 fprintf(f,"\n\n\t\tGuarentor details\n\nName : %s\nDate of Birth : %d/%d/%d\n Mobile Number : %lld\n",gname,gdob.d,gdob.m,gdob.y,gphno);
	 printf("RESIDENTIAL ADDRESS : \n");
	 printf("Street:");
	 scanf("%s",g.street);
	 printf("Area:");
	 gar:
	 scanf("%s",g.area);
	 for(i=0;g.area[i]='\0';i++)
	 {
		if((isalpha(g.area[i])==1)||(isspace(g.area[i])==1))
		{
			printf("Re-enter the Valid Area:");
			goto gar;
		}
	 }
	 printf("City:");
	 gcity:
	 scanf("%s",g.city);
	 for(i=0;g.city[i]='\0';i++)
	 {
		if((isalpha(g.city[i])==1)||(isspace(g.city[i])==1))
		{
			printf("Re-enter the City:");
			goto gcity;
		}
	 }
	 printf("State:");
	 gstat:
	 scanf("%s",g.state);
	 for(i=0;g.state[i]!='\0';i++)
	 {
		if((isalpha(g.state[i])==1)||(isspace(g.state[i])==1))
		{
			printf("Re-enter the State:");
			goto gstat;
		}
	 }
	 printf("Country:");
	 gcoun:
	 scanf("%s",g.country);
	 for(i=0;g.country[i]!='\0';i++)
    {
        if((isalpha(g.country[i]==1))||(isspace(g.country[i]==1)))
		{
			printf("Re-enter the Country:");
			goto gcoun;
		}
    }
	 printf("Pin-code:");
	 gp:
	 scanf("%lld",&g.pincode);
	 count=0;
	 while(g.pincode!=0)
	 {
		g.pincode=g.pincode/10;
		++count;
	 }
	 if(count!=6)
	 {
		printf("Re-enter the Pin-code:");
		goto gp;
	 }
	 printf("Enter the Guaranteer E-mail Id:");
	 scanf("%s",gemail);
	 fprintf(f,"RESIDENTIAL ADDRESS : \n Street : %s\nArea : %s\nCity : %s\nState : %s\nCountry : %s\nPincode : %lld\nEmail id : %s\n",g.street,g.area,g.city,g.state,g.country,g.pincode,gemail);
	 fclose(f);
	 cnt++;
	// member=fopen("number.c","w+");
	 //fprintf(member,"%d",cnt);
	 //fclose(member); 
	 printf("The new member id is created successfully....\n\n");
	 return 0;
}
int bidding()
{
	int n,month,x,i,j,k=0,l,temp,o,a[30],p,m=0;
	char grpid[10],memid[10][50];
	long int amt,am,hbit=0,min,b[30][30],c[30];
	clrscr;
	printf("\t\t\tWelcome for today's bidding\n\n");
	printf("Enter the Group Id : ");
	scanf("%s",grpid);
	printf("Enter the Chit Amount : ");
	scanf("%ld",&am);
	amt=am*0.25;
	printf("Enter the Month : ");
	month:
	scanf("%d",&month);
	if(month<1 && month>40)
	{
		printf("Enter a Valid Month : ");
		goto month;
	}
	printf("Enter the Minimum Bet Amount : ");
	min:
	scanf("%ld",&min);
	if(min<1000&&min>amt)
	{
		printf("Enter the Valid Minimum Bet Amount : ");
		goto min;
	}
	printf("Enter the Number of Members Participating in the Bet : ");
	n:
	scanf("%d",&n);
	if(n<0&&n>=40)
	{
		printf("Enter the Valid Number of Members : ");
		goto n;
	}
	for(i=1;i<=n;i++)
	{
		printf("Enter the Member Id of Participant-%d : ",i);
		scanf("%s",memid[i]);
	} //member id collecting.
	for(i=1;i<=n;i++)
	{
		b[0][i]=0;
		b[i][0]=0;
		a[i]=i;
	}
	b[1][0]=0;
	p=n;
	for(i=1;(hbit<=amt) && (p>1);i++)
	{
		k=0;
		printf("\n\t\t\tBET NUMBER - %d \t\t\n",i);
		for(j=1;j<=p;j++)
		{
			x=a[j];
			con:
			printf("Enter the Bet Amount of %s : ",memid[x]);
			scanf("%ld",&b[i][j]);
			if(b[i][j]<=min || b[i][j-1]>b[i][j])
			{
				printf("The Amount is Less than Minimum Bet Amount.",memid[i]);
				printf("Do you want continue?\nIf yes,press 1\nIf no press 2\nEnter your Choice : ");
				scanf("%d",&o);
				if(o==1)
				{
					
					goto con;
				}
				else if(o==2)
				{
					b[i][j]=0;
				}
				else
				{
					printf("Please Enter the Valid Option..\n");
					goto con;
				}
			}
			if(b[i-1][j]<b[i][j] && b[i][j]!=0)
			{
				k++;
				a[k]=j;

			}
			m++;
			c[j]=b[i][j];
		}
		if(p==2 && hbit>(amt))
		{
			if(b[i][j]>b[i][j-1])
			{
				printf("The Highest Bet Amount is %ld \n",b[i][j]);
				hbit=b[i][j];
			}
			else
			{
				printf("The Highest Bet Amount is %ld \n",b[i][j-1]);
				hbit=b[i][j-1];
			}
			break;
		}
		for(l=1;l<=p;l++)
		{
			for(j=l+1;j<=p;j++)
			{
				if(c[l]<c[j])
				{
					temp=c[l];
					c[l]=c[j];
					c[j]=temp;
				}
			}
		}
		printf("The Highest Bet of Bet Number-%d is %ld\n ",i,c[1]);
		min=c[1];
		hbit=c[1];
		b[i+1][0]=0;
		p=k;
	}
	if(hbit>amt)
	{
		printf("The Betting cannot be carried further because the Highest\n Bit is greater than the maximum quot amount\nSo the members\n");
		for(m=1;m<=p;m++)
		{       x=a[m];
			printf("%s\n",memid[x]);
		}
		printf("can be choosed by Lottery System\n");
		return(0);
	}
	printf("the Winner is %s is the Bet Amount is %ld\n",a[j],hbit);
	return 0;
}
void cal()
{
	int netamt,duration,members,cmpbid,monbid,maxdis=30000,curmon,amt,amtperhead,minbid;
	printf("NET AMOUNT OF THIS SCHEME:");
	net:
	scanf("%d",&netamt);
	if(netamt<=0)
	{
		printf("Re-entre the amount correctly:");
		goto net;
	}
	printf("NO.OF.PARTICIPANTS:");
	mem:
	scanf("%d",&members);
	if(members!=20 &&members!=25 &&members!=40)
	{
		printf("Re-entre the value correctly:");
		goto mem;
	}
	duration=members;
	printf("ENTER THE COMPANY BID:");
	cmp:
	scanf("%d",&cmpbid);
	if(cmpbid<=0 || cmpbid>=6)
	{
		printf("Re-entre the correct value:");
		goto cmp;
	}
	printf("ENTER THE MONTHLY BID:");
	mon:
	scanf("%d",&monbid);
	if(monbid<=0 || monbid>=netamt/2)
	{
		printf("Re-entre the amount correctly:");
		goto mon;
	}
	printf("CURRENT MONTH:");
	cur:
	scanf("%d",&curmon);
	if(curmon<=0 || curmon>duration)
	{
		printf("Re-entre the amount correctly:");
		goto net;
	}
	amt=netamt-maxdis;
	amtperhead=amt/members;
	minbid=(((curmon-1)+cmpbid+monbid)*netamt)/100;   
	printf("\nNET AMOUNT                           :%d",netamt);
	printf("\nNUMBER OF PARTICIPANTS IN THIS GROUP :%d",members);
	printf("\nNUMBER OF MONTHS IN THIS SCEME       :%d",duration);
	printf("\nCOMPANY BID                          :%d",cmpbid);
	printf("\nCURRENT MONTH                        :%d",curmon);
	printf("\nBID INCREASES PER MONTH              :%d",monbid);
	printf("\nMINIMUM AMOUNT OF THIS MONTH         :%d",minbid);
	printf("\nAMOUNT TAKEN IN THIS MONTH           :%d",amt);
	printf("\nAMOUNT FOR EACH PERSON               :%d",amtperhead);	
}

	
