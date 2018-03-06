#include <unistd.h>
#include <sys/types.h>

int main() {
   char *argv[] = {NULL};
   char *env[] = {NULL};

   pid_t pid;
   pid = fork();

   if (pid == 0) {
     execve("/sh", argv, env);
   } else {
     while (1) { sleep(1); }
   }
}
