
/*
Ques. 2 --> Calculate the Percentage % CGPA of Utkarsh Jain in
            12th Standard from given data of 5 Subjects Marks. 
*/

#include<stdio.h>
int main()
{
    float M1 = 90;  // English Marks.
    float M2 = 91;  // Physics Marks.
    float M3 = 84;  // Chemistry Marks.
    float M4 = 95;  // Maths Marks.
    float M5 = 91;  // Physical Education Marks.
    
    float P = (M1 + M2 + M3 + M4 + M5) / 500 * 100;
    float CGPA = P / 9.5;

printf("The Percentage of Utkarsh Jain in 12th Standard : %f\n",P);
printf("The CGPA of Utkarsh Jain in 12th Standard : %f.\n",CGPA);

return 0;
}