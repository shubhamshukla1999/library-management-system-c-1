/*
  Subject:This is the mathematics section of my Library Management System.
  Serial_no_:07
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will contain all the books coming into math category.
*/

/*
  To Do:All Done.
*/

/*Including Header files*/
//Dependancy

/* Main Function */
void math_page()
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

  //Design the math page
  printf("\t\t\t -------------------------------\n");
  printf("\t\t\t           Mathematics          \n");
  printf("\t\t\t -------------------------------\n");
  printf("\n");

  //Listing out the content of the directory in a table format
  FILE *math;
  char table_data[50];
  math=fopen("../deps/Mathematics/section_data.txt","r");
  if(math==0)
  {
    printf("File is not found.\n");
    exit(1);
  }
  else
  {
    while(fgets(table_data,50,math)!=NULL)
    {
      printf("%s",table_data);
    }
  }
  fclose(math);
  printf("\n");

  //Choice Selection
  char math_choice;
  printf("Enter your book choice:");
  Math_Choice:
  scanf(" %c",&math_choice);
  math_choice=tolower(math_choice);
  switch(math_choice)
  {
    case 'a':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Mathematics/Basic_Engineering_Mathematics.pdf'");
      break;
    }
    case 'b':{
      printf("Opening your requested book.");
      printf("\n");
      system("xdg-open '../deps/Mathematics/Discrete_Mathematics.pdf'");
      break;
    }
    case 'q':{
      printf("Leaving the program.");
      system("exit");
      break;
    }
    default:{
      printf("Enter a valid choice! :");
      goto Math_Choice;
    }
  }
  printf("\n");
}
