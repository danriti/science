#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {

  for (int i=30; i>0; i--) {
    printf("\r%2d", i);
    fflush(stdout); 
    sleep(1);
  }

	return 0;
}
