
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Utkarsh";
    char *ptr = str;
    *ptr = 'S';
    ptr = "Priyanshi";
    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);
}