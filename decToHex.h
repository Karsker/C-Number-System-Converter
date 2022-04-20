#include <string.h>
/*
Decimal to Hexadecimal Table
A --> 10
B --> 11
C --> 12
D --> 13
E --> 14
F --> 15
*/
char findHexVal_dec(int n) {
    switch (n) {
        case 1:
            return '1';
        case 2:
            return '2';
        case 3:
            return '3';
        case 4:
            return '4';
        case 5:
            return '5';
        case 6:
            return '6';
        case 7:
            return '7';
        case 8:
            return '8';
        case 9:
            return '9';
        case 10:
            return 'A';
        case 11:
            return 'B';
        case 12:
            return 'C';
        case 13:
            return 'D';
        case 14:
            return 'E';
        case 15:
            return 'F';
        default:
            return 'P';     
    }
}
char *convDecToHex(int numDec)
{
    static char numHex[9];
    int ind = 0;
    numHex[8] = '\0';
    while (numDec > 0)
    {
        numHex[ind] = findHexVal_dec(numDec%16);
        numDec /= 16;
        ind++;
    }
    strrev(numHex);
    return numHex;
}