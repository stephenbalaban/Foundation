// Copyright (c) 2012 Stephen A. Balaban

#include "socket.h"
#define PORT 8080

int main(int argc, char **argv)
{
    /*
    FServer* s = new_server(PORT);
    while(true) {
        listen(s);
    }
    */
    cfsocket(PORT);
}
