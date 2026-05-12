# CPU-DASHBOARD
This is a simple CPU dashboard implemented in C. It simulates CPU usage, memory usage, and the number of processes running on the system. The dashboard updates every second to provide real-time information.
## Features
- Simulates CPU usage between 0-99%
- Simulates Memory usage between 0-99%
- Simulates the number of processes between 1-19
- Clears the console screen before each update for a clean display
## Usage
1. Compile the code using a C compiler:
```bash
gcc dashboard.c -o dashboard
```
2. Run the compiled program:
```bash./dashboard
```

3. The dashboard will display the simulated CPU usage, memory usage, and the number of processes, updating every second.
## Note
- The `system("clear")` command is used to clear the console screen on Unix-based systems. If you are using Windows, you may need to replace it with `system("cls"), but this code is currently set up for Unix-based systems.
