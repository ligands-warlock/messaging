// messaging_system.h

#ifndef MESSAGING_SYSTEM_H
#define MESSAGING_SYSTEM_H

#include "user.h"
#include "message.h"

void initializeMessagingSystem();
void addUser(const char* name);
void sendMessage(int senderId, int receiverId, const char* content);
void displaySystemState();

#endif // MESSAGING_SYSTEM_H
