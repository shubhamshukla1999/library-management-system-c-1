/*
  Subject:This is the books page of my Library Management System.
  Serial_no_:03
  Date:6 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain the link to all the categories of the books.
*/

/*Including Header files*/
//dependancy

/*Including other files*/
#include "literature_and_fiction_page.c"
#include "comp_sci_page.c"
#include "math_page.c"
#include "social_science_page.c"
#include "science_page.c"
#include "others_page.c"

/*
  To Do:All Done
*/

/* Main Function */
void books_page()
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
  printf("\t\t\t\t         Books         \n");
  printf("\t\t\t\t-----------------------\n");
  printf("\n");

  //All the categories of the Books
  printf("\t(a)Literature & Fiction\n");
  printf("\t(b)Computer Science and Technology\n");
  printf("\t(c)Mathematics\n");
  printf("\t(d)Social Science\n");
  printf("\t(e)Science\n");
  printf("\t(f)Other Category(Fantasy,Drama,Sci-Fi,Thriller)\n\n");
  printf("\t(q)Quit\n\n");

  //Choice Selection
  printf("Enter your choice:");
  char category_choice; //Switch variable
Category_Choice:
  scanf(" %c",&category_choice);
  category_choice=tolower(category_choice); //Converting every character to its lower case
  switch(category_choice)
  {
    case 'a':{
      lit_and_fic_page();
      break;
    }
    case 'b':{
      comp_sci_page();
      break;
    }
    case 'c':{
      math_page();
      break;
    }
    case 'd':{
      social_science_page();
      break;
    }
    case 'e':{
      science_page();
      break;
    }
    case 'f':{
      others_page();
      break;
    }
    case 'q':{
      system("exit");   //Quit case
      break;
    }
    default:{
      printf("Enter a valid choice:");
      goto Category_Choice;
    }
  }
  printf("\n");
}
