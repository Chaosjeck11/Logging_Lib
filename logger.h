#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <time.h>

// Define output file path - use full path
#define OUTPUT "D:/goerg/Desktop/IP/Projekt/Zahlenlotto/output/Bildschirmausgabe.txt"

// Function prototypes
void logger(const char *logtext);
void log_with_timestamp(const char *message);
int init_logger(void);
void close_logger(void);

#endif


static FILE *logfile = NULL;

int init_logger(void) {
    logfile = fopen(OUTPUT, "a");
    return (logfile != NULL);
}

void logger(const char *logtext) {
    if (!logfile && !init_logger()) return;
    fprintf(logfile, "%s", logtext);
    fflush(logfile);
}

void log_with_timestamp(const char *message) {
    if (!logfile && !init_logger()) return;
    
    time_t now = time(NULL);
    char timestamp[26];
    strftime(timestamp, sizeof(timestamp), "[%Y-%m-%d %H:%M:%S] ", localtime(&now));
    
    fprint("\n\n\n--------------------------------------------------------------------------------------\n");
    fprintf(logfile, "%s%s\n", timestamp, message);
    fprint("\n\n");
    fflush(logfile);
}

void close_logger(void) {
    if (logfile) {
        fclose(logfile);
        logfile = NULL;
    }
}