#include "RPSOutcome.h"
#include <string.h>

//madisont - cscn71020 - assign3 - implementation

//Write a function that will determine the outcome of a game of Rock, Paper, Scissors

//Requirements:
//The function accepts two char arrays as input
//The function outputs a single char array
//The char arrays passed to the function can contain any series of characters

char* rpsOutcome(char* p1_input, char* p2_input) {

	//Accepted input arrays
	char rockArray[] = "Rock";
	char paperArray[] = "Paper";
	char scissorsArray[] = "Scissors";
	
	//Possible outcome arrays
	char p1Wins[] = "Player1";
	char p2Wins[] = "Player2";
	char draw[] = "Draw";
	char invalidInput[] = "Invalid";

	//Check for valid input
	int p1_inputValue = strcmp(p1_input, rockArray) && strcmp(p1_input, paperArray) && strcmp(p1_input, scissorsArray);
	
	if (p1_inputValue != 0)
	{
		return invalidInput;
	}
	
	int p2_inputValue = strcmp(p2_input, rockArray) && strcmp(p2_input, paperArray) && strcmp(p2_input, scissorsArray);
	
	if (p2_inputValue != 0)
	{
		return invalidInput; 
	}

	//Draw
	if (strcmp(p1_input, p2_input) == 0)
	{
		return draw;
	}

	//Player 1 Wins
	if ((strcmp(p1_input, rockArray) == 0 && strcmp(p2_input, scissorsArray) == 0) || 
		(strcmp(p1_input, paperArray) == 0 && strcmp(p2_input, rockArray) == 0) ||
		(strcmp(p1_input, scissorsArray) == 0 && strcmp(p2_input, paperArray) == 0))
	{
		return p1Wins;
	}

	//Player 2 Wins
	if ((strcmp(p2_input, rockArray) == 0 && strcmp(p1_input, scissorsArray) == 0) ||
		(strcmp(p2_input, paperArray) == 0 && strcmp(p1_input, rockArray) == 0) ||
		(strcmp(p2_input, scissorsArray) == 0 && strcmp(p1_input, paperArray) == 0))
	{
		return p2Wins;
	}

}