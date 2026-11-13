#include<stdio.h>

void StrRevX(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (str[j] != '\0')
    {
        j++;
    }

    j-=1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified String is : %s", arr);

    return 0;
}