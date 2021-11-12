#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Parent Process Id: %d\n", get_parent_id());
    printf(1, "Current Process Id: %d\n", getpid());
    if (fork() == 0)
    {
        printf(1, "Forked\n");
        printf(1, "Parent Process Id: %d\n", get_parent_id());
    }
    else
    {
        wait();
    }
    exit();
}