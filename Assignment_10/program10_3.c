#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = 1000;

    int iDistance = 0;

    iDistance = iNo * iMeter;

    return iDistance;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("KM to Meter : %d", iRet);

    return 0;
}