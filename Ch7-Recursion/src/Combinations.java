/**
 * PROBLEM
 * Implement a function that prints all possible combinations of the characters in a string. These combinations range
 * in length from one to the length of the string. Two combinations that differ only in ordering of their characters
 * are the same combination.
 */
public class Combinations {
    private StringBuilder out = new StringBuilder();
    private final String in;

    public Combinations(final String str) {
        in = str;
    }

    public void combine() {
        combine(0);
    }

    private void combine (int start) {
        for (int i=start; i< in.length()-1; ++i) {
            out.append(in.charAt(i));
            System.out.println(out);
            combine(i+1);
            out.setLength(out.length()-1);
        }
        out.append(in.charAt(in.length()-1));
        System.out.println(out);
        out.setLength(out.length()-1);
    }
}
