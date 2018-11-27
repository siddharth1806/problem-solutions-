#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j;
    char str[80];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    j = strlen(str) - 1;

    while (j)
    {
        if ( str[i++] != str[j--] )
        {
            printf("%s is not a palindrome\n", str);
            return 1;
        }
    }

    printf("%s is a palindrome\n", str);

    return 0;
}