// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Player.h"
#include "PlayingField.h"
#include "GameLogics.h"

using namespace std;

int main()
{
	PlayingField playingField = PlayingField();
	Player player1 = Player();
	GameLogics logics = GameLogics();

	playingField.drawField();

	player1.setVictories(1);

	system("pause");
	system("cls");

	playingField.updateSquare(0, 0, 'x');
	playingField.updateSquare(1, 1, 'x');
	playingField.updateSquare(2, 2, 'x');

	playingField.drawField();

	cout << logics.isVictory(playingField.m_playing_field) << endl;
	
	system("pause");

    return 0;
}

