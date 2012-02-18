//============================================================================
// Name        : RPG.cpp
// Author      : Michalpol, Bleake, NaNO3
// Version     : 2 (Kolejny numer edycji)
// ConfVersion : 0 (Wersja konfiguracji gry - wersja pliku ustawień, mapy itd.)
// Meeting     : 1 (Kolejny numer Spotkania)
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

	//Kod testujący metody i generatory dla GameState
	GameState gs = GameState();
	srand(gs.GetStateTimestamp());
	DrawSideBarBasic(gs);
	printf("%i\n",gs.GetStr());
	printf("%i\n",gs.GetAgi());
	printf("%i\n",gs.GetCon());
	printf("%i\n",gs.GetInt());
	printf("%i\n",gs.GetPow());
	printf("%i\n",gs.GetCha());
	printf("%i\n",gs.GetStr()+gs.GetAgi()+gs.GetCon()+gs.GetInt()+gs.GetPow()+gs.GetCha());
	printf("%i\n",rand());
	system("pause");

	//TODO Kod Testujący dla TickManager
	//TODO Kod Testujący dla GameStateManager
}
