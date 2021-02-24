//Lab 2
//Karl Piasecki 0575787

#include <stdio.h>

//num is the number of arguments passed by the user
//input[] is the array of characters input by the user
int main (int num, char *input[]) {

int i; //i is the index for the input array

for (i = 0; i < num; i++) {

if (*input[i]=='a' || *input[i]=='A' || *input[i]=='b' || *input[i]=='x' || *input[i]=='v' || *input[i]=='z' || *input[i]=='R') {
        printf("Argument %s called \n", input[i]); //print each character from user input on a new line
}
else {
printf("invalid argument %s \n", input[i]);
} //close else

} //close for

} //close main
