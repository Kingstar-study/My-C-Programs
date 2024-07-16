/* Author : Rizwan
Problem : Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.*/

#include <stdio.h>

int main()
{
    int height, weight;
    // int height=4, weight=5;
    printf("Enter Height and Weight: ");
    scanf("%d %d", &height, &weight);
    printf("The area of rectangle is %d", height * weight);
    return 0;
}