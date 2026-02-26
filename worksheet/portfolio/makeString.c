
/*
Name: Ali Beren Adamcil
Student ID:202018616
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
     char buffer[50];
     int i ;

     strcpy(buffer,argv[1]); 

    // process the command-line data using appropriate string functions

        for(i=2; i<argc; i++){
            strcat(buffer,"-");
            strcat(buffer,argv[i]);
        }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}