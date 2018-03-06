#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>


int main() {
  while(1) {
   pid_t tpid;
   pid_t child_pid;
   int child_status;

   char cmd[100];
   char *argv[] = {NULL};
   printf("\n >  ");
   scanf("%s", cmd);

   child_pid = fork();
   if (child_pid == 0) {
     execv(cmd, argv);
     printf("Unknown command");
   } else {
     do {
        tpid = wait(&child_status);
     } while (tpid != child_pid);
     printf("Child exited!\n"); 
  }

  }
}
