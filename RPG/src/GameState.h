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
const byte MinAttrib =  3;
const byte MaxAttrib = 18;
const byte attr = MaxAttrib-MinAttrib+1;
const byte MaxLevel = 99;
class GameState
{
	//POLA OBIEKTU
	//GameStateItSelf
	int  StateTimestamp;
	int  StateTick;
	//GameStatePlayerBasic
	string Name;
	short HP;
	short MaxHP;
	short MP;
	short MaxMP;
	int XP;
	int GP;
	byte lvl;
	short InvContents[50][3];//[0] - ID itemu [1]-ilość [2]- uszkodzenie
public:	short SpellEffects[50];
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
	short NPCs[1][4];//[0] - X [1] - Y [2] - ID NPC [3] - HP
	//METODY OBIEKTU
	public:
	GameState(int seed);
    short GetAgi() const;
    short GetCha() const;
    short GetCon() const;
    int GetGP() const;
    short GetHP() const;
    short GetInt() const;
    short GetMP() const;
    byte GetMainQuest() const;
    GameMap GetMap() const;
    string GetName() const;
    short GetPow() const;
    byte GetSideQuest() const;
    int GetStateTick() const;
    int GetStateTimestamp() const;
    short GetStr() const;
    int GetXP() const;
    short GetfreeATP() const;
    byte Getlvl() const;
    void SetAgi(short  Agi);
    void SetCha(short  Cha);
    void SetCon(short  Con);
    void SetGP(int Gp);
    void SetHP(short  Hp);
    void SetInt(short  Int);
    void SetMP(short  Mp);
    void SetMainQuest(byte MainQuest);
    void SetMap(GameMap Map);
    void SetName(string Name);
    void SetPow(short  Pow);
    void SetSideQuest(byte SideQuest);
    void SetStateTick(int StateTick);
    void SetStateTimestamp(int StateTimestamp);
    void SetStr(short  Str);
    void SetXP(int Xp);
    void SetfreeATP(short  FreeAtp);
    void Setlvl(byte Lvl);
    bool LevelUp();
    bool SkillUpgrade(int SkillCode);
    void UpdateHPMP();
    bool Damage(int dmg);
    void Heal(int hp);
    void Affect(byte atr,short pwr);
    short GetMaxMP();
    short GetMaxHP();
};

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

int GameState::GetGP() const
{
    return GP;
}

short GameState::GetHP() const
{
    return HP;
}

short GameState::GetInt() const
{
    return Int;
}

short GameState::GetMP() const
{
    return MP;
}

byte GameState::GetMainQuest() const
{
    return MainQuest;
}

GameMap GameState::GetMap() const
{
    return WMap;
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

int GameState::GetXP() const
{
    return XP;
}

short GameState::GetfreeATP() const
{
    return freeATP;
}

byte GameState::Getlvl() const
{
    return lvl;
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

void GameState::SetGP(int Gp)
{
    GP = Gp;
}

void GameState::SetHP(short  Hp)
{
    HP = Hp;
}

void GameState::SetInt(short  Int)
{
    this->Int = Int;
}


void GameState::SetMP(short  Mp)
{
    MP = Mp;
}

void GameState::SetMainQuest(byte MainQuest)
{
    this->MainQuest = MainQuest;
}

void GameState::SetMap(GameMap Map)
{
    WMap = Map;
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

void GameState::SetXP(int Xp)
{
    XP = Xp;
}

void GameState::SetfreeATP(short  FreeAtp)
{
    freeATP = FreeAtp;
}

void GameState::Setlvl(byte Lvl)
{
    lvl = Lvl;
}

bool GameState::LevelUp()
{
	if(lvl<MaxLevel)
	{
		freeATP += LvlUpFreeATP;
		UpdateHPMP();
		return true;
	}
	else
	{
		return false;
	}

}

bool GameState::SkillUpgrade(int SkillCode)
{
	if(freeATP>=1)
	{
	switch(SkillCode)
	{
		case 0:
			Str+=1;
			freeATP-=1;
			break;
		case 1:
			Agi+=1;
			freeATP-=1;
			break;
		case 2:
			Con+=1;
			freeATP-=1;
			break;
		case 3:
			Int+=1;
			freeATP-=1;
			break;
		case 4:
			Pow+=1;
			freeATP-=1;
			break;
		case 5:
			Cha+=1;
			freeATP-=1;
			break;
	}
		return true;
	}
	else
	{
		return false;
	}
}
void GameState::UpdateHPMP()
{
	HP=Con*10;
	MP=Int*10;
}
bool GameState::Damage(int dmg)
{
	HP-=dmg;
	if(HP>0)
	{
		return true;
	}
	else
	{
		return false; //jeżeli śmiertelne zwróć false
	}
}
void GameState::Heal(int hp)
{
	HP+=hp;
	if(HP>MaxHP){HP=MaxHP;}
}
GameState::GameState(int seed)
{
	int a = time(NULL);
	srand(seed);//Inicjalizacja generatora randomizacji seedem równym StateTimestamp
	this->StateTimestamp    = a;
	this->StateTick         = 0;
	this->Name              = "Player";
	srand( a % (rand() % 8564) );
	this->Str               = rand() % attr + MinAttrib;
	srand( a % (rand() % 1354) );
	this->Agi               = rand() % attr + MinAttrib;
	srand( a % (rand() % 4284) );
	this->Con               = rand() % attr + MinAttrib;
	srand( a % (rand() % 2088) );
	this->Int               = rand() % attr + MinAttrib;
	srand( a % (rand() % 5879) );
	this->Pow               = rand() % attr + MinAttrib;
	srand( a % (rand() % 6842) );
	this->Cha               = rand() % attr + MinAttrib;
	this->HP                = this->Con*10;
	this->MP                = this->Int*10;
	this->MaxHP             = this->Con*10;
	this->MaxMP             = this->Int*10;
	this->XP                = 0;
	this->GP                = rand() % 100 +1;
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
	this->NPCs[0][3]        = 0;
}
void GameState::Affect(byte atr, short pwr)
{
	switch(atr)
	{
		case 0: Str+=pwr; break;
		case 1: Agi+=pwr; break;
		case 2: Con+=pwr; break;
		case 3: Pow+=pwr; break;
		case 4: Int+=pwr; break;
		case 5: Cha+=pwr; break;
		case 6:  HP+=pwr; break;
		case 7:  MP+=pwr; break;
		case 8: lvl+=pwr; break;
	}
}

short GameState::GetMaxMP()
{
	return MaxMP;
}

short GameState::GetMaxHP()
{
	return MaxHP;
}


#endif /* GAMESTATE_H_ */
