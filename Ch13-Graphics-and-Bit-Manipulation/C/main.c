/*
 * PROBLEM
 * Write a C function that determines whether a computer is big-endian or
 * little-endian.
 */

#include <stdbool.h>

bool isLittleEndian() {
    union {
        int theInteger;
        char singleByte;
    } endianTest;
    endianTest.theInteger = 1;
    return endianTest.singleByte;
}

int main() {
    return 0;
}