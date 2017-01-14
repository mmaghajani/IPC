//
// Created by aliakbarbadri on 1/14/17.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>


#define BUFFER_SIZE 20

char write_msg[BUFFER_SIZE];

char *concatTimes() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char temp[4];
    sprintf(write_msg, "%d", tm.tm_year + 1900);
    strcat(write_msg, "/");
    sprintf(temp, "%d", tm.tm_mon + 1);
    strcat(write_msg, temp);
    strcat(write_msg, "/");
    sprintf(temp, "%d", tm.tm_mday);
    strcat(write_msg, temp);
    strcat(write_msg, " - ");
    sprintf(temp, "%d", tm.tm_hour);
    strcat(write_msg, temp);
    strcat(write_msg, ":");
    sprintf(temp, "%d", tm.tm_min);
    strcat(write_msg, temp);
    strcat(write_msg, ":");
    sprintf(temp, "%d", tm.tm_sec);
    strcat(write_msg, temp);
}
int main(void) {

    concatTimes();
    char read_msg[BUFFER_SIZE];
    int fd[2];
    pid_t pid;

    if (pipe(fd) == -1) {
        fprintf(stderr, "Pipe failed");
        return 1;
    }
    pid = fork();
    if (pid < 0) {
        fprintf(stderr, "Fork Failed");
        return 1;
    } else if (pid > 0) {
        close(fd[0]);
        write(fd[1], write_msg, strlen(write_msg) + 1);
        close(fd[1]);
    } else {
        close(fd[1]);
        read(fd[0], read_msg, BUFFER_SIZE);
        printf("read %s", read_msg);
        close(fd[0]);
    }
    return 0;
}