#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Server{
	int port;
	char name[50];
};

int main(){

	struct Server server1;
	server1.port = 3000;
	strcpy(server1.name, "lil server vert");

	printf("%s", server1.name);

	return 0;
};
