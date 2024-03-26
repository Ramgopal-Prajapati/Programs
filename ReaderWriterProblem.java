import java.util.concurrent.Semaphore;

class ReaderWriter {
    private int readers = 0;
    private Semaphore mutex = new Semaphore(1);
    private Semaphore wrt = new Semaphore(1);

    public void startReading(int readerId) throws InterruptedException {
        mutex.acquire();
        readers++;
        if (readers == 1) {
            wrt.acquire();
        }
        mutex.release();

        System.out.println("Reader " + readerId + " is reading.");

        mutex.acquire();
        readers--;
        if (readers == 0) {
            wrt.release();
        }
        mutex.release();
    }

    public void startWriting(int writerId) throws InterruptedException {
        wrt.acquire();
        System.out.println("Writer " + writerId + " is writing.");
        wrt.release();
    }
}

class ReaderThread extends Thread {
    private ReaderWriter rw;
    private int readerId;

    public ReaderThread(ReaderWriter rw, int readerId) {
        this.rw = rw;
        this.readerId = readerId;
    }

    @Override
    public void run() {
        try {
            for (int i = 0; i < 5; i++) { // Change the number of iterations as needed
                rw.startReading(readerId);
                Thread.sleep((long) (Math.random() * 1000));
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class WriterThread extends Thread {
    private ReaderWriter rw;
    private int writerId;

    public WriterThread(ReaderWriter rw, int writerId) {
        this.rw = rw;
        this.writerId = writerId;
    }

    @Override
    public void run() {
        try {
            for (int i = 0; i < 5; i++) { // Change the number of iterations as needed
                rw.startWriting(writerId);
                Thread.sleep((long) (Math.random() * 1000));
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
class ReaderWriterProblem {
    public static void main(String[] args) {
        int numReaders = 5;
        int numWriters = 2;
        ReaderWriter rw = new ReaderWriter();

        for (int i = 0; i < numReaders; i++) {
            new ReaderThread(rw, i).start();
        }

        for (int i = 0; i < numWriters; i++) {
            new WriterThread(rw, i).start();
        }
    }
}
