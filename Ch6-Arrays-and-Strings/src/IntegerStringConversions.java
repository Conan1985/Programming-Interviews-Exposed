import org.jetbrains.annotations.NotNull;

/**
 * PROBLEM
 * Write two conversion routines. The first routine converts a string to a signed integer. You may assume that the
 * string contains only digits and the minus character ('-'), that it is a properly formatted integer number, and that
 * the number is within the range of an int type. The second routine converts a signed integer stored as an int back to
 * a string.
 */
public class IntegerStringConversions {

    public static int strToInt (String str) {
        int sum=0, i=0;
        final int len = str.length();
        boolean isNeg = false;
        if (str.charAt(0) == '-') {
            isNeg = true;
            i=1;
        }
        while (i<len) {
            sum *= 10;
            sum += (str.charAt(i) - '0');
        }
        if (isNeg)
            sum = -sum;
        return sum;
    }

    private static final int MAX_DIGITS = 10;
    @NotNull
    public static String intToStr (int num) {
        int i = 0;
        boolean isNeg = false;
        /* Buffer big enough for largest int and - sign */
        char[] temp = new char[ MAX_DIGITS +1 ];
        /* Check to see if the number is negative */
        if (num < 0) {
            num = -num;
            isNeg = true;
        }

        /* Fill buffer with digit characters in reverse order */
        do {
            temp[i++] = (char) ((num%10) + '0');
            num /= 10;
        } while (num != 0);
        StringBuilder b = new StringBuilder();
        if (isNeg)
            b.append('-');
        while (i>0){
            b.append(temp[--i]);
        }
        return b.toString();
    }

}
