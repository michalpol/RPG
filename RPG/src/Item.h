/*
 * Item.h
 *
 *  Created on: 07-02-2012
 *      Author: Michalpol, Bleake
 */

#ifndef ITEM_H_
#define ITEM_H_

class Item
{
	static short maxDmg[1];
	//TODO stub
	short GetMaxDmg(short id)
	{
		return this->maxDmg[id];
	}
};


#endif /* ITEM_H_ */
