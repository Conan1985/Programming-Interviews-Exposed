/**
 * PROBLEM
 * Your application uses a logging class to write debugging messages to the console. How would you implement this
 * logging facility using hte Singleton pattern?
 */

import org.jetbrains.annotations.Contract;

// Implements a simple logging class using a singleton.
public class Logger {
    // Create and store the singleton.
    private static final Logger instance = new Logger();
    // Prevent anyone else from creating this class.
    private Logger(){
    }
    // Return the singleton instance.
    @Contract(pure = true)
    public static Logger getInstance() {
        return instance;
    }
    // Log a string to the console.
    //
    // example: Logger.getInsurance().log("this is a test");
    //
    public void log (String msg) {
        System.out.println(System.currentTimeMillis() + ": " + msg);
    }
}
