#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iNo = iNo % 10;
        iCount++;
    }

    printf("%d", iCount);
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}