/*
  Subject:This is the search page of my Library Management System.
  Serial_no_:11
  Date:7 Jul 2019
  Made by: Arsharaj Chauhan
*/

/*
  Description:This page will search for any particular book category, news channel or any partcular book with the help of keywords.
*/

/*Including Header files*/
//Dependancy

/*
  To Do:
  8.All Done
*/

/* Function Definition */
void header_two(void);
void search(void);

/*Main function*/
void search_page()
{
Try:
  system("clear||@cls"); //Clear the terminal screen for neat and clean description of content.
  printf("\n\n");
//Getting the Header
  header_two();

//Getting the login page
  search();
  printf("\n\n");

//Search Guidelines
 printf("\t Search Guidelines:- \n\n");
 printf("1.Enter any category name to navigate to it.\n");
 printf("2.Enter any book name to search weather it is present in the library or not.\n");
 printf("3.Enter news channel name to directly navigate to its website.\n\n");
 printf("(q)Quit\n");
 printf("\n");

//Asking for the keyword
char keyword[50];
int i;
printf("Enter the keyword:");
scanf(" "); //Clearing buffer
fgets(keyword,50,stdin);
for(i=0;i<50;i++) //Making it case insensitive
{
  keyword[i]=tolower(keyword[i]);
}

//Quitting out of the program
if(keyword=="quit"||keyword[0]=='q'||keyword[0]=='Q')
{
  exit(0);
}

//Searching for the keyword
FILE *search; //making a file pointer
int j;  //For switching between different files
int not_found=0;
char data_to_be_searched[50]; //Storing the comparable string
for(j=0;j<=6;j++)  //Applying the loop
{
  if(j==0)  //Case 1
  {
    search=fopen("../deps/Science/section_data.txt","r");
  }
  else if(j==1) //case 2
  {
     search=fopen("../deps/Literature and Fiction/section_data.txt","r");
  }
  else if(j==2) //Case 3
  {
    search=fopen("../deps/Mathematics/section_data.txt","r");
  }
  else if(j==3) //Case 4
  {
    search=fopen("../deps/Others/section_data.txt","r");
  }
  else if(j==4) //Case 5
  {
    search=fopen("../deps/Computer Science and Technology/section_data.txt","r");
  }
  else if(j==5) //Case 6
  {
    search=fopen("../deps/Social Science/section_data.txt","r");
  }
  else  //Case 7
  {
    search=fopen("../deps/News/section_data.txt","r");
  }

//Main work of pointer
  if(search==0) //If the file is not present
  {
      printf("File is not found in the database.\n");
      system("exit");
  }
  else  //if file is present in the database
  {
    while(fscanf(search,"%s",data_to_be_searched)!=EOF) //Picking up a single string for comparision
      {
        for(i=0;i<50;i++) //making it case insensitive for better search
        {
          data_to_be_searched[i]=tolower(data_to_be_searched[i]);
        }

        //Comparing the strings
        if(strncmp(data_to_be_searched,keyword,strlen(data_to_be_searched))==0)
        {
          fclose(search);
          if(j==0)
          {
            science_page();
            not_found=1;
          }
          else if(j==1)
          {
            lit_and_fic_page();
            not_found=1;
          }
          else if(j==2)
          {
            math_page();
            not_found=1;
          }
          else if(j==3)
          {
            others_page();
            not_found=1;
          }
          else if(j==4)
          {
            comp_sci_page();
            not_found=1;
          }
          else if(j==5)
          {
            social_science_page();
            not_found=1;
          }
          else if(j==6)
          {
              news_page();
              not_found=1;
          }
          else //default
          {
            //Do nothing
          }
          break;
          break;
        }
      }
  }
    fclose(search); //Closing the file pointer
}
  fclose(search); //Safety pointer case

if(not_found==0)
{
  printf("Not found...");
}
 printf("\n");
}

//All function definitions

/* header() definition */
void header_two(void)
{
  printf("\t\t*****************************************************\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*           Library Management System               *\n");
  printf("\t\t*                                                   *\n");
  printf("\t\t*****************************************************\n");
  printf("\n\n");
}
/* login() definition*/
void search(void)
{
  printf("\t\t\t\t-----------------------\n");
  printf("\t\t\t\t         Search        \n");
  printf("\t\t\t\t-----------------------\n");
}
