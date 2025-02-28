#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void main() {
    pid_t pid;
    pid = getpid();
    printf("before fork %d\n", pid);
    pid = fork();

    if (pid == 0)
        printf("\nThis line is from child,\nThe child process id %d\n", getpid());
    else if (pid > 0)
        printf("This line is from parent, value = %d\n", pid);
    else {
        printf("\nFork failed");
        exit(1);
    }

    if (pid == 0) {
        execl("/bin/ls", "ls", "-l", (char *)0);
    }

    if (pid > 0) {
        wait((int *)0);
    }
}

