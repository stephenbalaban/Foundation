// Copyright (c) 2012 Stephen A. Balaban
#include <sys/types.h>
#include <sys/socket.h> 
#include <netinet/in.h> 

typedef struct {
    int port;
    char* buffer;
} FSocket;

int cfsocket(int port);
int bind_socket(int sock_desc);
int csock();
