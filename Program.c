// If the marks obtained by a student in five different subjects are input through the keyboard.
// write a program to find out the aggregate marks and percentage marks obtained by the student. 
// Assume that the maximum marks that can be obtained by a student in each subject is 100.



#include<stdio.h>
#include<conio.h>
int main ()
{
    int m1, m2, m3, m4, m5, aggr;
    float per;
    printf("\n Enter Marks in 5 Subjects : ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    aggr = m1+m2+m3+m4+m5;
    per = aggr/5;
    printf("Aggregate Marks = %d\n", aggr);
    printf("Percentage Marks = %f\n", per);
    return 0;
}
