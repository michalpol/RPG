//============================================================================
// Name        : RPG.cpp
// Author      : Michalpol, Bleake, NaNO3
// Version     : 4 (Kolejny numer edycji)
// ConfVersion : 0 (Wersja konfiguracji gry - wersja pliku ustawień, mapy itd.)
// Meeting     : 3 (Kolejny numer Spotkania)
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
	char aa;
	cin>>aa;
	srand(aa);
	bool aaaa;
	while(true)
	{
	//system("cls");
	GameState gs = GameState(aa);

	aaaa = gs.Damage(time(NULL)% 50 %(rand()%50));
	if(!aaaa){cout<<"DEAD!"<<endl;}
	if(gs.GetHP()>0){DrawSideBarBasic(gs);}
	Sleep(1000);
	}
	//TODO Kod Testujący dla TickManager
	//TODO Kod Testujący dla GameStateManager
}
