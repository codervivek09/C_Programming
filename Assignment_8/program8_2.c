#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
        return;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;    
        iCount++;
    }

    if(iCount == 1)
    {
        if(iDigit == 1) { printf("One"); }
        else if(iDigit == 2) { printf("Two"); }
        else if(iDigit == 3) { printf("Three"); }
        else if(iDigit == 4) { printf("Four"); }
        else if(iDigit == 5) { printf("Five"); }
        else if(iDigit == 6) { printf("Six"); }
        else if(iDigit == 7) { printf("Seven"); }
        else if(iDigit == 8) { printf("Eight"); }
        else if(iDigit == 9) { printf("Nine"); }
    }
    else 
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}