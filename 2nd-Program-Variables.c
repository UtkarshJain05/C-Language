
#include<stdio.h>
int main()
{
int x;                 //Declaration.

x = 5;                 //Initialisation.
printf("x\n");         //will print the character 'x'.
printf("%d\n",x);      // '%d' is used for integers.

x = 7;                 // Updating 'x' value.
printf("%d\n",x);      // 'x' updated value will be printed.

x = x + 6;             // updating 'x' value using its previous value.
printf("%d\n",x);

x = x - 20;
printf("%d\n",x);

return 0;
}