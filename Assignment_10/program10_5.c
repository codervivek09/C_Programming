#include<stdio.h>

double SquareMeter(int iValue)
{
    double SqrMeter = 0.0;

    SqrMeter = 0.092903;
    
    double dArea = SqrMeter * (double)iValue;

    return dArea;
}

int main ()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter : %lf", dRet);

    return 0;
}