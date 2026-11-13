#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chkchar(char *str, char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;
        }
        
        i++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL Bret = FALSE;

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter a Character : ");
    scanf(" %c", &cValue);

    Bret = Chkchar(arr, cValue);

    if(Bret == TRUE)
    {
        printf("Character Found");
    }
    else 
    {
        printf("Character not Found");
    }

    return 0;
}