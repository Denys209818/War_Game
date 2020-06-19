#include "libs.h"
#include "Mag.h"

Mag::Mag()
{
	this->SetHp(8);
	this->SetDmg(10);
	this->SetDodge(30);
}

void Mag::GetMagier()
{
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " *" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "  \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "   \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "    \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << "     \\\\" << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | hp - " << this->GetHp() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dmg - " << this->GetDmg() << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
	cout << " | dodge - " << this->GetDodge() << endl;
	cout << endl;
	if (Unit::team % 2 == 0) { SetPos(Unit::x_, Unit::y_++); }
}