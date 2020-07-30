#include <sys/socket.h>
#include <arpa/inet.h>
#include <string>
#include <asio.hpp>

int create_connection(const char *srv_ip, const int srv_port) {
    int sock = 0;
    struct sockaddr_in srv_addr;
    sock = socket(AF_INET, SOCK_STREAM, 0);
    srv_addr.sin_family = AF_INET;
    srv_addr.sin_port = htons(srv_port);
    inet_pton(AF_INET, srv_ip, &srv_addr.sin_addr);
    connect(sock, (struct sockaddr *) &srv_addr, sizeof(srv_addr));
    return sock;
}

void send_message(const std::string *s, const int sock) {
    send(sock, s, s->size(), 0);
}

