#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char **argv)
{
    DIR            *dptr;
    struct dirent  *ds;
    dptr = opendir(".");
    while ((ds = readdir(dptr)) != 0)
        printf("%s\n", ds->d_name);
    closedir(dptr);

    return(0);
}
