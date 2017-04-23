package ProducerConsumer;

public class ProducerConsumer {
    public void run(){
        IntBuffer b = new IntBuffer();
        Producer p = new Producer(b);
        Consumer c = new Consumer(b);
        p.start();
        c.start();
    }
}
