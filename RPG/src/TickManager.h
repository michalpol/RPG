/*
 * TickManager.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef TICKMANAGER_H_
#define TICKMANAGER_H_
#include <windows.h>
#include <cstdio>
#include "GameState.h"
#include "SpellEffect.h"
using namespace std;
typedef string String;


void TickFight()
{
	/*TODO tick walki
	 * tutaj obliczane są parametry walki
	 */
}

void TickMove()
{
	/*TODO tick ruchu
	 * tutaj obliczana jest nowa pozycja gracza
	 */
}

void TickItemPickup()
{
	/*TODO tick podnoszenia przedmiotu
	 * tutaj obliczana jest zawartość ekwipunku po podniesieniu przedmiotu
	 */
}

void TickItemDrop()
{
	/*TODO tick upuszczenia przedmiotu
	 * tutaj obliczana jest zawartość ekwipunku po upuszczeniu przedmiotu
     */
}

void TickQuestCalculateMain()
{
	/*TODO tick Przeliczenia questa głównego
	 * Tutaj system oblicza % spełnienia wymagań questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamknięciu ciągu zadań
	 */
}
void TickQuestCalculateSide()
{
	/*TODO tick Przeliczenia questa pobocznego
	 * Tutaj system oblicza % spełnienia wymagań questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamknięciu ciągu zadań
	 */
}

void TickMoveNPC()
{
	/*TODO tick ruchu NPC
	 * tutaj dokonuje się obliczeń ruchu NPC i potworów, zwracana jest tablica
	 * int[IDNPC]:X,Y o wymiarach maksymalnych 500x2
	 */
}

void TickCastSpell()
{
	/*TODO Tick rzucania zaklęcia
	 *
	 */
}

void TickSpellEffectEffect(byte target,GameState gs)
{
	switch(target)
	{
		case 0:
			for (unsigned short i=0;i<sizeof(gs.SpellEffects);i++){
			short Effect = gs.SpellEffects[i];
			SpellEffect dictionary;
			if(dictionary.IsSpellEffect(Effect))
			{
				const short pwra = dictionary.Getpower(Effect);
				const string atra=dictionary.Getattrib(Effect);
				short pwr=pwra;
				string atr=atra;
				byte aaa=0;
		if(atr=="Str"){aaa=0;}
		if(atr== "Agi"){aaa=1;}
		if(atr== "Con"){aaa=2;}
		if(atr== "Pow"){aaa=3;}
		if(atr== "Int"){aaa=4;}
		if(atr== "Cha"){aaa=5;}
		if(atr== "HP"){aaa=6;}
		if(atr== "MP"){aaa=7;}
		if(atr== "lvl"){aaa=8;}
				gs.Affect(aaa,pwr);
			}


		}break;//player
		default: break;
	}
}

void Tick(GameState gs,bool CastSpellTick)
{

	if(CastSpellTick){
	TickCastSpell();}else{
	TickFight();}


	//TODO
	TickSpellEffectEffect(0,gs);
	TickMove();
	TickItemPickup();
	TickItemDrop();
	TickQuestCalculateMain();
	TickQuestCalculateSide();
	TickMoveNPC();


	gs.SetStateTick(gs.GetStateTick()+1);
	gs.SetStateTimestamp(time(NULL));
}

#endif /* TICKMANAGER_H_ */
