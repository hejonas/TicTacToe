#pragma once
#ifndef GAMELOGICS_H
#define GAMELOGICS_H

#include "PlayingField.h"

class GameLogics {
public:
	bool isVictory(std::vector<std::vector<char>>& playing_field);
private:
	bool checkRowsForVictory(std::vector<std::vector<char>>& playing_field);
	bool checkColumnsForVictory(std::vector<std::vector<char>>& playing_field);
	bool checkDiagonalsForVictory(std::vector<std::vector<char>>& playing_field);
	
};

#endif