#include <stdio.h>
#include "decToBin.h"
#include "binToHex.h"
#include "decToHex.h"
#include "decToOct.h"

void decimalConversions();
void binaryToHexadecimal();
void decimalToHexadecimal();
void decimalToOctal();

int main()
{
    int choice;
    printf("Number System Converter\n");
    printf("***********************\n");
    printf("1: Decimal\n");
    printf("2: Binary\n");
    printf("3: Hexadecimal\n");
    printf("4: Octal\n");
    printf("q: Exit");
    printf("\nEnter input method: ");
    scanf("%d", &choice);
    printf("---------------------------\n");
    switch (choice)
    {
    case 1:
        decimalConversions();
        break;
    case 2:
        decimalToHexadecimal();
        break;
    case 3:
        decimalToOctal();
        break;
    case 5:
        binaryToHexadecimal();
        break;
    }
    return 0;
}

void decimalConversions()
{
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    printf("-----------------------\n");
    printf("%d\n", dec);
    printf("Binary: %s\n", convToBinary(dec));
    printf("Hexadecimal: %s\n", convDecToHex(dec));
    printf("Octal: %d\n", convToOct_dec(dec));
}

void binaryToHexadecimal()
{
    char binNum[9];
    printf("Enter binary number: ");
    scanf("%s", &binNum);
    printf("%s --> %s", binNum, convToHex(binNum));
}

void decimalToHexadecimal()
{
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    printf("%s", convDecToHex(dec));
}

void decimalToOctal()
{
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    printf("%d", convToOct_dec(dec));
}