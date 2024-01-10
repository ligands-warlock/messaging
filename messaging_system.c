// messaging_system.c

#include <stdio.h>
#include <string.h>
#include "messaging_system.h"
#include "user.h"
#include "message.h"

#define MAX_USERS 10
#define MAX_MESSAGES 20

struct User users[MAX_USERS];
struct Message messages[MAX_MESSAGES];
int userCount = 0;
int messageCount = 0;

void initializeMessagingSystem() {
    userCount = 0;
    messageCount = 0;
}

void addUser(const char* name) {
    if (userCount < MAX_USERS) {
        struct User newUser;
        newUser.userId = userCount + 1;
        strncpy(newUser.name, name, sizeof(newUser.name));
        users[userCount++] = newUser;
    } else {
        printf("Cannot add more users. System at capacity.\n");
    }
}

void sendMessage(int senderId, int receiverId, const char* content) {
    if (messageCount < MAX_MESSAGES) {
        struct Message newMessage;
        newMessage.messageId = messageCount + 1;
        newMessage.senderId = senderId;
        newMessage.receiverId = receiverId;
        strncpy(newMessage.content, content, sizeof(newMessage.content));
        messages[messageCount++] = newMessage;
    } else {
        printf("Cannot send more messages. System at capacity.\n");
    }
}

void displaySystemState() {
    printf("Current System State:\n");

    printf("\nUsers:\n");
    for (int i = 0; i < userCount; ++i) {
        displayUser(&users[i]);
    }

    printf("\nMessages:\n");
    for (int i = 0; i < messageCount; ++i) {
        displayMessage(&messages[i]);
    }
}
