#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {

    umask(0000);
    int fd = open("image.ppm", O_CREAT | O_TRUNC | O_WRONLY, 0644);

    char line[50];
    snprintf(line, sizeof(line), "P3 500 500 255\n");
    write(fd, line, sizeof(line));

    int row = 0;
    int col = 0;
    for(; row < 500; row++) {
        for(; col < 500; col ++) {
            snprintf(line, sizeof(line), "255 0 0\n");
            write(fd, line, sizeof(line));
        }
    }

    close(fd);

    return 0;
}
