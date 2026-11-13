#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    for(i = i - 1; i >= 0; i--)
    {
        if(str[i] == ch)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter a Character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is : %d", iRet);

    return 0;
}