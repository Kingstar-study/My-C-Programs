/* Author  : Rizwan
   Problem : Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1*/

#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float a = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // -1 + 1
    // 0
    printf("%f");// result = 0.00 because, float
    return 0;
}