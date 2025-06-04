
#include<stdio.h>
int main()
{
    float x = 3;
    float y = 2;
    printf("%f\n",x);  // '%f' is used for real numbers.
    printf("%f\n",y);

    float z = 5/2;
    printf("%f\n",z);
/* 
    To show float value we need to add decimal in one of the 
    integer number of an expression.
    Example : float a = 5.0 / 2. 
    
    This only need to be done if directly numbers 
    (instead of variables) are need to be operated.
*/
    float w = 5.0/2;
    printf("%f\n",w);

    float v = 3;
    printf("%f",v/y);

return 0;
}
