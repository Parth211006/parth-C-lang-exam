#include <stdio.h>

int reverseString(char str[]) 
{
    int i, length = 0;

    while (str[length] != '\0') 
    {
        length++;
    }

    for (i = 0; i < length / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}