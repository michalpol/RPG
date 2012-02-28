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
typedef string String;


//HELPERS
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
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
	char* b;
	//TODO znaleźć lepsze rozwiązanie
	sprintf(b,"%.3i",percent);
	a+=b;
	a+="%";
	return a;
}

//METHODS
void DrawSideBarBasic(GameState gs)
{
	srand(gs.GetStateTimestamp());
	//TODO dummy
	gotoxy(0,0);
	printf("Str: %i\n",gs.GetStr());
	gotoxy(0,1);
	string a = Bar((gs.GetStr()*100)/18);
	cout<<a;
	gotoxy(0,2);
	printf("Agi: %i\n",gs.GetAgi());
	gotoxy(0,3);
	a = Bar((gs.GetAgi()*100)/18);
	cout<<a;
	gotoxy(0,4);
	printf("Con: %i\n",gs.GetCon());
	gotoxy(0,5);
	a = Bar((gs.GetCon()*100)/18);
	cout<<a;
	gotoxy(0,6);
	printf("Int: %i\n",gs.GetInt());
	gotoxy(0,7);
	a = Bar((gs.GetInt()*100)/18);
	cout<<a;
	gotoxy(0,8);
	printf("Pow: %i\n",gs.GetPow());
	gotoxy(0,9);
	a = Bar((gs.GetPow()*100)/18);
	cout<<a;
	gotoxy(0,10);
	printf("Cha: %i\n",gs.GetCha());
	gotoxy(0,11);
	a = Bar((gs.GetCha()*100)/18);
	cout<<a;
	gotoxy(0,12);
	printf("Random: %i\n",rand());
	gotoxy(0,13);
	printf("Seed: %i\n",gs.GetStateTimestamp());
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
#endif /* DISPLAY_H_ */
