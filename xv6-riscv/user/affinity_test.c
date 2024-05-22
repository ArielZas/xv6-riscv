
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  set_affinity_mask(5);
  int pid = getpid();
  for(int i = 0; i < 10000; i++)  {
    printf("%d ", pid);
    if(i%100 == 0)
        printf("\n");
    
  }
  exit(0,"");
}
