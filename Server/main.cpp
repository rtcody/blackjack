// TCP Server
#include "Server.h"

int main() {

    WSADATA wsaData;
    SOCKET serverSocket; 
    sockaddr_in serverAddr;

    initializeSocket(wsaData); 
    createSocket(serverSocket);  
    bindSocket(serverAddr, serverSocket); 
    listen(serverSocket);

    SOCKET clientSocket = acceptConnection(serverSocket); 

    recieveData(clientSocket, serverSocket); 

    closeServer(serverSocket); 

    return 0;
}