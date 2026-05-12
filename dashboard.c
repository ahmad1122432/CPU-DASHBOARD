#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void clear_screen() {
    // Clear the console screen
    system("clear"); // For Unix/Linux systems
    // system("cls"); // For Windows systems
}

int main()
{
    int cpu_usage = 0;
    int memory_usage = 0;
    int processes =5;

    while(1)
    {
        clear_screen();
        cpu_usage = rand() % 100; // Simulate CPU usage between 0-99%
        memory_usage = rand() % 100; // Simulate Memory usage between 0-99%
        processes = rand() % 20; // Simulate number of processes between 1-19

        printf("==============================\n");
        printf("   System Dashboard\n");
        printf("==============================\n");
        printf("CPU Usage: %d%%\n", cpu_usage);
        printf("Memory Usage: %d%%\n", memory_usage);
        printf("Running Processes: %d\n", processes);
        printf("==============================\n");
        sleep(1); // Update every 1 seconds

    }
    return 0;
}