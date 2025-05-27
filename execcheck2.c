//C Program to execute Linux system commands using Linux API system calls exec() family
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("Before executing ls -l\n");

    // execl(path, arg0, arg1, ..., NULL)
    execl("/bin/ls", "ls", "-l", NULL);

    // If execl() is successful, the lines below won't execute
    perror("execl failed");
    exit(1);
}