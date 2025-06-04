
// Ques 6. --> Take Integer as input and print Half of the Number.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter The Integer Value : ");
    scanf("%d",&x);
    float y = x;  // Tyepcasting.
    printf("The Half of the Input Value = %f",y/2);

return 0;
}

// This is How Typecasting is done in C language.
// Note : Only Implicit Typecasting Takes place in C language.