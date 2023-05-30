#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define port 8080

int main(int argc, char const* argv[])
{
    int status,valread,client_fd;
    struct sockaddr_in serv_addr;
    int addrlen = sizeof(serv_addr);
    char* hello = "Hello from client";
    char buffer[1024] = {0};
    if((client_fd = socket(AF_INET,SOCK_STREAM,0))<0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    //convert ip4 and ip6 from text to binary from
    if(inet_pton(AF_INET,"127.0.0.1",&serv_addr.sin_addr)<=0)
    {
        printf("\n Invalid address / Address nnot supported \n");
        return -1;
    }

    if((status = connect(client_fd,(struct sockaddr*)&serv_addr,addrlen))<0)
    {
        printf("\n Conection failed\n");
        return -1;
    }

    send(client_fd, hello,strlen(hello),0);
    printf("Hello msg Sent\n");

    valread = read(client_fd,buffer,1024);
    printf("%s\n",buffer);

    //closing the connected socket 
    close(client_fd);

    return 0;
}