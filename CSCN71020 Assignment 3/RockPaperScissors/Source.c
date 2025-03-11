#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 20
#include <stdio.h>
#include "RPSOutcome.h"

//madisont - cscn71020 - assign3

//Write main (optional)
int main(void) {

	char p1_input[MAXSIZE];
	char p2_input[MAXSIZE];

	//Get player 1 input
	printf("Player One, please enter one of the following words:\n(1) Rock\n(2) Paper\n(3) Scissors\n");
	scanf("%s", p1_input);

	//Get player 2 input
	printf("Player Two, please enter one of the following words:\n(1) Rock\n(2) Paper\n(3) Scissors\n");
	scanf("%s", p2_input);

	//Compare inputs
	rpsOutcome(p1_input, p2_input);

	return 0;
}