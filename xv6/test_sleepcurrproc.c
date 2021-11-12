#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "Process Id: %d\n", getpid());
    printf(1, "Real Parent Process Id: %d\n", get_parent_id());
    for (int c = 0; c < 3; c++)
        sleep(1000);
    printf(1, "Real Parent Process Id After wake up: %d\n", get_parent_id());
}