// BattleShip_pp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % n)
#define LEN 3

//miss hit 
//destroy의 경우에만 파괴된 것 출력

std::vector<std::string> submarines;
std::vector<std::string> checkSubmarines; 

void hitAction()
{
	printf_s("hit!\n");
}
void missAction()
{
	printf_s("miss!\n");
}
void distroyAction()
{
	printf_s("distroy!\n");
	int randNum = random(submarines.size());

	checkSubmarines.push_back(submarines[randNum]);
	submarines.erase(submarines.begin() + randNum);

	static int curCheckSubNum = 0;
	int curSubNum = submarines.size();

	printf_s("파괴된 배 : ");
	printf_s("%s\n", checkSubmarines[curCheckSubNum++].c_str());
	
	
	printf_s("남아있는 배 : ");
	for(int i = 0; i < curSubNum; i++)
		printf_s("%s ", submarines[i].c_str());
	printf_s("\n\n");
}

int _tmain(int argc, _TCHAR* argv[])
{
	randomize();

	char row, col;
	int randNum;

	submarines.push_back("Aircraft");
	submarines.push_back("Battleship");
	submarines.push_back("Cruiser");
	submarines.push_back("Destroyer");
	submarines.push_back("Destroyer");
	
	std::string attackResult[] = { "hit", "miss", "destroy" };
	
	while (submarines.size() != 0)
	{
		std::cout << "A~H 중 원하는 값을 입력하시오." << std::endl;
		std::cin >> row;

		std::cout << "1~8 중 원하는 값을 입력하시오." << std::endl;
		std::cin >> col;

		std::cout << row << col << std::endl;
		
		randNum = random(LEN);

		if (strcmp(attackResult[randNum].c_str(), attackResult[2].c_str()) == 0)
		{
			distroyAction();
		}
		else if (strcmp(attackResult[randNum].c_str(), attackResult[1].c_str()) == 0)
		{
			missAction();
		}
		else if (strcmp(attackResult[randNum].c_str(), attackResult[0].c_str()) == 0)
		{
			hitAction();
		}
		else
		{
		}
	}

	std::cout << "<" << "GAME END" << ">" << std::endl;
	getchar();
	getchar();
	return 0;
}



//hit miss distroy 랜덤 출력하기