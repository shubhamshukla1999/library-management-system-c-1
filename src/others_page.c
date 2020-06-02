/*
  Subject:This is the others section of my Library Management System.
  Serial_no_:10
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming any category.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//dependancy
/* Main Function */
void others_page()
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

  //Design the others page
  printf("\t\t\t -------------------------------\n");
  printf("\t\t\t             Others             \n");
  printf("\t\t\t -------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *oth;
  char table_data[50];
  oth=fopen("../deps/Others/section_data.txt","r");
  if(oth==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,oth)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(oth);
  printf("\n");

  //Choice Selection
  char oth_choice;
  printf("Enter your book choice:");
  Oth_Choice:
  scanf(" %c",&oth_choice);
  oth_choice=tolower(oth_choice);
  switch(oth_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Others/Angels_&_Demons.pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Others/Harry_Potter_and_the_Deathly_Hallows.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Oth_Choice;
    }
  }
  printf("\n");
}
