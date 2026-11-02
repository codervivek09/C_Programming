#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2 ) == 0)
    {
        printf("Number is Even\n");
    }
    else 
    {
        printf("Number is Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}