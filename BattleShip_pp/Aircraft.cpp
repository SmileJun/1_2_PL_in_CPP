#include "stdafx.h"
#include "Aircraft.h"


Aircraft::Aircraft()
{
	m_Name = "AIRCRAFT";
	m_Type = AIRCRAFT;
	m_MaxHP = 5;
	m_CurHP = m_MaxHP;
}


Aircraft::~Aircraft()
{
}
