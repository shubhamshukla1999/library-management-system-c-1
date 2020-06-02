/*
  Subject:This is the services page of my Library Management System.
  Serial_no_:02
  Date:5 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain the code for all the services to the user i.e.Books and Newspapers.
*/

/*Including Header files*/
//dependancy

/*Including other files*/
#include "books_page.c"
#include "news_page.c"
#include "search_page.c"

/*
  To Do List:
  1.Link all the necessary files and then test it.
*/

/* Main Function */
void services_page()
{
  system("clear||@cls");
  printf("\n\n");

  //Main Header of the System.
  printf("\t\t*****************************************************\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*           Library Management System               *\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*****************************************************\n");
  printf("\n\n");

  //Design the Services page
  printf("\t\t\t\t-----------------------\n");
  printf("\t\t\t\t        Services       \n");
  printf("\t\t\t\t-----------------------\n");
  printf("\n");

  //Given Services tab
  printf("\t(a)Books\n");
  printf("\t(b)News\n");
  printf("\t(c)Search\n");
  printf("\t(q)Quit\n\n");

  //Choice Selection
  char choice;  //Choice Variable
  printf("\tEnter your choice:");
  Choice:
  scanf(" %c",&choice);
  choice=tolower(choice); //Converting everthing to lower case with tolower()
  switch(choice)  //Switching between the choices
  {
    case 'a':{
      books_page(); //Navigate to Books page
      break;
    }
    case 'b':{
      news_page();//Navigate to Newspaper Page
      break;
    }
    case 'c':{
      search_page();//Navigate to Search Page
      break;
    }
    case 'q':system("exit");  //Exit out of the program
              break;
    default:printf("\tEnter a valid choice! :");  //Try again!
            goto Choice;
    }
  printf("\n");
}
