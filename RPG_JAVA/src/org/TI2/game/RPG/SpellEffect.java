package org.TI2.game.RPG;

public class SpellEffect implements Callable {
	private int ID = 0;
	private String name = "";
	private int Power = 0;
	private int AtrID = 0;
	private int interval = 0;
	
	public boolean PerformEffect(int EffectProcessings)
	{
		int i =0;
		while(i<EffectProcessings)
		{
			//TODO effect processing
		}
		if(i==EffectProcessings)
		{
			return true;
		}
		return false;
	}

	public int getID() {
		return ID;
	}

	public void setID(int iD) {
		ID = iD;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getPower() {
		return Power;
	}

	public void setPower(int power) {
		Power = power;
	}

	public int getAtrID() {
		return AtrID;
	}

	public void setAtrID(int atrID) {
		AtrID = atrID;
	}

	public int getInterval() {
		return interval;
	}

	public void setInterval(int interval) {
		this.interval = interval;
	}

	@Override
	public boolean CallThis(Object args) {
		// TODO Auto-generated method stub
		return false;
	}
}
