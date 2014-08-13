#include "stdafx.h"
#include "Player.h"
#include <iostream>
#include <time.h>

Player::Player()
{
}


Player::~Player()
{
}

void Player::SetupShips()
{
	srand((unsigned int)time(NULL));

	Ship shipList[] = { m_Aircraft, m_Battleship, m_Crusier, m_Destroyer[0], m_Destroyer[1] };
	
	for (int i = 0; i < _countof(shipList); i++)
	{
	}
	Position head;
	head.m_X = rand() % 8 + 'a';
	head.m_Y = rand() % 8;

	Direction direction;
	do 
	{
	} while ();
	switch (rand() % 4)
	{
	case 0:
		direction = East;
		break;
	case 1:
		direction = West;
		break;
	case 2:
		direction = South;
		break;
	case 3:
		direction = North;
		break;
	default:
		direction = DIRECTION_NONE;
		break;
	}
	


	for (int i = 0; i < m_Aircraft.GetMaxHP(); i++)
	{
		m_Aircraft.AddPosition('a', '1' + i);
	}
	for (int i = 0; i < m_Battleship.GetMaxHP(); i++)
	{
		m_Battleship.AddPosition('d', '1' + i);
	}
	for (int i = 0; i < m_Crusier.GetMaxHP(); i++)
	{
		m_Crusier.AddPosition('g', '5' + i);
	}
	for (int i = 0; i < m_Destroyer->GetMaxHP(); i++)
	{
		m_Destroyer[0].AddPosition('g' + i, '3');
		m_Destroyer[1].AddPosition('d' + i, '7');
	}
}

void Player::PrintShips()
{
	Ship shipList[] = { m_Aircraft, m_Battleship, m_Crusier, m_Destroyer[0], m_Destroyer[1] };

	for (int i = 0; i < _countof(shipList); i++)
	{
		Player::PrintShip(shipList[i]);
	}
}