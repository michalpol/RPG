/*
 * TickManager.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef TICKMANAGER_H_
#define TICKMANAGER_H_

void TickFight()
{
	/*TODO tick walki
	 * tutaj obliczane s� parametry walki
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
	 * tutaj obliczana jest zawarto�� ekwipunku po podniesieniu przedmiotu
	 */
}

void TickItemDrop()
{
	/*TODO tick upuszczenia przedmiotu
	 * tutaj obliczana jest zawarto�� ekwipunku po upuszczeniu przedmiotu
     */
}

void TickQuestCalculateMain()
{
	/*TODO tick Przeliczenia questa g��wnego
	 * Tutaj system oblicza % spe�nienia wymaga� questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamkni�ciu ci�gu zada�
	 */
}
void TickQuestCalculateSide()
{
	/*TODO tick Przeliczenia questa pobocznego
	 * Tutaj system oblicza % spe�nienia wymaga� questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamkni�ciu ci�gu zada�
	 */
}

void TickMoveNPC()
{
	/*TODO tick ruchu NPC
	 * tutaj dokonuje si� oblicze� ruchu NPC i potwor�w, zwracana jest tablica
	 * int[IDNPC]:X,Y o wymiarach maksymalnych 500x2
	 */
}

void Tick()
{
	/*TODO Tick g��wny, metoda wywo�ywana w momencie prawdziwego ticku (?)
	 * Sterowanie tickami? mo�e kolejno�� �adowania.
	 */
	TickFight();
	TickMove();
	TickItemPickup();
	TickItemDrop();
	TickQuestCalculateMain();
	TickQuestCalculateSide();
	TickMoveNPC();
}

#endif /* TICKMANAGER_H_ */
