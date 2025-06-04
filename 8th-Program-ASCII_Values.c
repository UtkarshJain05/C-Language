
// ASCII Values

/*
ASCII values are the specific INTEGER values given to the charcters as 
their integer values.

SOME ASCII Values:-
'0' = 48  --> '9' = 57
'A' = 65  --> 'Z' = 90
'a' = 97  --> 'z' = 122
*/


// Program For Finding The ASCII Values For Entered Character / Symbol :

#include<stdio.h>
int main(){
    char ch;
    printf("Enter The Character : ");
    scanf("%c",&ch);
    printf("The ASCII Values of '%c' = %d", ch,ch);
return 0;   
}


// Program For Finding the Symbol By Entering ASCII Values :

#include<stdio.h>
int main(){
    int x;
    printf("Enter The ASCII Value : ");
    scanf("%d",&x);
    printf("The Symbol for ASCII Value '%d' = %c", x,x);
return 0;
}