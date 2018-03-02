#include <stdio.h>
#include <unistd.h>

int main() {
  sleep(2); // we need this to wait before os loaded
  printf("\n");
  printf("Hello, Linux world!\n"); 
  while (1) {}
  return 0;
}
