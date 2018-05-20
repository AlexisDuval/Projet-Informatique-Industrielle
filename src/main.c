#include <stdio.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>

#define CHECK(sts, msg) if((sts) == -1) { perror(msg); exit(-1); }


int main()
{

   // Structure 
   struct sockaddr_un server, client;

   /* création de la socket */ 
    
   int sock 
   sock = socket(AF_INET, SOCK_DGRAM,0);
   CHECK(sock, "Erreur à l'initialisation de la socket");
   
   CHECK(bind(sock,(struct sockaddr *) &server,))

}
