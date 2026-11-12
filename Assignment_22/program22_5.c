#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", 2*i);
    }
}

int main()
{
    int iValue1 = 0;
    
    printf("Enter Numbers of Elements : ");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return 0;
}