#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("%d\n", memsize());
  void *p = malloc(20000);
  printf("%d\n", memsize());
  free(p);
  printf("%d\n", memsize());
  exit(0);
}
