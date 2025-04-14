#include "apue.h"
#include <errno.h>

// fig 3-1
int main(void) {
    if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1) {
        printf("can't seek\n");
        if (errno == ESPIPE) {
            printf("stdin not OK\n");
        }
        perror("lseek");
    } else {
        printf("seek OK\n");
    }
    exit(0);
}
