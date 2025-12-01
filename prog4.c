#include <stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    int i;

    p = arr; 

    printf("Square of array element:\n");

    for (i = 0; i < 5; i++) 
    {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }
    
    return 0;
}

