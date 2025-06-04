
// Ques 8. --> Solve The Expression 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8.

#include<stdio.h>
int main(){
    
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
    printf("\n\nGiven Expression = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8\n");
    printf("The Answer Of the Expression = %d\n\n",i);

return 0;
}

/* So here's the Stepwise Solution:-
   Step 1 --> 2 * 3 = 6 --> 6/4 = 1 (Integer)
   Step 2 --> 4 / 4 = 1
   Step 3 --> 5 / 8 = 0 (Integer)
   Step 4 --> 1 + 1 + 8 - 2 + 0 = 8. */

   // Here BODMAS Applies but id defined as --> (B | O | D/M/%(Modulus) | A/S).