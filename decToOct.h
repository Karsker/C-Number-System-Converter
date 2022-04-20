#include <string.h>

int revNum(int num) {
    int rev = 0;
    while (num > 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}

int convToOct_dec(int numDec)
{
    int numOct = 0;
    while (numDec > 0) {
        numOct = (numOct*10) + (numDec%8);
        numDec /= 8;
    }
    return revNum(numOct);
}