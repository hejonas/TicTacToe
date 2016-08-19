#include "stdafx.h"
#include <iostream>
#include "PlayingField.h"

using namespace std;

PlayingField::PlayingField() {
	m_numOfPieces = 0;

	m_playing_field = std::vector<std::vector<char>>(3, std::vector<char>(' '));
}

void PlayingField::drawField()
{
	cout << "+-+-+-+" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "|";
		for (int j = 0; j < 3; j++) {
			cout << m_playing_field[i][j] << "|";
		}
	cout << endl << "+-+-+-+" << endl;
	}
	
}

void PlayingField::updateSquare(int x, int y, char piece)
{
	m_numOfPieces++;
	m_playing_field[x][y] = piece;
}

