public class BlinkingProgram {
    public static void main(String[] args)
     throws InterruptedException {
        String message = "Hello, World!";
        int delay = 1000; // Delay in milliseconds
        
        while (true) {
            System.out.print("\r" + message);
            Thread.sleep(delay);
            System.out.print("\r" + " ".repeat(message.length()));
            Thread.sleep(delay);
        }
    }
}
