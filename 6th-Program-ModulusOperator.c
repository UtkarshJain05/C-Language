
// Modulus Operator (%) :-

/*When written x%y then this means that when x  is divided by y (x/y)
 then {x%y = Remainder of x/y}.*/

// In Hierarchy of operators--> Modulus will come with the same level of Division & Multiplication.

// Modulus Operator majorly used for divisiblity Test.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter The Value of a & b : ");
    scanf("%d %d", &a, &b);
    int Modulus = a % b;
    printf("The Remainder of %d/%d = %d", a, b, Modulus);

    return 0;
}
