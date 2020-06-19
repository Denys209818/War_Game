#include "libs.h"
#include "War.h"
#include"Swordsman.h"
#include "Archer.h"
#include "Mag.h"

War::War(Unit** army1, Unit** army2)
{
	this->army1 = army1;
	this->army2 = army2;
}

void War::ShowArmies()
{
	int s;
	//Show fitrst army
	Unit::team++;
	for (int i = 0; i < Unit::blueTeam; i++)
	{
		s = army1[i]->GetDodge();
		switch (s)
		{
		case (int)Dodges::Swordsman:
		{
			((Swordsman*)army1[i])->GetSword();
			break;
		}
		case (int)Dodges::Archer:
		{
			((Archer*)army1[i])->GetArcher();
			break;
		}
		case (int)Dodges::Mag:
		{
			((Mag*)army1[i])->GetMagier();
			break;
		}
		}
	}

	//Show Last Army
	Unit::team++;
	for (int i = 0; i < Unit::redTeam; i++)
	{
		s = army2[i]->GetDodge();
		switch (s)
		{
		case (int)Dodges::Swordsman:
		{
			((Swordsman*)army2[i])->GetSword();
			break;
		}
		case (int)Dodges::Archer:
		{
			((Archer*)army2[i])->GetArcher();
			break;
		}
		case (int)Dodges::Mag:
		{
			((Mag*)army2[i])->GetMagier();
			break;
		}
		}
	}
}

void War::Unit1Attack()
{
	if (Unit::redTeam > 0 && Unit::blueTeam > 0)
	{
		//BlueTeam
		int u = (rand() % Unit::blueTeam - 1) + 1;
		int u2 = (rand() % Unit::redTeam - 1) + 1;
		army1[u]->Attack(army2[u2]);
		if (army2[u2]->GetHp() <= 0)
		{
			Unit** temp = new Unit * [Unit::redTeam - 1];
			for (int i = 0; i < u2; i++)
			{
				temp[i] = army2[i];
			}

			for (int i = u2 + 1; i < Unit::redTeam; i++)
			{
				temp[i - 1] = army2[i];
			}
			delete[] army2[u2];
			Unit::redTeam--;
			this->army2 = temp;
		}
	}
}

void War::Unit2Attack()
{
	if (Unit::redTeam > 0 && Unit::blueTeam > 0)
	{
		int u = (rand() % Unit::redTeam - 1) + 1;
		int u2 = (rand() % Unit::blueTeam - 1) + 1;
		army2[u]->Attack(army1[u2]);
		if (army1[u2]->GetHp() <= 0)
		{
			Unit** temp = new Unit * [Unit::blueTeam - 1];
			for (int i = 0; i < u2; i++)
			{
				temp[i] = army1[i];
			}

			for (int i = u2 + 1; i < Unit::blueTeam; i++)
			{
				temp[i - 1] = army1[i];
			}
			delete army1[u2];
			Unit::blueTeam--;

			this->army1 = temp;
		}
	}
}