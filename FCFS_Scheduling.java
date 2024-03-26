import java.util.ArrayList;
import java.util.Scanner;

class Process {
    int processId;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;

    public Process(int processId, int arrivalTime, int burstTime) {
        this.processId = processId;
        this.arrivalTime = arrivalTime;
        this.burstTime = burstTime;
    }
}
class FCFS_Scheduling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Process> processes = new ArrayList<>();
        int n;

        System.out.print("Enter the number of processes: ");
        n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for process " + (i + 1));
            System.out.print("Process ID: ");
            int processId = scanner.nextInt();
            System.out.print("Arrival Time: ");
            int arrivalTime = scanner.nextInt();
            System.out.print("Burst Time: ");
            int burstTime = scanner.nextInt();
            processes.add(new Process(processId, arrivalTime, burstTime));
        }

        int currentTime = 0;
        double totalWaitingTime = 0;
        double totalTurnaroundTime = 0;

        for (Process process : processes) {
            if (process.arrivalTime > currentTime) {
                currentTime = process.arrivalTime;
            }

            process.waitingTime = currentTime - process.arrivalTime;
            process.turnaroundTime = process.waitingTime + process.burstTime;

            totalWaitingTime += process.waitingTime;
            totalTurnaroundTime += process.turnaroundTime;

            System.out.println("Process " + process.processId + " is executing.");
            currentTime += process.burstTime;
        }

        double avgWaitingTime = totalWaitingTime / n;
        double avgTurnaroundTime = totalTurnaroundTime / n;

        System.out.println("Average Waiting Time: " + avgWaitingTime);
        System.out.println("Average Turnaround Time: " + avgTurnaroundTime);
    }
}
