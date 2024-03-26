import java.util.concurrent.Semaphore;

//In this  code, each philosopher is represented by a separate thread. They think for a random amount of time, then try to pick up the left and right forks (semaphores) to eat. If both forks are available, the philosopher eats for a random amount of time and releases the forks. The code prevents deadlocks by using semaphores to control the access to forks
//


class Philosopher extends Thread {
    private int philosopherId;
    private Semaphore leftFork;
    private Semaphore rightFork;

    public Philosopher(int id, Semaphore leftFork, Semaphore rightFork) {
        this.philosopherId = id;
        this.leftFork = leftFork;
        this.rightFork = rightFork;
    }

    @Override
    public void run() {
        while (true) {
            think();
            try {
                leftFork.acquire();
                System.out.println("Philosopher " + philosopherId + " picked up the left fork.");
                rightFork.acquire();
                System.out.println("Philosopher " + philosopherId + " picked up the right fork and is now eating.");
                eat();
                rightFork.release();
                System.out.println("Philosopher " + philosopherId + " put down the right fork.");
                leftFork.release();
                System.out.println("Philosopher " + philosopherId + " put down the left fork.");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    private void think() {
        System.out.println("Philosopher " + philosopherId + " is thinking.");
        try {
            Thread.sleep((long) (Math.random() * 1000));
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    private void eat() {
        System.out.println("Philosopher " + philosopherId + " is eating.");
        try {
            Thread.sleep((long) (Math.random() * 1000));
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
class DinigPhiloshoper{
    public static void main(String[] args) {
        int numPhilosophers = 5;
        Philosopher[] philosophers = new Philosopher[numPhilosophers];
        Semaphore[] forks = new Semaphore[numPhilosophers];

        for (int i = 0; i < numPhilosophers; i++) {
            forks[i] = new Semaphore(1);
        }

        for (int i = 0; i < numPhilosophers; i++) {
            philosophers[i] = new Philosopher(i, forks[i], forks[(i + 1) % numPhilosophers]);
            philosophers[i].start();
        }
    }
}
