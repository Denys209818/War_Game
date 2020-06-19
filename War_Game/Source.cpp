#include "libs.h"
#include "Unit.h"
#include "Swordsman.h"
#include "Archer.h"
#include "Mag.h"
#include "War.h" 



int Unit::team = 0;
int Unit::x_ = 60;
int Unit::y_ = 0;
int Unit::blueTeam = 3;
int Unit::redTeam = 3;



void main() 
{
	srand(time(0));
	Unit** army1 = new Unit*[3];
	Unit** army2 = new Unit*[3];

	FillArmy(army1);
	FillArmy(army2);

	War w(army1, army2);

	while (Unit::blueTeam > 0 && Unit::redTeam > 0) 
	{
	w.ShowArmies();	
	w.Unit1Attack();
	Unit::y_ = 0;
	_getch();
	system("cls");
	w.ShowArmies();
	w.Unit2Attack();
	Unit::y_ = 0;
	_getch();
	system("cls");
	}

	if (Unit::blueTeam == 0) cout << "Team Right is Winner!" << endl;
	else if(Unit::redTeam == 0) cout << "Team Left is Winner!" << endl;

}