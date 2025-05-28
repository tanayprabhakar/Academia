interface EventHandler {
    void handleEvent();
}

public class EventDemo {
    void registerEvent() {
        class LocalHandler implements EventHandler {
            public void handleEvent() {
                System.out.println("Event handled by local inner class");
            }
        }
        new LocalHandler().handleEvent();
    }

    public static void main(String[] args) {
        EventDemo demo = new EventDemo();
        demo.registerEvent();

        EventHandler anonymous = new EventHandler() {
            public void handleEvent() {
                System.out.println("Event handled by anonymous inner class");
            }
        };
        anonymous.handleEvent();
    }
}