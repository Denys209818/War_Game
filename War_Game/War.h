#pragma once
#include "libs.h"
#include "Unit.h"

class War
{
private:
	Unit** army1;
	Unit** army2;
public:
	War(Unit** army1, Unit** army2);

	void ShowArmies();

	void Unit1Attack();

	void Unit2Attack();

};