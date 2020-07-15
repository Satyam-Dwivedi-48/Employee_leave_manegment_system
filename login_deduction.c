#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"server.h"
int login()
{
    int i;//for the loop
    char userid[9];//user ID int he majn function,this will be passed to the the login function
    char userpassword[5];//user password in the main function
    printf("ENTER YOUR 8 CHARACTER USER ID\n");
    scanf("%s",userid);
    printf("ENTER THE 4 CHARACTER PASSWORD\n");
    scanf("%s",userpassword);
    linematched=0;
    for(i=0;i<5;i++)
    {
        if((strcmp(emp[i].id,userid)==0)&&(strcmp(emp[i].password,userpassword)==0))//checking if login credentils are corre3ct or wrong
        {
            linematched=i;
            printf("WELCOME %s TO THE LEAVE MANEGMENT SYSTEM\n",emp[linematched].name);
            return 1;//TO INDICATE THAT USER WAS FOUND AND LOGIN WAS SUCCESFUL
            break;
        }
        
    }
}
int deduction(int linematched,int days,int type_of_leave)//here all inputs are validated for the second time after the validation in main function
{
    switch(type_of_leave)
    {
        case 1://casual leave
        {
            if(days>emp[linematched].casual)//second validation happens here with respect to the specified user
            {
                printf("SORRY YOU HAVE EXHAUSTED YOUR LEAVE QUOTA\n\n");
                again();
                return 0;
                break;
            }
            else
            {
                emp[linematched].casual=emp[linematched].casual-days;
                return 1;
                break;
            }
            break;
        }
        case 2://medical leave
        {
            if(days>emp[linematched].medical)
            {
                printf("SORRY YOU HAVE EXHAUSTED YOUR LEAVE QUOTA\n\n");
                again();
                return 0;
                break;
            }
            else
            {
                emp[linematched].medical=emp[linematched].medical-days;
                return 1;
                break;
            }
            break;
        }
        case 3://earned leave
        {
            if(days>emp[linematched].earned)
            {
                printf("SORRY YOU HAVE EXHAUSTED YOUR LEAVE QUOTA\n\n");
                again();
                return 0;
                break;
            }
            else
            {
                emp[linematched].earned=emp[linematched].earned-days;
                return 1;
                break;
            }
            break;
        };
    };
}