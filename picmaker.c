#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {

    umask(0000);
    int fd = open("picmaker.ppm", O_CREAT | O_TRUNC | O_WRONLY, 0644);

    char line[50];
    sprintf(line, "P3 500 500 255\n");
    write(fd, line, strlen(line));

    int row;
    int col;
    for(row = 0; row < 500; row++) {
        for(col = 0; col < 500; col++) {

            sprintf(line, "255 0 0 ");
            write(fd, line, strlen(line));
        }
    }

    close(fd);

    return 0;
}
