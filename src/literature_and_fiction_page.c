/*
  Subject:This is the literature and fiction section of my Library Management System.
  Serial_no_:05
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming into literature and fiction section.
*/

/*
  To Do:
  5.Make a full choice selection statement.
  4.Quit if the person chooses q
  6.Test the page.
*/

/*Including Header files*/
//dependancy

/* Main Function */
void lit_and_fic_page()
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

  //Design the literature and fiction page
  printf("\t\t\t  ------------------------------\n");
  printf("\t\t\t      Literature and Fiction    \n");
  printf("\t\t\t  ------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *lit_fic;
  char table_data[50];
  lit_fic=fopen("../deps/Literature and Fiction/section_data.txt","r");
  if(lit_fic==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,lit_fic)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(lit_fic);
  printf("\n");

  //Choice Selection
  char lit_fic_choice;
  printf("Enter your book choice:");
  Lit_Fic_Choice:
  scanf(" %c",&lit_fic_choice);
  lit_fic_choice=tolower(lit_fic_choice);
  switch(lit_fic_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Literature and Fiction/The_Alchemist.pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Literature and Fiction/Pride_and_Prejudice.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Lit_Fic_Choice;
    }
  }
  printf("\n");
}
