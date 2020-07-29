#ifndef PING_MESSAGE_H
#define PING_MESSAGE_H

int create_connection(const char *srv_ip, int srv_port);

void send_message(const std::string *s, const int sock);

#endif //PING_MESSAGE_H
