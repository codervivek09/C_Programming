#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("Your Exam at 7 AM");
    }
    else if(chDiv == 'b' || chDiv == 'B')
    {
        printf("Your Exam at 8:30 AM");
    }
    else if(chDiv == 'c' || chDiv == 'C')
    {
        printf("Your Exam at 9:20 AM");
    }
    else if(chDiv == 'd' || chDiv == 'D')
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}