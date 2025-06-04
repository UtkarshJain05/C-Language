
/* Ques. 3 --> Calculate Simple Interest (SI) if Principle (P),
               Rate of Interest (R) & Time (T) is given. */ 

#include<stdio.h>
int main()
{
    float P,R,T; // 3 Variables in declared in 1 line.
    printf("Enter The Priciple Amount : ");
    scanf("%f",&P);
    printf("Enter The Rate Of Interest : ");
    scanf("%f",&R);
    printf("Enter The Time Duration : ");
    scanf("%f",&T);

    float SI = P * R * T / 100;  // We know that SI = PRT / 100.
    
    printf("The Simple Interest for given Data = %f\n",SI);
    printf("The Matured Amount = %f", SI+P);

return 0;
}