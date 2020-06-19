#include "libs.h"
#include "Archer.h"

Archer::Archer()
{
	this->SetHp(14);
	this->SetDmg(4);
	this->SetDodge(40);
}

void Archer::GetArcher()
{

	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "     /|" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "    / |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "   /  |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  /   |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "<------<<" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  \\   |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "   \\  |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "    \\ |" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "     \\|" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | hp - " << this->GetHp() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dmg - " << this->GetDmg() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dodge - " << this->GetDodge() << endl;
	cout << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
}