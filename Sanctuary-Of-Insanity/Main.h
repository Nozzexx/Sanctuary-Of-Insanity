#pragma once

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <Windows.h>

#include "Player.h"
#include "CharacterCreator.h"
#include "GameMaster.h"
#include "ScreenManager.h"


void introNotice();
void mainMenu(Player&);
void load();
void save();
