/*
  Subject:This is the newspapers page of my Library Management System.
  Serial_no_:04
  Date:6 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain the link to all the newspapers sites and will also navigate the user to it.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//Dependancy

/* Main Function */
void news_page()
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
  printf("\t\t\t\t          News         \n");
  printf("\t\t\t\t-----------------------\n");
  printf("\n");

  //All the categories of the Newspapers
  printf("\t(a)Times of India\n");
  printf("\t(b)The Hindu\n");
  printf("\t(c)Hindustan Times\n");
  printf("\t(d)Indian Express\n");
  printf("\t(e)Daily News and Analysis\n");
  printf("\t(f)Economic Times\n\n");
  printf("\t(q)Quit\n\n");

  //Choice Selection
  printf("Enter your choice:");
  char news_choice; //Switch variable
News_Choice:
  scanf(" %c",&news_choice);
  news_choice=tolower(news_choice); //Converting every character to its lower case
  switch(news_choice)
  {
    //Navigating to Times of India with xdg-open command from linux
    case 'a':{
      printf("Navigating to Times of India....\n");
      system("sleep 2s");
      system("xdg-open https://timesofindia.indiatimes.com");
      printf("Navigated to the site successfully.");
      break;
    }
    //Navigating to The Hindu with xdg-open command from linux
    case 'b':{
      printf("Navigating to The Hindu....\n");
      system("sleep 2s");
      system("xdg-open https://www.thehindu.com");
      system("exit");
      printf("Navigated to the site successfully.");
      break;
    }
    //Navigating to Hindustan Times with xdg-open command from linux
    case 'c':{
      printf("Navigating to Hindustan Times....\n");
      system("sleep 2s");
      system("xdg-open https://www.hindustantimes.com");
      printf("Navigated to the site successfully.");
      break;
    }
    //Navigating to Indian Express with xdg-open command from linux
    case 'd':{
      printf("Navigating to Indian Express....\n");
      system("sleep 2s");
      system("xdg-open https://indianexpress.com");
      printf("Navigated to the site sucessfully.");
      break;
    }
    //Navigating to DNA with xdg-open command from linux
    case 'e':{
      printf("Navigating to DNA....\n");
      system("sleep 2s");
      system("xdg-open https://www.dnaindia.com");
      printf("Navigated to the site successfully.");
      break;
    }
    //Navigating to Economic Times with xdg-open command from linux
    case 'f':{
      printf("Navigating to Economic Times....\n");
      system("sleep 2s");
      system("xdg-open https://economictimes.indiatimes.com");
      printf("Navigated to the site successfully.");
      break;
    }
    case 'q':{
      system("exit");   //Quit case
      break;
    }
    default:{
      printf("Enter a valid choice:");
      goto News_Choice;
    }
  }
  printf("\n");
}
