/**
 * PROBLEM
 * Write a function that determines the number of 1 bits in the binary representation of a given integer.
 */
public class NumberOfOnes {
    int numOnesBinary (int number) {
        int numOnes = 0;
        while (number != 0) {
            number = number & (number - 1);
            numOnes++;
        }
        return numOnes;
    }
}
