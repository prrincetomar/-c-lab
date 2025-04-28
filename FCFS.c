// shortest job first method
#include <stdio.h>

void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0;  
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
}

void findTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
   
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n];
    float total_wt = 0, total_tat = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }
    findWaitingTime(processes, n, bt, wt);
    findTurnaroundTime(processes, n, bt, wt, tat);
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }
    float avg_wt = total_wt / n;
    float avg_tat = total_tat / n;
    printf("\nAverage Waiting Time: %.2f", avg_wt);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n], burst_time[n];
    printf("Enter burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        processes[i] = i + 1;
        scanf("%d", &burst_time[i]);
    }
    findAvgTime(processes, n, burst_time);

    return 0;
}
