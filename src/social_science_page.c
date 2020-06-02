/*
  Subject:This is the social science section of my Library Management System.
  Serial_no_:08
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming into social science category.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//dependancy.

/* Main Function */
void social_science_page()
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

  //Design the social science page
  printf("\t\t\t -------------------------------\n");
  printf("\t\t\t        Social Science          \n");
  printf("\t\t\t -------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *social_sci;
  char table_data[50];
  social_sci=fopen("../deps/Social Science/section_data.txt","r");
  if(social_sci==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,social_sci)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(social_sci);
  printf("\n");

  //Choice Selection
  char social_sci_choice;
  printf("Enter your book choice:");
  Social_Sci_Choice:
  scanf(" %c",&social_sci_choice);
  social_sci_choice=tolower(social_sci_choice);
  switch(social_sci_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Social Science/The Social Animal.pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Social Science/The_California_Landlord's_Law Book_ Evictions.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Social_Sci_Choice;
    }
  }
  printf("\n");
}
