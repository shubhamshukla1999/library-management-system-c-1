/*
  Subject:This is the computer science and technology section of my Library Management System.
  Serial_no_:06
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming into computer science and technology.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//dependancy

/* Main Function */
void comp_sci_page()
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

  //Design the computer science and tech page
  printf("\t\t\t -------------------------------\n");
  printf("\t\t\t     Computer Science & Tech    \n");
  printf("\t\t\t -------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *comp_sci;
  char table_data[50];
  comp_sci=fopen("../deps/Computer Science and Technology/section_data.txt","r");
  if(comp_sci==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,comp_sci)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(comp_sci);
  printf("\n");

  //Choice Selection
  char comp_sci_choice;
  printf("Enter your book choice:");
  Comp_Sci_Choice:
  scanf(" %c",&comp_sci_choice);
  comp_sci_choice=tolower(comp_sci_choice);
  switch(comp_sci_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Computer Science and Technology/Advanced_C_and_ C++_ Compiling .pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Computer Science and Technology/Encyclopedia_of_Computer_Science_and_Technology.pdf'");
      break;
    }
    case 'c':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Computer Science and Technology/Linux_Bible.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Comp_Sci_Choice;
    }
  }
  printf("\n");
}
