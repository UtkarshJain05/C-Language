
// Ques 7. --> Take Float Input & print The Fractional part of the real (Decimal) Number. 

#include<stdio.h>
int main(){
    float x;
    printf("Enter The Decimal Number : ");
    scanf("%f",&x);
    printf("\n");
    
    printf("The Input Value = %f\n",x); // Just for Understanding. 
    
    int y = x;     // Typecasting to convert the float value of x in integer datatype as y.
    printf("The Integer Value of Input Decimal Number = %d\n",y); 
    
    float y2 = y;  // Typecasting to convert the integer value of y in float datatype as y2.
      
      /* Also Above step is done so that subtraction can be done between float values. 
         But This step can be neglected also as Operations can be done between Integer and 
         Float also in VS Code. */
    
    float z = x-y2;  // Subtracting The Decimal Number with it's Integer Value. 
    printf("The Fractional Part of the Decimal Number = %f\n",z);

return 0;
}