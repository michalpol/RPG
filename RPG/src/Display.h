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
	if(percent>100){a="ERR: >100%"; return a;}
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
	//gotoxy(0,0);
	printf("HP: %i/%i\n",gs.GetHP(),gs.GetMaxHP());
	//gotoxy(0,1);
	string a = Bar((gs.GetHP()*100)/gs.GetMaxHP());
	cout<<a<<endl;
	//gotoxy(0,2);
	printf("MP: %i/%i\n",gs.GetMP(),gs.GetMaxMP());
	//gotoxy(0,3);
	a = Bar((gs.GetMP()*100)/gs.GetMaxMP());
	cout<<a<<endl;
	//gotoxy(0,4);
	cout<<"Str: "<<gs.GetStr()<<endl;
	cout<<"Agi: "<<gs.GetAgi()<<endl;
	cout<<"Int: "<<gs.GetInt()<<endl;
	cout<<"Pow: "<<gs.GetPow()<<endl;
	cout<<"Con: "<<gs.GetCon()<<endl;
	cout<<"Cha: "<<gs.GetCha()<<endl;
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
