/**
 * PROBLEM
 * You are given two rectangles, each defined by an upper-left (UL) corner and a lower-right (LR) corner. Both
 * rectangles' edges will always be parallel to the x or y axis. Write a function that determines whether the two
 * rectangles overlap.
 * The function should take two Rect objects and return true if they overlap, and false if they don't.
 */
public class RectangleOverlap {
    class Point {
        private int x;
        private int y;
        public Point (int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    class Rect {
        private Point ul;
        private Point lr;
        public Rect (Point ul, Point lr) {
            this.ul = ul;
            this.lr = lr;
        }
    }

    boolean overlap (Rect a, Rect b) {
        return (a.ul.x <= b.lr.x && a.ul.y >= b.lr.y && a.lr.x >= b.ul.x && a.lr.y <= b.ul.y);
    }
}
