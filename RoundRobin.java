import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Scanner;

class Process {
    int processId;
    int burstTime;
    int remainingTime;
    int arrivalTime;

    public Process(int processId, int burstTime, int arrivalTime) {
        this.processId = processId;
        this.burstTime = burstTime;
        this.remainingTime = burstTime;
        this.arrivalTime = arrivalTime;
    }
}
class RoundRobin{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Queue<Process> readyQueue = new ArrayDeque<>();
        int n, timeQuantum;

        System.out.print("Enter the number of processes: ");
        n = scanner.nextInt();
        System.out.print("Enter the time quantum: ");
        timeQuantum = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for process " + (i + 1));
            System.out.print("Burst Time: ");
            int burstTime = scanner.nextInt();
            System.out.print("Arrival Time: ");
            int arrivalTime = scanner.nextInt();
            readyQueue.add(new Process(i + 1, burstTime, arrivalTime));
        }

        int currentTime = 0;
        double totalWaitingTime = 0;
        double totalTurnaroundTime = 0;

        while (!readyQueue.isEmpty()) {
            Process currentProcess = readyQueue.poll();
            if (currentProcess.arrivalTime > currentTime) {
                // If the process hasn't arrived yet, wait for it
                currentTime = currentProcess.arrivalTime;
            }

            if (currentProcess.remainingTime <= timeQuantum) {
                // Process completes execution
                currentTime += currentProcess.remainingTime;
                currentProcess.remainingTime = 0;
                totalTurnaroundTime += currentTime - currentProcess.arrivalTime;
                totalWaitingTime += currentTime - currentProcess.arrivalTime - currentProcess.burstTime;
            } else {
                // Process still has remaining time
                currentTime += timeQuantum;
                currentProcess.remainingTime -= timeQuantum;
                readyQueue.add(currentProcess);
            }
        }

        double avgWaitingTime = totalWaitingTime / n;
        double avgTurnaroundTime = totalTurnaroundTime / n;

        System.out.println("Average Waiting Time: " + avgWaitingTime);
        System.out.println("Average Turnaround Time: " + avgTurnaroundTime);
    }
}
