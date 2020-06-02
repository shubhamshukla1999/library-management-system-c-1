/*
  Subject:This is the starting page of my Library Management System.
  Serial_no_:01
  Date:4 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain the code for login page.
*/

/*
  To Do:
  1.Testing.
*/

/*Including Header files*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <ctype.h>

/*including other files*/
#include "services_page.c"

/* Function Definition */
int fibo(int);
void header(void);
void login(void);

/*Main function*/
void main()
{
Try:
  system("clear||@cls"); //Clear the terminal screen for neat and clean description of content.
  printf("\n\n");
//Getting the Header
  header();

//Getting the login page
  login();

//Prompt for username and password
  printf("\n\t\t Username:??                         Password:??\n\n");
  char username[50];  //Variables for username and password
  char password_size[50];
  //Scanning username
  printf("\t Enter the username:");
  fgets(username,50,stdin); //Standard way of getting a string with defined size.
  //Scanning password
  char *password=&password_size[0]; //Making a pointer for inputting the password
  password=getpass("\t Enter the password:");  //Applying the getpass function with pointer help to take the input.

//Checking the username in the database using file handling
  FILE *check;  //Creating the file pointer
  char test[50];  //Assigning the size of data
  int incorrect=0;  //Creating it for incorrect username
  check= fopen("../Username_Password/username.txt","r"); //Opening the file
  if(check==0)  //Safety Condition
  {
    printf("Internal Error in User Directory!");
    system("exit");
  }
  else
  {
    while(fscanf(check,"%s",test)!=EOF)   //Reading word by word
    {
      if((strncmp(test,username,strlen(test))==0))  //Applying the string compare function within limits
      {
        incorrect=1;  //Logging into the user account.
        break;  //Once found exit the loop
      }
    }
    if(incorrect==0)  //For incorrect username
    {
      printf("Incorrect Username.Try again!\t\t");
      printf("Enter CTRL+C to exit.");
      goto Try;
    }
  }
  fclose(check); //Closing the username verification file

 //Making the encryption algorithm for password
 //Logic behind the encryption algorithm
 /*
 int i,letter;
 char passphrase[]="password";
 for(i=0;i<=7;i++)
 {
   letter=(passphrase[i]+fibo(i));
   printf("%d ",letter);
 }
 */

 //Decrypting the encrypted password using file handling
 FILE *pass;  //Making a file pointer for password file
 pass=fopen("../Username_Password/password.txt","r");    //Opening the file
 if(pass==0)    //If file is not found the do this
 {
   printf("Internal error in the password directory.");
   exit(1);
 }
 else
 {
  int decrypt_passphrase[8];  //For scanning the file
  int cracked_password[8];   //For storing the cracked password
  int i,temp=0;
  for(i=0;i<=7;i++)   //Decryption loop
  {
    fscanf(pass,"%d",&decrypt_passphrase[i]);
    cracked_password[i]=(decrypt_passphrase[i]-fibo(i));
  }
  for(i=0;i<strlen(password);i++)
  {
    if(password[i]==cracked_password[i])
    {
      temp++;
      continue;
    }
    break;
  }
  if(temp==8)
  {
    printf("\n\t\tWelcome into the Library, %s",username);
  }
  else
  {
    printf("Incorrect Password. Try Again!\t\t");
    printf("Enter CTRL+C to exit.");
    goto Try;
  }

 }
 fclose(pass);

 //Linking the services page
 services_page();

 printf("\n");
}

//All function definitions

/* header() definition */
void header(void)
{
  printf("\t\t*****************************************************\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*           Library Management System               *\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*****************************************************\n");
  printf("\n\n");
}
/* login() definition*/
void login(void)
{
  printf("\t\t\t\t-----------------------\n");
  printf("\t\t\t\t         Login         \n");
  printf("\t\t\t\t-----------------------\n");
}

/* fibo() definition */
int fibo(int num)
{
  if(num==0)
  return 0;
  else if(num==1)   //Applying the Recursion
  return 1;
  else
  return fibo(num-1)+fibo(num-2);
}
