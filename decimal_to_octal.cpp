#include <stdio.h>
#include <math.h>

int decimal_to_octal(int decimal);
int main()
{
    int decimal;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    printf("\nEquivalent octal number : %d\n", decimal_to_octal(decimal));

    return 0;
}

int decimal_to_octal(int decimal)
{
    int octal = 0, i = 1;

    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}
