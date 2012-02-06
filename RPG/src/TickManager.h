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
	 * tutaj obliczane s¹ parametry walki
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
	 * tutaj obliczana jest zawartoœæ ekwipunku po podniesieniu przedmiotu
	 */
}

void TickItemDrop()
{
	/*TODO tick upuszczenia przedmiotu
	 * tutaj obliczana jest zawartoœæ ekwipunku po upuszczeniu przedmiotu
     */
}

void TickQuestCalculateMain()
{
	/*TODO tick Przeliczenia questa g³ównego
	 * Tutaj system oblicza % spe³nienia wymagañ questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamkniêciu ci¹gu zadañ
	 */
}
void TickQuestCalculateSide()
{
	/*TODO tick Przeliczenia questa pobocznego
	 * Tutaj system oblicza % spe³nienia wymagañ questa i ewentualnie usuwa go
	 * z listy i daje nagrody po zamkniêciu ci¹gu zadañ
	 */
}

void TickMoveNPC()
{
	/*TODO tick ruchu NPC
	 * tutaj dokonuje siê obliczeñ ruchu NPC i potworów, zwracana jest tablica
	 * int[IDNPC]:X,Y o wymiarach maksymalnych 500x2
	 */
}

void Tick()
{
	/*TODO Tick g³ówny, metoda wywo³ywana w momencie prawdziwego ticku (?)
	 * Sterowanie tickami? mo¿e kolejnoœæ ³adowania.
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
