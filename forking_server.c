#include "pipe_networking.h"
#include <signal.h>

void process(char *s);
void subserver(int from_client);

static void sighandler(int signo) {
  if (signo == SIGINT) {
    remove("luigi");
    exit(0);
  }
}

int main() {
/*
	server_setup
	server_connect
	fork
	child: subserver
	subserver: process
	
	
*/
}

void subserver(int from_client) {
}

void process(char * s) {
}
