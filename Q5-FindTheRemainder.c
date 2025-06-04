
/* Ques. 5 --> Take two integers input a & b : a>b, and find
               the remainder when a is divisible by b.
               {Without using Modulus Operator.}
               [Hint : Divident = Quotient * Divisor + Remainder] */

              
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The Value of a : ");
    scanf("%d",&a);
    printf("Enter The Value of b : ");
    scanf("%d",&b);
    int Remainder = a - ((a/b) * b);
    printf("The Remainder when %d is divided by %d = %d", a,b,Remainder);

return 0;
}