#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount++;
        }
        
        i++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character Frequency is : %d", iRet);

    return 0;
}