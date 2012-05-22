package org.TI2.game.RPG;

public class Dialog {
	String MainText = "";
	String Resp1 = "";
	String Resp2 = "";
	String Resp3 = "";
	String Resp4 = "";
	String Resp5 = "";
	int DialogueID = 0;
	//Dialog -x2-> DialogSet -all-> DialogFrame -all-> DialogSetup
	public Dialog(String mainText, String resp1, String resp2, String resp3,
			String resp4, String resp5, int dialogueID) {
		super();
		MainText = mainText;
		Resp1 = resp1;
		Resp2 = resp2;
		Resp3 = resp3;
		Resp4 = resp4;
		Resp5 = resp5;
		DialogueID = dialogueID;
	}
}
