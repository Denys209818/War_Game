#include"libs.h"
#include "Unit.h"
#include "Swordsman.h"
#include "Archer.h"
#include "Mag.h"
void SetPos(int x, int y)
{
	COORD cPos;
	cPos.X = x;
	cPos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cPos);
}

void FillArmy(Unit** a)
{
	int r = 0;
	for (int i = 0; i < 3; i++)
	{
		r = (rand() % 3) + 1;
		switch (r)
		{
		case (int)Types::Swordsman:
		{
			a[i] = new Swordsman();
			break;
		}
		case (int)Types::Archer:
		{
			a[i] = new Archer();
			break;
		}
		case (int)Types::Mag:
		{
			a[i] = new Mag();
			break;
		}
		}
	}
}