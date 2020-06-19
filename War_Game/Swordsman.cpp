#include "libs.h"
#include "Swordsman.h"

Swordsman::Swordsman()
{
	this->SetHp(15);
	this->SetDmg(5);
	this->SetDodge(60);
}

void Swordsman::GetSword()
{
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  /\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "<====>" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  ||" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  \\/" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "| hp - " << this->GetHp() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "| dmg - " << this->GetDmg() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "| dodge - " << this->GetDodge() << endl;
	cout << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
}