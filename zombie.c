#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>  /* exit */
#include <errno.h>   /* errno */

unsigned int sleep(unsigned int seconds);
pid_t getpid();

int main(int argc, char *argv[]){
	pid_t pid;


	pid = fork();

	if(pid < 0){
		printf("error, unable to fork");
	}
	else if(pid == 0){
		//child process
		//becomes a zombie process
		printf("in child state");
		printf("\n");
		_exit(0);

	}
	else{
		//parent process
		printf("in parent state");
		printf("\n");
		sleep(10);

	}

	return 0;

}