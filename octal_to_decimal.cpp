#include<stdio.h>
#include<math.h>

long int octal_to_decimal(int octal)
{
    int decimal = 0, i = 0;

    while(octal != 0)
    {
        decimal += (octal%10) * pow(8,i); // multiplying with powers of 8
        ++i;
        octal/=10;  // Divide by 10 to make it as decimal
    }

    i = 1;

    return decimal;
}

int main()
{
    int octal;

    printf("\nEnter an octal number: ");
    scanf("%d", &octal);

    printf("\nDecimal Equivalent : %d\n",octal_to_decimal(octal));

    return 0;
}


