#pragma once
#include "libs.h"

class Unit
{
private:
	int hp;
	int dmg;
	int dodge;
public:
	int static team;
	int static x_;
	int static y_;
	int static redTeam;
	int static blueTeam;


	void SetHp(int a);

	void SetDmg(int a);

	void SetDodge(int a);

	int GetHp();

	int GetDmg();

	int GetDodge();


	void Attack(Unit* army);
	

	bool Defend(int d);

};

