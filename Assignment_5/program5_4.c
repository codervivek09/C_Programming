#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        printf("Divisible by Both");
    }
    else if(iNo % 3 == 0)
    {
        printf("Divissible by 3 Only");
    } 
    else if(iNo % 5 == 0)
    {
        printf("Divissible by 5 Only");
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}