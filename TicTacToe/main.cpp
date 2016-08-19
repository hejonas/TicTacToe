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
	Player player2 = Player();
	GameLogics logics = GameLogics();

	int move[2];

	playingField.drawField();


	while (true) {

		cout << "Player X's turn!" << endl;
		cout << "Enter your coordinates" << endl;
		cout << "x: ";
		cin >> move[0];
		cout << "y: ";
		cin >> move[1];

		playingField.updateSquare(move[0], move[1], 'x');

		system("cls");

		playingField.drawField();

		if (logics.isVictory(playingField.m_playing_field)) {
			cout << "VICTORY for player X!" << endl;
			break;
		}

		cout << "Player O's turn!" << endl;
		cout << "Enter your coordinates" << endl;
		cout << "x: ";
		cin >> move[0];
		cout << "y: ";
		cin >> move[1];

		playingField.updateSquare(move[0], move[1], 'o');

		system("cls");

		playingField.drawField();

		if (logics.isVictory(playingField.m_playing_field)) {
			cout << "VICTORY for player Y!" << endl;
			break;
		}
	}
	
	system("pause");

    return 0;
}

