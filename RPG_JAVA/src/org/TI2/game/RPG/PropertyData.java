package org.TI2.game.RPG;

public class PropertyData {
	private int PropID = 0;
	private int PropEffectID = 0;
	private boolean ComboEffect = false;//Many effects in one?
	private SpellEffect[] EffectsOfCombo = null;
	private String comment = "";//Optional property name
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
	public String getComment() {
		return comment;
	}
	public void setComment(String comment) {
		this.comment = comment;
	}
	public void setComboEffect(boolean comboEffect) {
		ComboEffect = comboEffect;
	}
	public boolean isComboEffect() {
		return ComboEffect;
	}
	public void setEffectsOfCombo(SpellEffect[] effectsOfCombo) {
		EffectsOfCombo = effectsOfCombo;
	}
	public SpellEffect[] getEffectsOfCombo() {
		return EffectsOfCombo;
	}
	
}
