/*
 * GameStateManager.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef GAMESTATEMANAGER_H_
#define GAMESTATEMANAGER_H_
#include "GameState.h"

GameState LoadGameState(string path)
{
	/*TODO funkcja wczytania stanu gry
	 * Później zwróci
	 * A)Kilku wymiarową tablicę reprezentującą stan gry
	 * lub B)Obiekt klasy GameState
	 */
	return GameState();
}

bool SaveGameState(GameState gs, string path)
{
	/*TODO funkcja zapisu stanu gry
	 * Zwraca true gdy zapis pomyślny
	 */
	return false;
}

#endif /* GAMESTATEMANAGER_H_ */
