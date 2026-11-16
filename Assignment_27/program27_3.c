#include<stdio.h>

int Difference(char *str)
{
    int SmallChar = 0, CapChar = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str<= 'z')
        {
            SmallChar++;
        }
        else if (*str >= 'A' && *str<= 'Z')
        {
            CapChar++;
        }

        str++;
    }
    
    int Diff = SmallChar - CapChar;

    if(Diff < 0)
    {
        Diff = -Diff;
    }

    return Diff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}