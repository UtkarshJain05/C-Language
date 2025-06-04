
#include <stdio.h>
#include <string.h>
int main()
{
    char str[40];
    gets(str);   // input of a string
    int count = 0;
    int i = 0;

    // Counting The size of string
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("The Size is : %d", count);

    // Reversing The String.
    i = 0;
    int j = count - 1;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++, j--;
    }
    printf("\n");
    puts(str);   // output of a string.
}