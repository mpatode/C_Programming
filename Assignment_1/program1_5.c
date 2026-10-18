
/////////////////////////////////////////////////////////////////
//
//  Function Name   :  Print * on screen, the given no. of times
//  Description     :  Print * on screen
//  Input           :  Integer
//  Output          :  Integer
//  Author          :  Manoj Patode
//  Date            :  19/10/2026
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}