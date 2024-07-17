/* Author  : Rizwan
   Problem : Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab    Tax
2.5 – 5.0L     5%
5.0L - 10.0L   20%
Above 10.0L    30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.  */

#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    // Taking income input from the user
    printf("Enter your Income: ");
    scanf("%d", &income);

    // Calculating tax based on the income slabs
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = (income - 500000) * 0.2 + (500000 - 250000) * 0.05;
    }
    else
    {
        tax = (income - 1000000) * 0.3 + 500000 * 0.2 + 250000 * 0.05;
    }

    // Displaying the calculated tax
    printf("Your tax is: %.2f\n", tax);

    return 0;
}
