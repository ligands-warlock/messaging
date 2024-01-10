// main.c

#include "messaging_system.h"

int main() {
    // Initialize the messaging system
    initializeMessagingSystem();

    // Add users
    addUser("Alice");
    addUser("Bob");
    addUser("Charlie");

    // Send messages
    sendMessage(1, 2, "Hello Bob!");
    sendMessage(2, 1, "Hi Alice!");

    // Display system state
    displaySystemState();

    return 0;
}
