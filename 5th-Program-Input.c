
// Area of a Circle by giving Radius as input.

#include<stdio.h>
int main()
{
    float Radius;
    printf("Enter The Radius : ");
    scanf("%f",&Radius);
    float Area = 3.1415 * Radius * Radius;
    printf("The Area of the Circle = %f Sq.Unit",Area);

return 0;
}   