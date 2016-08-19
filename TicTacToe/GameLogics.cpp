
#include "stdafx.h"
#include "GameLogics.h"
#include <iostream>

using namespace std;

bool GameLogics::isVictory(std::vector<std::vector<char>>& playing_field)
{	
	return (checkRowsForVictory(playing_field) || 
		    checkColumnsForVictory(playing_field) || 
		    checkDiagonalsForVictory(playing_field));
}

bool GameLogics::checkRowsForVictory(std::vector<std::vector<char>>& playing_field)
{
	for (int i = 0; i < 3; i++) {
		if ((playing_field[i][0] == playing_field[i][1]) && 
			(playing_field[i][1] == playing_field[i][2]) &&
			playing_field[i][0] != 0) {
			return true;
		}
	}
	return false;
}

bool GameLogics::checkColumnsForVictory(std::vector<std::vector<char>>& playing_field)
{
	for (int i = 0; i < 3; i++) {
		if ((playing_field[0][i] == playing_field[1][i]) &&
			(playing_field[1][i] == playing_field[2][i]) &&
			playing_field[0][i] != 0) {
			return true;
		}
	}
	return false;
}

bool GameLogics::checkDiagonalsForVictory(std::vector<std::vector<char>>& playing_field)
{
	if ((playing_field[0][0] == playing_field[1][1]) &&
		playing_field[1][1] == playing_field[2][2] &&
		playing_field[0][0] != 0) {
		return true;
	}
	else if ((playing_field[0][2] == playing_field[1][1]) &&
		playing_field[1][1] == playing_field[2][0] &&
		playing_field[0][2] != 0) {
		return true;
	}
	return false;
}
