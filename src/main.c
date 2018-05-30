#include <stdio.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>

#define CHECK(sts, msg) if((sts) == -1) { perror(msg); exit(-1); }


int main()
{

   // Structure 
   struct sockaddr_un pc, automate;

    pc.sin_family = AF_INET;
    pc.sin_port = htons(0);
    pc.sin_addr.s_addr = htonl(172.22.209.253);


    len_msg=2000; 
    char message[len_msg];
    slen = sizeof(automate)

   /* création de la socket */ 
    
   int sock 
   sock = socket(AF_INET, SOCK_DGRAM,0);
   CHECK(sock, "Erreur à l'initialisation de la socket");
   
   // bind
   CHECK(bind(sock,(struct sockaddr *) &pc,),sizeof(pc);

   while(1){

        printf("en attente de données");
        CHECK(recvfrom(sock,message,len_msg,0,char message [len_msg]; &automate,&slen),"Erreure à la reception du message");
        
       
       
   }




}
