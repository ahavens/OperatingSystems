//AURORA HAVENS

//Always has same process id when running
//I think the state after the process transitions is a ready state

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

unsigned int sleep(unsigned int seconds);
pid_t getpid();

//write a program called sleepy to get n loop times

int main(int argc, char *argv[]){
	int count;
	if(argc == 2)
		count = atoi(argv[1]);
	else
		count = 5;

	int i;

	for(i = 0; i < count; i++){
		sleep(1);
		//print pid
		printf("%d", getpid());
		//printf(" ; TICK ", "%d", i+1);
		printf("\n");
	}

	return 0;
}