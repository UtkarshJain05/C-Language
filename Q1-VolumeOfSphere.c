
// Ques. 1 --> Find The Volume of Sphere if given it's Radius (R).

#include<stdio.h>
int main()
{
    float R = 7;
    float pi = 3.1415;
    float V = 4 * pi * R * R * R / 3;  // pi = 3.1415
    printf("The Volume Of Sphere : %f\n",V); // Answer.
return 0;
}

/*
NOTE : 
1. If we write '4/3' then answer will be '1' instead of '1.33'
   Because 4 & 3 both are integers.
2. If need to update the Value of R then R(updated value) and V 
   both need to be written again.
*/