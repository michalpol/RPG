package org.TI2.game.RPG;

import java.util.HashMap;

public class EffectTrigger {
	private int TriggerID = 0;
	private boolean Triggered = false;
	private HashMap<Integer,Callable[]> registeredTriggers = new HashMap<Integer,Callable[]>();
	public int getTriggerID() {
		return TriggerID;
	}
	public void setTriggerID(int triggerID) {
		TriggerID = triggerID;
	}
	public boolean isTriggered() {
		return Triggered;
	}
	public void setTriggered(boolean triggered) {
		Triggered = triggered;
	}
	public void triggerEffect(int TriggerID, int times, boolean stayTriggered,Object argums)
	{
		if(stayTriggered)
		{
			switch(TriggerID)
			{
				case 0 : //ta sama procedura dla ka¿dej wartoœci prócz default (b³êdu)
					Callable[] call = registeredTriggers.get(0);
					for (Callable calll : call)
					{
						calll.CallThis(argums);
					}
					break;
				default : System.out.println("ERROR: Unknown TriggerID used"); break;
			}
			this.Triggered=true;
		}
		else
		{
			
			this.Triggered=false;
		}
	}
	public HashMap<Integer, Callable[]> getRegisteredTriggers() {
		return registeredTriggers;
	}
	public void setRegisteredTriggers(
			HashMap<Integer, Callable[]> registeredTriggers) {
		this.registeredTriggers = registeredTriggers;
	}
	public void registerTrigger(Callable trigger,int triggerid)
	{
		Callable[] triggers = this.registeredTriggers.get(triggerid);
		triggers[triggers.length]=trigger;
		this.registeredTriggers.put(triggerid, triggers);
	}
}
