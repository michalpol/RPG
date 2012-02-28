//============================================================================
// Name        : RPG.cpp
// Author      : Michalpol, Bleake, NaNO3
// Version     : 3 (Kolejny numer edycji)
// ConfVersion : 0 (Wersja konfiguracji gry - wersja pliku ustawień, mapy itd.)
// Meeting     : 2 (Kolejny numer Spotkania)
// Copyright   : -
// Description : Główna aplikacja gry - wątek sterujący wyświetlaniem
//============================================================================

//INCLUDES HERE
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "TickManager.h"
#include "GameStateManager.h"
#include "Display.h"
#include "SpellEffect.h"
#include "Item.h"
#include "Quest.h"

//NAMESPACES HERE
using namespace std;

//VARIABLES HERE

//FUNCTIONS HERE
int main() {
//TODO dodać właściwy kod gry

	GameState gs = GameState();
	DrawSideBarBasic(gs);
	system("pause");
	//TODO Kod Testujący dla TickManager
	//TODO Kod Testujący dla GameStateManager
}
