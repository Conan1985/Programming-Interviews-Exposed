/**
 * PROBLEM
 * Implement a routine that prints all possible orderings of the characters in a string. In other words, print all
 * permutations that use all the characters from the original string.
 */
public class Permutations {
    private boolean[] used;
    private StringBuffer out = new StringBuffer();
    private final String in;

    public Permutations (final String str) {
        in = str;
        used = new boolean[in.length()];
    }
    
    private void permute() {
        if (out.length() == in.length()) {
            System.out.println(out);
            return;
        }
        for (int i =0; i<in.length(); ++i) {
            if (used[i]) continue;
            out.append(in.charAt(i));
            used[i] = true;
            permute();
            used[i] = false;
            out.setLength(out.length()-1);
        }
    }
}
