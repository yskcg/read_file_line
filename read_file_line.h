#ifndef _READ_FILE_LINE_H
#define _READ_FILE_LINE_H
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
extern char * read_file_line(char *path,int line);
#endif
