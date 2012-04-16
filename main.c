
/* imported from the kernel source tree */
#include "asm/unistd.h"

/* for syscall() */
#include <unistd.h>
#include<stdio.h>


int gettid(void)
{
	return syscall(__NR_gettid);
}

int main (int argc, char **argv) {

  int this_tid;
  this_tid = gettid();
  printf("thread id is %d \n",this_tid);
  while(1){
  }
  return 0;
}
