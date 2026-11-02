#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iNo)
{
    if(iNo % 400  == 0 || (iNo % 4 == 0 && iNo % 100 != 0))
    {
        printf("It is Leap Year");
    }
    else 
    {
        printf("It is Not Leap Year");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Year : ");
    scanf("%d", &iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}