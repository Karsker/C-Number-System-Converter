#include <stdio.h>
#include <string.h>

char* convToHex(char *numBin);
char findHexVal(char *binSeg);

int main()
{
    char binNum[9];
    scanf("%s", &binNum);
    printf("%s", convToHex(binNum));
    return 0;
}

char* convToHex(char *numBin)
{
    char partA[5];
    char partB[5];
    static char hexNum[5];
    hexNum[0] = '0';
    hexNum[1] = 'x';
    hexNum[4] = '\0';
    partA[4] = '\0';
    partB[4] = '\0';
    for (int i = 0; i < 4; i++) {
        partA[i] = numBin[i];
    }
    for (int j = 4; j < 8; j++) {
        partB[j-4] = numBin[j];
    }
    hexNum[2] = findHexVal(partA);
    hexNum[3] = findHexVal(partB);
    return hexNum;
}

char findHexVal(char *binSeg) {
    if (!strcmp(binSeg, "0000")) {
        return '0';
    }
    else if (!strcmp(binSeg, "0001")) {
        return '1';
    }
    else if (!strcmp(binSeg, "0010")) {
        return '2';
    }
    else if (!strcmp(binSeg, "0011")) {
        return '3';
    }
    else if (!strcmp(binSeg, "0100")) {
        return '4';
    }
    else if (!strcmp(binSeg, "0101")) {
        return '5';
    }
    else if (!strcmp(binSeg, "0110")) {
        return '6';
    }
    else if (!strcmp(binSeg, "0111")) {
        return '7';
    }
    else if (!strcmp(binSeg, "1000")) {
        return '8';
    }
    else if (!strcmp(binSeg, "1001")) {
        return '9';
    }
    else if (!strcmp(binSeg, "1010")) {
        return 'A';
    }
    else if (!strcmp(binSeg, "1011")) {
        return 'B';
    }
    else if (!strcmp(binSeg, "1100")) {
        return 'C';
    }
    else if (!strcmp(binSeg, "1101")) {
        return 'D';
    }
    else if (!strcmp(binSeg, "1110")) {
        return 'E';
    } 
    else if (!strcmp(binSeg, "1111")) {
        return 'F';
    }
}