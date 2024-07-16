/* Author  : Rizwan
   Problem : Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.*/

#include <stdio.h>

int main()
{
    float P = 500, R = .5, T = 150;
    printf("The simple interest is :%f ", (P * R * T) / 100);
    return 0;
}