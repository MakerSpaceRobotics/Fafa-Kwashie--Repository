#include"button_input.h"
#include"TicTacToe_functions_h" 

char board[9] = {49,50,51,52,53,54,55,56,57};
int input;
int player = 1;
int win = 0;
int lock = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

    printBoard();
    // getInput;
    // checkForWinner();
}

