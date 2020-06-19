#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include "Unit.h"

using namespace std;

void SetPos(int x, int y);

void FillArmy(Unit** a);

enum class Types { Swordsman = 1, Archer, Mag };
enum class Dodges { Swordsman = 60, Archer = 40, Mag = 30 };

