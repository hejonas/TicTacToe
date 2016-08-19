#pragma once
#ifndef PLAYINGFIELD_H
#define PLAYINGFIELD_H
#include <vector>

class PlayingField {
	int m_numOfPieces;

public:
	std::vector<std::vector<char>> m_playing_field;
	PlayingField();
	void drawField();
	bool updateSquare(int x, int y, char piece);

};

#endif