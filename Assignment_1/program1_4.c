
/////////////////////////////////////////////////////////////////
//
//  Function Name   :  Accept a number and check if its Divisible by 5
//  Description     :  Accept a no. and check divisibility by 5
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Manoj Patode
//  Date            :  19/10/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == 1)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}