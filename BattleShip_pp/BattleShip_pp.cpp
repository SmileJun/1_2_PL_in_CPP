// BattleShip_PP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <array>
#include <vector>
#include <string>
#include <iostream>
#include <time.h>
#include "Aircraft.h"
#include "Player.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Player player;
	player.SetupShips();
	player.PrintAllShips();

// 	Aircraft aircraft;
// 	Position pos;
// 	pos.m_X = 'c';
// 	pos.m_Y = '3';
// 	aircraft.AddPosition(pos);
// 	aircraft.Print();
// 	pos.m_Y = '2';
// 	aircraft.HitCheck(pos);
// 	aircraft.Print();

// 	srand((unsigned int)time(NULL));
// 
// 	std::string ships[] = { "Aircraft", "Battleship", "Cruiser", "Destroyer", "Destroyer" };
// 	std::string results[] = { "HIT!", "MISS!", "DESTROY!" };
// 	int remainder = _countof(ships);
// 	
// 	while (remainder > 0)
// 	{
// 		std::string input;
// 		std::cin >> input;
// 
// 		int result = rand() % _countof(results);
// 		std::cout << results[result] << std::endl;
// 		
// 		if (results[result] == "DESTROY!")
// 		{
// 			int destroyedShipIdx = 0;
// 			do 
// 			{
// 				destroyedShipIdx = rand() % _countof(ships);
// 			} while (ships[destroyedShipIdx] == "");
// 
// 			std::cout << ships[destroyedShipIdx] + " was destroyed" << std::endl;
// 			ships[destroyedShipIdx] = "";
// 			remainder--;
// 			
// 			std::cout << "Remainder Ships: ";
// 			int foo = 0;
// 			for (int i = 0; i < _countof(ships); i++)
// 			{
// 				if (ships[i] != "")
// 				{
// 					std::cout << ships[i];
// 					foo++;
// 					if (1 <= foo && foo < remainder - 1)
// 					{
// 						std::cout << ", ";
// 					}
// 					else if (foo == remainder - 1)
// 					{
// 						std::cout << " and ";
// 					}
// 				}
// 			}
// 			std::cout << std::endl;
// 		}
// 	}
// 
// 	std::cout << "GAME OVER!!" << std::endl;
	_getch();

	return 0;
}