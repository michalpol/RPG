package org.TI2.game.RPG;

public class GameState {
	//POLA OBIEKTU
	//GameStateItSelf
	int  StateTimestamp;
	int  StateTick;
	GamePlayer player = null;
	short NPCs[][];//[0] - X [1] - Y [2] - ID NPC [3] - HP
	GameMap Map = null;
	public GameState(GamePlayer player, GameMap map) {
		super();
		this.player = player;
		Map = map;
	}
}
