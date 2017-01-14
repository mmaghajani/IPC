/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "send_time.h"

#include <time.h>

datetime concatTimes() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    datetime d ;
    d.day = tm.tm_mday;
    d.year = tm.tm_year + 1990;
    d.month = tm.tm_mon + 1;
    d.hour = tm.tm_hour;
    d.minute = tm.tm_min;
    d.sec = tm.tm_sec;

    return d;
}

datetime *
send_1_svc(void *argp, struct svc_req *rqstp) {
    static datetime result;

    /*
     * insert server code here
     */

    //printf("got request\n");

    result = concatTimes();
    return &result;
}

