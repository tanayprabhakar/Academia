public class TestLogger {
    public static void main(String[] args) {
        Logger logger = new Logger();
        logger.logMessage("This is a test message");
        
        System.out.println("Note: Cannot extend Logger class because it is declared as final");
        // The following would cause a compilation error
        // ExtendedLogger extendedLogger = new ExtendedLogger();
    }
}