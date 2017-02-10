//FINSIHED 2/2/17
//NOTE: BIZARRE ERROR OCCURS WHEN I TRIED TO RUN IT OUT OF HAVEN FOLDER, SERVER DISCONNECTS
//AURORA HAVENS

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){	
	//take in a char input
	char input[256];

	int i;
	int j;

	//true or false to determine if entered string is an integer
	int notDigit = 0;

	//recursive integers
	int past = 1;
	int current = 1;

	printf("Please input your number");
	//take in an integer BUT read as a string first
	scanf(" %s", &input);


	//check if string is integer
	for(i = 0; i < strlen(input); i++){
		//set false if not integer
		if(!isdigit(input[i])){
			notDigit = 1;

		}
		//else do nothing
		else{

		}
	}
	//printf("finished string check \n");

	//if entered is not digit print Huh?
	if(notDigit == 1){
		printf("Huh? \n");
	}
	//if entered is, calculate factorial
	else{
		//convert string to integer
		int finalInt = atoi(input);
		for(j = 1; j < (finalInt+2); j++){
			past = past * current;
			current = j;
		}

		printf("%i", past);
		printf("\n");

	}





	return 0;
}