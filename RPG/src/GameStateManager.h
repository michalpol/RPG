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
	 * PóŸniej zwróci
	 * A)Kilku wymiarow¹ tablicê reprezentuj¹c¹ stan gry
	 * lub B)Obiekt klasy GameState
	 */
	return GameState();
}

bool SaveGameState()
{
	/*TODO funkcja zapisu stanu gry
	 * Zwraca true gdy zapis pomyœlny
	 */
	return false;
}

#endif /* GAMESTATEMANAGER_H_ */
