#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"server.h"
void quit()
{
    char ans[5];
    printf("ARE YOU SURE YOU WANT TO QUIT THE WIZARD? Y OR N\n");
    scanf("%s", ans);
    if (tolower(ans[0]) == 'y')
    {
        final_print();
        printf("\n\n");
        printf("---THANK YOU FOR USING OUR PORTAL--\n");
    }
    else
    {
        main2();
    }
}
void again()
{
    char ans1[5];
    printf("SEARCH AGAIN USING ID AND PASSWORD? Y OR N\n");
    scanf("%s", ans1);
    if (tolower(ans1[0]) == 'y')
    {
        main2();//FOR RE-LOGIN PROCESS
    }
    else
    {
        quit();
    }
    printf("\n\n\n\n\n\n");
}
void final_print()
{
    printf("----------------FINAL STATEMENT OF LEAVE OF EACH EMPLOYEE------------------------\n\n");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("NAME : %s\n",emp[i].name);
        printf("USER ID : %s\n",emp[i].id);
        printf("CASUAL LEAVE LEFT : %d\n",emp[i].casual);
        printf("MEDICAL LEAVE LEFT : %d\n",emp[i].medical);
        printf("EARNED LEAVE LEFT : %d\n\n",emp[i].earned);
    }
    printf("---------THANK YOU FOR USING LEAVE MANEGMENT PORTAL-----\n");
}