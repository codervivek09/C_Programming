#include<stdio.h>

double CircleArea(float Radius)
{
    float PI = 3.14f;

    double iArea = 0.0;

    iArea = PI * Radius * Radius;

    return iArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter Number : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %.4f", dRet);

    return 0;
}