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
#include <ctime>
#include "GameMap.h"
using namespace std;
typedef unsigned char byte;
time_t timestamper;
const int LvlUpFreeATP = 1;//Stała ilość punktów atrybutów na poziom
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
	//short Hunger; Atrybut do rozważenia
	//short Age;Atrybut do rozważenia
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
	GameState();

    short GetAgi() const;
    short GetCha() const;
    short GetCon() const;
    short GetFreeAtp() const;
    int GetGp() const;
    short GetHp() const;
    short GetInt() const;
    byte GetLvl() const;
    byte GetMainQuest() const;
    GameMap GetMap() const;
    short GetMp() const;
    string GetName() const;
    short GetNpCs() const;
    short GetPow() const;
    byte GetSideQuest() const;
    int GetStateTick() const;
    int GetStateTimestamp() const;
    short GetStr() const;
    int GetXp() const;
    void SetAgi(short  Agi);
    void SetCha(short  Cha);
    void SetCon(short  Con);
    void SetFreeAtp(short  FreeAtp);
    void SetGp(int Gp);
    void SetHp(short  Hp);
    void SetInt(short  Int);
    void SetLvl(byte Lvl);
    void SetMainQuest(byte MainQuest);
    void SetMap(GameMap Map);
    void SetMp(short  Mp);
    void SetName(string Name);
    void SetPow(short  Pow);
    void SetSideQuest(byte SideQuest);
    void SetStateTick(int StateTick);
    void SetStateTimestamp(int StateTimestamp);
    void SetStr(short  Str);
    void SetXp(int Xp);
};

GameState::GameState()
{
	this->StateTimestamp    = time(NULL);
	srand(this->StateTimestamp);//Inicjalizacja generatora randomizacji seedem równym StateTimestamp
	this->StateTick         = 0;
	this->Name              = "Player";
	this->Str               = rand() % 16 + 3;
	this->Agi               = rand() % 16 + 3;
	this->Con               = rand() % 16 + 3;
	this->Int               = rand() % 16 + 3;
	this->Pow               = rand() % 16 + 3;
	this->Cha               = rand() % 16 + 3;
	this->HP                = this->Con*10;
	this->MP                = this->Int*10;
	this->XP                = 0;
	this->GP                = rand() % 100;
	this->lvl               = 1;
	this->InvContents[0][0] = 0;
	this->InvContents[0][1] = 0;
	this->InvContents[0][2] = 0;
	this->SpellEffects[0]   = 0;
	this->freeATP           = 0;
	this->MainQuest         = 0;//Id questa głównego
	this->SideQuest         = 0;//Id questa pobocznego
	this->WMap              = GameMap();
	this->NPCs[0][0]        = 0;
	this->NPCs[0][1]        = 0;
	this->NPCs[0][2]        = 0;
}
short GameState::GetAgi() const
{
    return Agi;
}

short GameState::GetCha() const
{
    return Cha;
}

short GameState::GetCon() const
{
    return Con;
}

short GameState::GetFreeAtp() const
{
    return freeATP;
}

int GameState::GetGp() const
{
    return GP;
}

short GameState::GetHp() const
{
    return HP;
}

short GameState::GetInt() const
{
    return Int;
}

byte GameState::GetLvl() const
{
    return lvl;
}

byte GameState::GetMainQuest() const
{
    return MainQuest;
}

GameMap GameState::GetMap() const
{
    return WMap;
}

short GameState::GetMp() const
{
    return MP;
}

string GameState::GetName() const
{
    return Name;
}

short GameState::GetPow() const
{
    return Pow;
}

byte GameState::GetSideQuest() const
{
    return SideQuest;
}

int GameState::GetStateTick() const
{
    return StateTick;
}

int GameState::GetStateTimestamp() const
{
    return StateTimestamp;
}

short GameState::GetStr() const
{
    return Str;
}

int GameState::GetXp() const
{
    return XP;
}

void GameState::SetAgi(short  Agi)
{
    this->Agi = Agi;
}

void GameState::SetCha(short  Cha)
{
    this->Cha = Cha;
}

void GameState::SetCon(short  Con)
{
    this->Con = Con;
}

void GameState::SetFreeAtp(short  FreeAtp)
{
    freeATP = FreeAtp;
}

void GameState::SetGp(int Gp)
{
    GP = Gp;
}

void GameState::SetHp(short  Hp)
{
    HP = Hp;
}

void GameState::SetInt(short  Int)
{
    this->Int = Int;
}


void GameState::SetLvl(byte Lvl)
{
    lvl = Lvl;
}

void GameState::SetMainQuest(byte MainQuest)
{
    this->MainQuest = MainQuest;
}

void GameState::SetMap(GameMap Map)
{
    WMap = Map;
}

void GameState::SetMp(short  Mp)
{
    MP = Mp;
}

void GameState::SetName(string Name)
{
    this->Name = Name;
}


void GameState::SetPow(short  Pow)
{
    this->Pow = Pow;
}

void GameState::SetSideQuest(byte SideQuest)
{
    this->SideQuest = SideQuest;
}


void GameState::SetStateTick(int StateTick)
{
    this->StateTick = StateTick;
}

void GameState::SetStateTimestamp(int StateTimestamp)
{
    this->StateTimestamp = StateTimestamp;
}

void GameState::SetStr(short  Str)
{
    this->Str = Str;
}

void GameState::SetXp(int Xp)
{
    XP = Xp;
}




#endif /* GAMESTATE_H_ */
