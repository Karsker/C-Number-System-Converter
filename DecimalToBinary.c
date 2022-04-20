// Convert decimal to binary
#include <stdio.h>

char* convToBinary(int decNum);

int main() {
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    // printf("Reversed number: %d\n", reverse(dec));
    char* binNum = convToBinary(dec);
    printf("%s", binNum);
    // printf("%c", dec + 48);
    return 0;
}

char* convToBinary(int decNum)
{
    static char binNum[9];
    int ind = 7;
    while (decNum > 0) // For adding remainder
    {
        binNum[ind] = (decNum%2) + 48;
        ind--;
        decNum /= 2;
    }
    while (ind >= 0) { // For adding zeroes
        binNum[ind] = '0';
        ind--;
    }
    return binNum;
}