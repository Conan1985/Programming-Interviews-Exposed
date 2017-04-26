/**
 * PROBLEM
 * Write a function that determines the number of 1 bits in the binary representation of a given integer.
 */
public class NumberOfOnes {
    int numOnesBinary (int number) {
        int numOnes = 0;
        while (number != 0) {
            if ((number & 1) == 1) {
                numOnes ++;
            }
            number = number >>> 1;
        }
        return numOnes;
    }
}
