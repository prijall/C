#include<sys/types.h> //defines data types
#include<sys/socket.h> //contains socket function 
#include<netinet/in.h>  //structures for internet domain addresses
#include<arpa/inet.h> //function for ip addresss conversion
#include<stdio.h>

int main() {
    int sockfd, clientfd;
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_len = sizeof(client_addr);
        sockfd = socket(AF_INET, SOCK_STREAM, 0);
           server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(12345);
    bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
	printf("Programming listen at port 1234 \n");
    listen(sockfd, 5);
    clientfd = accept(sockfd, (struct sockaddr *)&client_addr, &client_len);
    struct sockaddr_in peer_addr;
    socklen_t peer_len = sizeof(peer_addr);
    getpeername(clientfd, (struct sockaddr *)&peer_addr, &peer_len);
    printf("Client IP: %s\n", inet_ntoa(peer_addr.sin_addr));
    printf("Client Port: %d\n", ntohs(peer_addr.sin_port));
return 0;
}


