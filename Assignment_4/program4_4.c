#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Age");
    }
    else if(iNo >= 18)
    {
        printf("Eligible for Voting");
    }
    else if (iNo < 18)
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Your Age: ");
    scanf("%d", &iValue);

    FindGreater(iValue);

    return EXIT_SUCCESS;
}