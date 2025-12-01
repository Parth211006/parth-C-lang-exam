#include <stdio.h>
#include <conio.h>

int main()
{
    char alp;

    printf("Enter an alphabet: ");
    scanf(" %c", &alp);

    alp = (alp);

    switch (alp)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The character '%c' is a VOWEL.\n", alp);
        break;

    default:
        if (alp >= 'a' && alp <= 'z')
        {
            printf("The character '%c' is a porositive.\n", alp);
        }
        else
        {
            printf("'%c' is NOT an alphabet (constant).\n", alp);
        }
        break;
    }

    return 0;
}