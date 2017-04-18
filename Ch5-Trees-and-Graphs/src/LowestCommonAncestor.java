/**
 * PROBLEM
 * Given the value of two nodes in a binary search tree, find the lowest (nearest) common ancestor. You may assume that
 * both values already exist in the tree.
 */
public class LowestCommonAncestor {
    Node findLowestCommonAncestor (Node root, int value1, int value2) {
        while(root != null) {
            int value = root.getValue();
            if (value < value1 && value < value2) {
                root = root.getLeft();
            } else if (value > value1 && value > value2) {
                root = root.getRight();
            } else {
                return root;
            }
        }
        return null;
    }
}
