// Copyright (c) 2012 Stephen A. Balaban
#define SINPORT 7000

int cfsocket(int port);
{
    int sock_desc = csock();
    bind_socket(sock_desc, port);
    sleep(10);
    close_socket(sock_desc);
}

// close an open socket descriptor
int close_socket(int sock_desc)
{
    close(sock_desc);
}

// initialzie a new socket
int bind_socket(int sock_desc)
{
    struct sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(SINPORT);
    int bind_result = bind(sock_desc, (struct sockaddr *)&address, sizeof(address));
    if (bind_result < 0) {
        perror("ERROR binding the socket.");
        exit(EXIT_FAILURE);
    }
    return bind_result;
}

// create a new socket descriptor
int csock()
{
    sock_desc = socket(AF_INET, SOCK_STREAM, 0);
    if (sock_desc < 0) {
        perror("ERROR opening the socket.");
        exit(EXIT_FAILURE);
    }
    return sock_desc;
}
