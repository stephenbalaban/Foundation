// Copyright (c) 2012 Stephen A. Balaban

typedef struct {
    int port;
} FServer;

FServer* new_server(int port);
int listen(FServer* fs);
