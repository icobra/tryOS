#include <apue.h>
#include <dirnet.h>

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirnet *dirp;

    if (argc != 2){
        err_quit("Использование: ls имя_каталога");
    }
    if ((dp = opendir(argv[1] == NULL) {
        err_sys("Невозможно открыть %s", argv[1]);
    }
    while ((dirp = readdir(dp) != NULL)) {
        printf("%s\n", dirp->d_name);
    }
    closedir(dp);
    exit(0);
}