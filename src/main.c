#include <stdio.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>

#define CHECK(sts, msg) if((sts) == -1) { perror(msg); exit(-1); }


int main()
{

   // Structure 
   struct sockaddr_un server, client;

    server.sin_family = AF_INET;
    server.sin_port = htons(8888);
    server.sin_addr.s_addr = htonl(INADDR_ANY);

   /* création de la socket */ 
    
   int sock 
   sock = socket(AF_INET, SOCK_DGRAM,0);
   CHECK(sock, "Erreur à l'initialisation de la socket");
   
   // bind
   CHECK(bind(sock,(struct sockaddr *) &server,),sizeof(server);

   while(1){


       
   }




}
