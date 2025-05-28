public class Car {
    class Engine {
        void start() 
        { 
            System.out.println("Engine started"); 
        }
        void stop() 
        { 
            System.out.println("Engine stopped"); 
        }
    }

    void drive() {
        Engine engine = new Engine();
        engine.start();
        engine.stop();
    }

    public static void main(String[] args) {
        Car car = new Car();
        car.drive();
    }
}