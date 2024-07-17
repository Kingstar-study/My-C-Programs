/* Author  : Rizwan
   Problem : Write a C program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter the marks of Subject 1: ");
    scanf("%d", &marks1);
    printf("Enter the marks of Subject 2: ");
    scanf("%d", &marks2);
    printf("Enter the marks of Subject 3: ");
    scanf("%d", &marks3);

    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
    {
        printf("You have passed all indivisual subjects\n");
    }
    else
    {
        printf("You have failed indivisual subject(s)\n");
    }
     int average_marks = (marks1 + marks2 + marks3) / 3; // Calculate average marks

    if (average_marks >= 40)
    {
        printf("You have passed overall\n");
    }
    else
    {
        printf("You have failed overall\n");
    }

    return 0;
     
}