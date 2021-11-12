#include "types.h"
#include "stat.h"
#include "user.h"

uint buf[512] = {0};

void
fi(int fd)
{
    int n = 0;
    getfilesectors(fd, sizeof buf, buf);
    
    for(; n < sizeof buf; n++)
    {
        if (buf[n] == 0)
            break;

        printf(1, "sector %d addr: %d\n", &n, buf[n]);
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
  printf(1, "wc: cannot open %s\n", argv[1]);
    exit();
  }

  fi(fd);
  exit();
}
