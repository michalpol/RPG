/*
 * GameState.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol, Bleake, NaNO3
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_
#include <string>
#include <cstdlib>
#include <cstdio>
#include "GameMap.h"
using namespace std;
typedef unsigned char byte;

class GameState
{
	//POLA OBIEKTU
	//GameStateItSelf
	int  StateTimestamp;
	int  StateTick;
	//GameStatePlayerBasic
	string Name;
	short HP;
	short MP;
	int XP;
	int GP;
	byte lvl;
	short InvContents[50][3];//[0] - ID itemu [1]-ilość [2]- uszkodzenie
	short SpellEffects[50];
	/*
	 * short Hunger;
	 * short Age;
	 */
	//GameStatePlayerAttributes
	short freeATP;//Attribute points to distribute
	short Str;//Siła
	short Agi;//Zręczność
	short Con;//Wytrzymałość ---HP---
	short Int;//Intelekt ---MP---
	short Pow;//Roztropność
	short Cha;//Charyzma
	//GameStatePlayerQuestState
	byte MainQuest;//Id questa głównego
	byte SideQuest;//Id questa pobocznego
	//GameWorld
	GameMap WMap;
	short NPCs[1][3];//[0] - X [1] - Y [2] - ID NPC
	//METODY OBIEKTU
	public:
	GameState()
	{
		//TODO przykładowy konstruktor
		this->StateTimestamp = 0;
		this->StateTick      = 0;
	}
	public:
	GameState(int StateTimestamp,int StateTick)
	{
		//TODO przykładowy konstruktor alternatywny
		this->StateTimestamp = StateTimestamp;
		this->StateTick      = StateTick;
	}

	bool ChangeSomething()
	{
		/*Metoda szablonowa do zmiany danej w obiekcie
		 * zwraca true jeżeli sukces
		 */
		return false;
	}
	bool GetSomething()
	{
		/*Metoda szablonowa do wczytania danej z obiektu
		 * zwraca wartość (tutaj bool) jeśli obiekt takową ma,
		 * w przeciwnym wypadku powinno zwrócić inną stosowną wartość
		 * (CZYLI TAKĄ JAK W ŚWIEŻO ROZPOCZĘTEJ SESJI)
		 */
		return false;
	}
};


#endif /* GAMESTATE_H_ */
