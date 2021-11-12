#include "types.h"
#include "stat.h"
#include "user.h"

uint buf[512] = {0};

void
fi(int fd)
{
    int n = 0;
    getfilesectors(fd, buf, sizeof buf);

    for(; n < sizeof buf / sizeof(uint); n++)
    {
        if (buf[n])
            printf(1, "sector %d addr: %d\n", n, buf[n]);
    }
}

int
main(int argc, char *argv[])
{
  int fd;

  if(argc <= 1){
    exit();
  }

  if((fd = open(argv[1], 0)) < 0){
  printf(1, "fi: cannot open %s\n", argv[1]);
    exit();
  }

  fi(fd);
  exit();
}
