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