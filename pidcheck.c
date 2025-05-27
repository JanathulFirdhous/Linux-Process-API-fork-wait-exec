C Program to print process ID and parent Process ID using Linux API system calls
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid, ppid;

    pid = getpid();     // Get current process ID
    ppid = getppid();   // Get parent process ID

    printf("Process ID: %d\n", pid);
    printf("Parent Process ID: %d\n", ppid);

    return 0;
}