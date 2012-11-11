// Copyright (c) 2012 Stephen A. Balaban
#include <stdlib.h>
#include "socket.h"
#include "server.h"
#define fmalloc() (FServer*)malloc(sizeof(FServer))

// create a new FServer
FServer* new_server(int port)
{
    FServer* fs = fmalloc();
    fs->port = port;
    fs->socket = make_socket(port);
    return fs;
}

// Have the server start listening on the specified port.
int listen(FServer* fs)
{
    // ...
}

