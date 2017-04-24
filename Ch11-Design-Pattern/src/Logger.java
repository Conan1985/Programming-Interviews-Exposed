/**
 * PROBLEM
 * Your application uses a logging class to write debugging messages to the console. How would you implement this
 * logging facility using hte Singleton pattern?
 */

/** PROBLEM
 * Your application uses a singleton, but it's not always necessary, and it's expensive to initialize. How can you
 * improve this situation?
 */

import org.jetbrains.annotations.Contract;

// Implements a simple logging class using a singleton.
public class Logger {
    // Inner class initializes instance on load, won't be loaded
    // until referenced by getInstance()
    private static class LoggerHolder {
        public static final Logger instance = new Logger();
    }
    // Prevent anyone else from creating this class.
    private Logger(){
    }
    // Return the singleton instance.
    public static Logger getInstance() {
        return LoggerHolder.instance;
    }
    // Log a string to the console.
    //
    // example: Logger.getInsurance().log("this is a test");
    //
    public void log (String msg) {
        System.out.println(System.currentTimeMillis() + ": " + msg);
    }
}