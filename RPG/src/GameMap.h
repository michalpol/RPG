/*
 * GameMap.h
 *
 *  Created on: 07-02-2012
 *      Author: Michalpol, Bleake
 */

#ifndef GAMEMAP_H_
#define GAMEMAP_H_

class GameMap
{
	//TODO stub
	short Map[100][100];
	unsigned int seed;//=1234567890;
	short spawnx;//=0;
	short spawny;//=0;
	short Spots[50][3];//[0] - X [1] - Y [2] -Id klasy miejsca
	short Areas[1][5];//[0] - X1 [1] - Y1 [2] -X2 [3] - Y2 [4] - Id klasy obszaru
	short GameObjects[1][3];//[0] - X [1] - Y [2] -Id klasy obektu
};


#endif /* GAMEMAP_H_ */
