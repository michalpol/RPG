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
	int  StateTimestamp; //TODO przykładowe pole
	int  StateTick; //TODO przykładowe pole
	//METODY OBIEKTU
	public:
	GameState()
	{
		//TODO przykładowy konstruktor
		this->StateTimestamp = 0;
		this->StateTick      = 0;
	}
	public:
	GameState(int StateTimestamp,int StateTick)
	{
		//TODO przykładowy konstruktor alternatywny
		this->StateTimestamp = StateTimestamp;
		this->StateTick      = StateTick;
	}

	bool ChangeSomething()
	{
		/*Metoda szablonowa do zmiany danej w obiekcie
		 * zwraca true jeżeli sukces
		 */
		return false;
	}
	bool GetSomething()
	{
		/*Metoda szablonowa do wczytania danej z obiektu
		 * zwraca wartość (tutaj bool) jeśli obiekt takową ma,
		 * w przeciwnym wypadku powinno zwrócić inną stosowną wartość
		 * (CZYLI TAKĄ JAK W ŚWIEŻO ROZPOCZĘTEJ SESJI)
		 */
		return false;
	}
};


#endif /* GAMESTATE_H_ */
