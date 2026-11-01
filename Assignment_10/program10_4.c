#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTemp = 0.0;

    dTemp = (fTemp - 32) * (5.0/9.0);

    return dTemp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius : %f", dRet);

    return 0;
}