#include<stdio.h>

void strlwrx(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified String : %s ", arr);

    return 0;
}

