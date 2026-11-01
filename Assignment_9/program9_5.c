#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCount1 = 1, iCount2 = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iCount1 = iCount1 * iCnt;
        }
        else 
        {
            iCount2 = iCount2 * iCnt;   
        }
    }
    return iCount1 - iCount2;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d", iRet);

    return 0;
}