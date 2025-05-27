//C Program to create new process using Linux API system calls fork() and exit()
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork();  // Create a new process

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        exit(1);
    } else if (pid == 0) {
        // Child process
        printf("Child Process:\n");
        printf("  PID: %d\n", getpid());
        printf("  Parent PID: %d\n", getppid());
        exit(0);  // Child exits
    } else {
        // Parent process
        printf("Parent Process:\n");
        printf("  PID: %d\n", getpid());
        printf("  Child PID: %d\n", pid);
        exit(0);  // Parent exits
    }
}