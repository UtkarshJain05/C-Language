
// Ques. 4 --> Print Multiple variable using one printf % one scanf. 

#include<stdio.h>
int main(){

    int P,Q;
    printf("Enter The Value of P & Q : ");
    scanf("%d %d", &P, &Q);  // This is how we can give two variable values.
    
    printf(" The Value of P = %d & Q = = %d", P,Q);

return 0;
}