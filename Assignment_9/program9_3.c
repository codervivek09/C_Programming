#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCount = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iCount = iCount * iCnt;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of Number is : %d", iRet);

    return 0;
}