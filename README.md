# System calls in Xv6

### team
- Parna Asadi
- Morteza Bahjat
- Omid Panakari


## Submit system call arguments

Implement the following system call in which there is only one input argument of type int.
- calculate_sum_of_digits (int n)

Test it by running "test_calculate_sum_of_digits" in xv6(qemu)

## Implement a system call to find the addresses of file sectors
- void get_file_sectors(int fd, <parameter storing returned sector addresses>);
  
Test it by running "fi" in xv6(qemu)

## Implement a system call to get the parent's process

- int get_parent_pid();
  
Test it by running "test_get_parent_id" in xv6(qemu)
  
## Implement a system call change parent of a process
  
- set_process_parent(int pid);
Test it by running "test_sleepcurrproc" first then call "test_setprocparent" immediately in xv6(qemu)
