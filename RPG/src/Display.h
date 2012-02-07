/*
 * Display.h
 *
 *  Created on: 07-02-2012
 *      Author: Michalpol, Bleake
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <windows.h>
#include <cstdio>

//HELPERS
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//METHODS
void DrawSideBarBasic(GameState gs)
{
	//TODO dummy
	gotoxy(0,0);
	puts("O");
	gotoxy(1,0);
	puts("K");
}
void DrawSideBarAttributes(GameState gs)
{
	//TODO dummy
}
void DrawMainView()
{
	//TODO dummy
}
void DrawMenu()
{
	//TODO dummy
}
void DrawEquipmentWindow()
{
	//TODO dummy
}
void DrawDialogueWindow()
{
	//TODO dummy
}
/*
 * @params percent -- percentage to fill
 * @return string with 20 symbol bar (excl. "[" and "]")
 */
string Bar(byte percent)
{
	byte i =0;
	string a="[";
	while (i<(percent/5))
	{
		a+="#";
		i++;
	}
	while (i<20)
	{
		a+=" ";
		i++;
	}
	a+="]";
	return a;
}
#endif /* DISPLAY_H_ */
