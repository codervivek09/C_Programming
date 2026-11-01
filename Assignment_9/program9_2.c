#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCurr = 0;

    iCurr = iNo * 70;

    return iCurr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("%d", iRet);

    return 0;
}