#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    asm ("movl %0, %%ebx;" 
     :
     :"r"(num)
     );
     printf(1, "Sum of Digits: %d\n", calculate_sum_of_digits());
     exit();
}