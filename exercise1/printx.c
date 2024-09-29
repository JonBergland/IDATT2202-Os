#include <stdio.h>

int main(int number)
{
    printf("Enter a string: \n");
    char string[100];
    scanf("%s", &string);

    for(int j = 0; j <= number; j++)
    {
        printf("%s \n", string);
    }
    return 0;
}
