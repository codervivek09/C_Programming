#include<stdio.h>

void Reverse(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    char *ptr = str;

    while (*ptr != '\0')
    {
        end++;
        ptr++;
    }

    end--;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s", str);
    
}

int main()
{
    char arr[20];

    printf("Enter a String : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}