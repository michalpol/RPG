/*
 * GameState.h
 *
 *  Created on: 06-02-2012
 *      Author: Michalpol
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_

class GameState
{
	//POLA OBIEKTU
	int  StateTimestamp; //TODO przyk�adowe pole
	int  StateTick; //TODO przyk�adowe pole
	//METODY OBIEKTU
	public:
	GameState()
	{
		//TODO przyk�adowy konstruktor
		this->StateTimestamp = 0;
		this->StateTick      = 0;
	}
	public:
	GameState(int StateTimestamp,int StateTick)
	{
		//TODO przyk�adowy konstruktor alternatywny
		this->StateTimestamp = StateTimestamp;
		this->StateTick      = StateTick;
	}

	bool ChangeSomething()
	{
		/*Metoda szablonowa do zmiany danej w obiekcie
		 * zwraca true je�eli sukces
		 */
		return false;
	}
	bool GetSomething()
	{
		/*Metoda szablonowa do wczytania danej z obiektu
		 * zwraca warto�� (tutaj bool) je�li obiekt takow� ma,
		 * w przeciwnym wypadku powinno zwr�ci� inn� stosown� warto��
		 * (CZYLI TAK� JAK W �WIE�O ROZPOCZ�TEJ SESJI)
		 */
		return false;
	}
};


#endif /* GAMESTATE_H_ */
