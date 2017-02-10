//FINISHED 2/1/17
//AURORA HAVENS

/* preprocessor to include a .h file */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	/*declare string/char */
	char input[256];
	/*request sentence */
	printf("Please input your sentence (space before it)");
	/*input sentence */
	//one issue encountered was getting a string, but negating the white space
	//I used a negated scanset that will scan up to 99 characters up to a new line
	scanf(" %256[^\n]", &input); 

	/* exit case define */
	int doublespace = 0;
	/* increment through input */
	int i;

	/* MAJOR ERROR OCCURED, WORKING ON PRINTING DIFFERENTLY */
	for(i = 0; i < strlen(input); i++){
		if(input[i] == ' '){
			printf("\n");
		}
		else{
			printf("%c", input[i]); 
		}
		
	}

	printf("\n");
	

	return 0;
}