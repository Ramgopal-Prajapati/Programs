import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class Process {
    int processId;
    int burstTime;

    public Process(int processId, int burstTime) {
        this.processId = processId;
        this.burstTime = burstTime;
    }
}
class SJFScheduling{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Process> processes = new ArrayList<>();
        int n;

        System.out.print("Enter the number of processes: ");
        n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.println("Enter details for process " + (i + 1));
            System.out.print("Burst Time: ");
            int burstTime = scanner.nextInt();
            processes.add(new Process(i + 1, burstTime));
        }

        // Sort processes by burst time (shortest job first)
        Collections.sort(processes, new Comparator<Process>() {
            @Override
            public int compare(Process p1, Process p2) {
                return p1.burstTime - p2.burstTime;
            }
        });

        int currentTime = 0;
        double totalWaitingTime = 0;
        double totalTurnaroundTime = 0;

        System.out.println("Process execution order:");
        for (Process process : processes) {
            System.out.println("Process " + process.processId + " is executing.");
            totalWaitingTime += currentTime;
            totalTurnaroundTime += currentTime + process.burstTime;
            currentTime += process.burstTime;
        }

        double avgWaitingTime = totalWaitingTime / n;
        double avgTurnaroundTime = totalTurnaroundTime / n;

        System.out.println("Average Waiting Time: " + avgWaitingTime);
        System.out.println("Average Turnaround Time: " + avgTurnaroundTime);
    }
}
