/**
 * Created by youweilu on 4/10/17.
 */
public class LowestCommonAncestor {
    Node findLowestCommanAncestor (Node root, int value1, int value2) {
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
