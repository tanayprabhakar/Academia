// This class would cause a compilation error because Logger is final
// public class ExtendedLogger extends Logger {
//     public void logMessageWithTimestamp(String message) {
//         System.out.println("LOG [" + System.currentTimeMillis() + "]: " + message);
//     }
// }