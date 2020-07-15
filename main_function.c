#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"server.h"
struct Empdetials emp[5];  // definition of emp
int linematched;
void main(int argc,char *argv[])//command line arguments takes the name of the file to be read
{
    char file_name[30];//to copy the name of the file into a character array
    strcpy(file_name,argv[1]);//copying the name here 
    //printf("%s\n\n",file_name);//tersting if the name is taken sucessfully
    table(file_name);//calling the function to initiate the process of filling a structure with all the data from the files
    printf("--------------------------------HELLO-------------------------------\n");
    printf("----------------------WELCOME TO LEAVE MANEGMENT SYSTEM--------------\n");
    main2();//the use of this is explained in the next .c file
}