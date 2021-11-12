#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Current Process Id: %d\n", getpid());
    int num = atoi(argv[1]);
    asm("movl %0, %%ebx;"
        :
        : "r"(num));
    printf(1, "childproc->trace_parent->pid: %d\n", setprocparent(num));
    exit();
}