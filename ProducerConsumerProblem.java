import java.util.LinkedList;

class Buffer {
    private LinkedList<Integer> buffer;
    private int capacity;

    public Buffer(int capacity) {
        this.capacity = capacity;
        buffer = new LinkedList<>();
    }

    public void produce(int item) throws InterruptedException {
        synchronized (this) {
            while (buffer.size() == capacity) {
                wait();
            }
            System.out.println("Producer produced: " + item);
            buffer.add(item);
            notifyAll();
        }
    }

    public int consume() throws InterruptedException {
        synchronized (this) {
            while (buffer.isEmpty()) {
                wait();
            }
            int item = buffer.remove();
            System.out.println("Consumer consumed: " + item);
            notifyAll();
            return item;
        }
    }
}

class Producer extends Thread {
    private Buffer buffer;

    public Producer(Buffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            try {
                buffer.produce(i);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class Consumer extends Thread {
    private Buffer buffer;

    public Consumer(Buffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        for (int i = 1; i <= 5; i++) {
            try {
                int item = buffer.consume();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
class ProducerConsumerProblem {
    public static void main(String[] args) {
        Buffer buffer = new Buffer(2);
        Producer producer = new Producer(buffer);
        Consumer consumer = new Consumer(buffer);

        producer.start();
        consumer.start();
    }
}
