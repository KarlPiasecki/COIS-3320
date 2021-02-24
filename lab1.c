//Lab 1
//COIS-3320
//Karl Piasecki 0575787


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declare the functions
char GetUserSelection();
char GetComputerSelection();
int GetWinner(char user_choice, char computer_choice);

int main(){

//variable declarations
int s; //stores the score
char u; //stores the user selection
char c; //stores the computer selection

Start:
//prompt user to make their move
printf("Choose A for armor, or H for hammer or S for sword or Q to quit. \n");

//call the function that gets the user choice
u = GetUserSelection();


//let the user know it is the computer's turn
printf("Now it is the computer's turn...\n");

//call the function that gets the computer's choice
c = GetComputerSelection();

//tell the user that the winner will now be determined
printf("Now the winner will be determined...\n");

//call the GetWinner function
s = GetWinner(u, c);

if (s == -1) {

printf("The computer wins! You lose!\n");
}else if (s == 0) {

printf("It's a tie!\n");
}else{

printf("You win!\n");
        }//close else

goto Start;

}//close main


        //GetUserSelection function
char GetUserSelection() {

//declare user_choice variable
char user_choice;

userSelection:
// get user choice
//printf("Choose A for armour or H for hammer or S for sowrd or Q to quit, or anything else to repeat the menu.\n");
scanf("%c", &user_choice);

if (user_choice == 'A' || user_choice == 'H' || user_choice == 'S') {

switch (user_choice){

case 'A': printf("You have chosen ARMOR!\n");
        break;
case 'H': printf("You have chosen HAMMER!\n");
        break;
case 'S': printf("You have chosen SWORD!\n");
        break;
        }
return user_choice;

}else if (user_choice == 'Q') {
        exit(0);
}else{
//printf("Try again with the correct input this time\n");
goto userSelection;
}


}


        //GetComputerSelection function
char GetComputerSelection() {

// declare computer_choice variable
char computer_choice;
// declare int to store random number form 0-2
int c;
// generate a random number to get the computer's choice
srand(time(NULL));
c = rand() % 3;

// switch statement to convert c to computer choice
switch (c) {

case 0: computer_choice = 'A';
        printf("The computer has chosen ARMOR!\n");
        break;
case 1: computer_choice = 'H';
        printf("The computer has chosen HAMMER!\n");
        break;
case 2: computer_choice = 'S';
        printf("The computer has chosen SWORD!\n");
        break;
        }

return computer_choice;

}//close GetComputerSelection

        //GetWinner function
int GetWinner(char user_choice, char computer_choice) {

//hammer>armor>sword>hammer>

int score;

if (computer_choice == 'A'){

//switch between values of user_choice
switch (user_choice) {

case 'A': score = 0;
        break;
case 'H': score = 1;
        break;
case 'S': score = -1;
        break;
        }

}else if (computer_choice == 'H') {

switch (user_choice) {

case 'A': score = -1;
        break;
case 'H': score = 0;
        break;
case 'S': score = 1;
        break;
        }

}else{

//in this case the computer choice is Sword
switch (user_choice) {
        break;
case 'A': score = 1;
        break;
case 'H': score = -1;
        break;
case 'S': score = 0;
        break;
        }
}//close else

return score;
}//close GetWinner
