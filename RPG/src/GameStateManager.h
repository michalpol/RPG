/*
 * GameStateManager.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef GAMESTATEMANAGER_H_
#define GAMESTATEMANAGER_H_
#include "GameState.h"

GameState LoadGameState()
{
	/*TODO funkcja wczytania stanu gry
	 * P�niej zwr�ci
	 * A)Kilku wymiarow� tablic� reprezentuj�c� stan gry
	 * lub B)Obiekt klasy GameState
	 */
	return GameState();
}

bool SaveGameState()
{
	/*TODO funkcja zapisu stanu gry
	 * Zwraca true gdy zapis pomy�lny
	 */
	return false;
}

#endif /* GAMESTATEMANAGER_H_ */
