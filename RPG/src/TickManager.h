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

void Tick()
{
	/*TODO Tick główny, metoda wywoływana w momencie prawdziwego ticku (?)
	 * Sterowanie tickami? może kolejność ładowania.
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
