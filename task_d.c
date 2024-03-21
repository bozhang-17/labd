#include <stdio.h>
int main(void){
    
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen("number.txt", "r");
	if(fptr == NULL) { // display error if can't open file
        printf("Error. Not able to open the file.");
		return 1;
        }
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	

	// Your code below here
	char name[]="Bo Zhang";
	char email[]="bo.zhang-17@student.manchester.ac.uk";
	printf("{\"name\": \"%s\",\n", name);
	printf(" \"email\": \"%s\",\n", email);
	printf(" \"number1\": %.2f,\n", num);
    printf(" \"number2\": %.3e}\n", num);
	// Do not edit below here
	return 0;
}
