/* Author  : Rizwan
   Problem : 2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/

#include <stdio.h>

int main()
{
    int r = 4;
    int height = 6;
    printf("The area of circle is %f\n", 3.1416 * r * r);
    printf("The area of cylinder is %f", 3.1416 * r * r * height);
    return 0;
}