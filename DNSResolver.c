#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){

	if(argc == 1){ 
		printf("\n");
		printf("DNS Resolver - Heitor H. M. Massarelli \n\n");
		printf("DNSResolver: Missing URL \n\n");
		printf("Usage: DNSResolver [URL]");

		return 0;

	} else {
		printf("\n");
		printf("DNS Resolver - Heitor H. M. Massarelli \n\n");

		struct hostent *alvo = gethostbyname(argv[1]);

		if (alvo == NULL){
;
			printf("DNSResolver: BAD URL \n\n");
			printf("Usage: DNSResolver [URL]");

			return 0;

		} else { 
			printf("IP: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));

			return 0;

			}
		}
}
