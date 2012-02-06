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
	int  StateTimestamp; //TODO przyk³adowe pole
	int  StateTick; //TODO przyk³adowe pole
	//METODY OBIEKTU
	public:
	GameState()
	{
		//TODO przyk³adowy konstruktor
		this->StateTimestamp = 0;
		this->StateTick      = 0;
	}
	public:
	GameState(int StateTimestamp,int StateTick)
	{
		//TODO przyk³adowy konstruktor alternatywny
		this->StateTimestamp = StateTimestamp;
		this->StateTick      = StateTick;
	}

	bool ChangeSomething()
	{
		/*Metoda szablonowa do zmiany danej w obiekcie
		 * zwraca true je¿eli sukces
		 */
		return false;
	}
	bool GetSomething()
	{
		/*Metoda szablonowa do wczytania danej z obiektu
		 * zwraca wartoœæ (tutaj bool) jeœli obiekt takow¹ ma,
		 * w przeciwnym wypadku powinno zwróciæ inn¹ stosown¹ wartoœæ
		 * (CZYLI TAK¥ JAK W ŒWIE¯O ROZPOCZÊTEJ SESJI)
		 */
		return false;
	}
};


#endif /* GAMESTATE_H_ */
