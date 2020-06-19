#include "libs.h"

void Unit::SetHp(int a)
{
	this->hp = a;
}

void Unit::SetDmg(int a)
{
	this->dmg = a;
}

void Unit::SetDodge(int a)
{
	this->dodge = a;
}

int Unit::GetHp()
{
	return this->hp;
}

int Unit::GetDmg()
{
	return this->dmg;
}

int Unit::GetDodge()
{
	return this->dodge;
}


void Unit::Attack(Unit* army)
{
	if (!this->Defend(army->dodge))
	{
		army->hp -= this->dmg;
	}
}


bool Unit::Defend(int d)
{
	int ran = (rand() % 100) + 1;
	if (ran <= d)
	{
		return true;
	}
	return false;
}