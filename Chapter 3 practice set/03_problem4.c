/* Author  : Rizwan
   Problem : Write a program to determine whether a character entered by the user is
lowercase or not. */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }
    return 0;
}