/*
  Subject:This is the science section of my Library Management System.
  Serial_no_:09
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming into science category.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//Dependancy

/* Main Function */
void science_page()
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

  //Design the science page
  printf("\t\t\t -------------------------------\n");
  printf("\t\t\t            Science             \n");
  printf("\t\t\t -------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *sci;
  char table_data[50];
  sci=fopen("../deps/Science/section_data.txt","r");
  if(sci==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,sci)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(sci);
  printf("\n");

  //Choice Selection
  char sci_choice;
  printf("Enter your book choice:");
  Sci_Choice:
  scanf(" %c",&sci_choice);
  sci_choice=tolower(sci_choice);
  switch(sci_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Science/A brief History of Time.pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Science/The_Grand_Design.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Sci_Choice;
    }
  }
  printf("\n");
}
