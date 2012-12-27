#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int usleep(unsigned int usec);

int main(int argc, char **argv) {

  char cursor[4] = "/-\\|";
  int i = 0;

  while (1) {
    printf("%c", cursor[i]);
    i = (i + 1) % 4;
    fflush(stdout); 
    usleep(100000);
    printf("\b");
  }

	return 0;
}

