#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCount = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iCount = iCount * iCnt;
        }
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of Number is : %d", iRet);

    return 0;
}