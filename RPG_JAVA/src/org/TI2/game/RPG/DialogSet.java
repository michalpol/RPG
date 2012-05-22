package org.TI2.game.RPG;

public class DialogSet {
	Dialog[] dialogs = null;
	
	public Dialog CallDialog(int id){
		
		return dialogs[id];
	
	}

	public DialogSet(Dialog[] dialogs) {
		super();
		this.dialogs = dialogs;
	}
}


/*
 * Dialog[] dlgs={new Dialog("Q", "a1", "a2", "a3", "a4", "a5", 1),new Dialog("Q", "a1", "a2", "a3", "a4", "a5", 1)};
 *
 *
 *
 *DialogSet dls = new DialogSet(dlgs);
 */


