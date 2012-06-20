package org.TI2.game.RPG;

public class PropertyDataActivable {
	private int PropID = 0;
	private int PropEffectID = 0;
	private boolean ComboEffect = false;//Many effects in one?
	private SpellEffect[] EffectsOfCombo = null;
	private String comment = "";//Optional property name
	private boolean triggered = false;
	private int activationtime = 0;
	private int cooldown = 0;
	private int duration = 0;
	private boolean targetible = false;
	private int triggerid = 0;
	private int triggersrequired = 0;
	public int getPropID() {
		return PropID;
	}
	public void setPropID(int propID) {
		PropID = propID;
	}
	public int getPropEffectID() {
		return PropEffectID;
	}
	public void setPropEffectID(int propEffectID) {
		PropEffectID = propEffectID;
	}
	public boolean isComboEffect() {
		return ComboEffect;
	}
	public void setComboEffect(boolean comboEffect) {
		ComboEffect = comboEffect;
	}
	public SpellEffect[] getEffectsOfCombo() {
		return EffectsOfCombo;
	}
	public void setEffectsOfCombo(SpellEffect[] effectsOfCombo) {
		EffectsOfCombo = effectsOfCombo;
	}
	public String getComment() {
		return comment;
	}
	public void setComment(String comment) {
		this.comment = comment;
	}
	public boolean isTriggered() {
		return triggered;
	}
	public void setTriggered(boolean triggered) {
		this.triggered = triggered;
	}
	public int getActivationtime() {
		return activationtime;
	}
	public void setActivationtime(int activationtime) {
		this.activationtime = activationtime;
	}
	public int getCooldown() {
		return cooldown;
	}
	public void setCooldown(int cooldown) {
		this.cooldown = cooldown;
	}
	public int getDuration() {
		return duration;
	}
	public void setDuration(int duration) {
		this.duration = duration;
	}
	public boolean isTargetible() {
		return targetible;
	}
	public void setTargetible(boolean targetible) {
		this.targetible = targetible;
	}
	public int getTriggerid() {
		return triggerid;
	}
	public void setTriggerid(int triggerid) {
		this.triggerid = triggerid;
	}
	public int getTriggersrequired() {
		return triggersrequired;
	}
	public void setTriggersrequired(int triggersrequired) {
		this.triggersrequired = triggersrequired;
	}
	
}
