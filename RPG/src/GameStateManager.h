/*
 * GameStateManager.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef GAMESTATEMANAGER_H_
#define GAMESTATEMANAGER_H_
#include "GameState.h"
#include <iostream>
#include <fstream>
using namespace std;

GameState NewGameState()
{
	return GameState();
}

GameState LoadGameState(char* path)
{
	GameState gs =GameState();
	ifstream ifs;
	ifs.open(path,ios::binary);
	ifs.seekg(0,ios::beg);
	ifs.read((char*)&gs,sizeof(gs));
	return gs;
}

bool SaveGameState(GameState gs, char* path)
{
	ofstream ofs;
	ofs.open(path,ios::binary);
	ofs.seekp(0,ios::beg);
	ofs.write((char*)&gs,sizeof(gs));
	ofs.close();
	return true;
}

#endif /* GAMESTATEMANAGER_H_ */
