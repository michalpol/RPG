package org.TI2.game.RPG;

public class GamePlayer {
	public double getMvmtSpd() {
		return MvmtSpd;
	}
	public void setMvmtSpd(double mvmtSpd) {
		MvmtSpd = mvmtSpd;
	}
	//GameStatePlayerBasic
	String Name;
	short HP;
	short MaxHP;
	short MP;
	short MaxMP;
	int XP;
	int GP;
	byte lvl;
	short InvContents[][];//[0] - ID itemu [1]-iloœæ [2]- uszkodzenie
	short SpellEffects[];
	//short Hunger; Atrybut do rozwa¿enia
	//short Age;Atrybut do rozwa¿enia
	//GameStatePlayerAttributes
	short freeATP;//Attribute points to distribute
	short Str;//Si³a
	short Agi;//Zrêcznoœæ
    short Con;//Wytrzyma³oœæ ---HP---
	short Int;//Intelekt ---MP---
	short Pow;//Roztropnoœæ
	short Cha;//Charyzma
	//GameStatePlayerQuestState
	byte MainQuest;//Id questa g³ównego
	byte SideQuest;//Id questa pobocznego
	double MvmtSpd=1.000;//Prêdkoœæ w ruchach na turê
	public String getName() {
		return Name;
	}
	public GamePlayer(String name, short hP, short maxHP, short mP,
			short maxMP, int xP, int gP, byte lvl, short[][] invContents,
			short[] spellEffects, short freeATP, short str, short agi,
			short con, short intlct, short pow, short cha, byte mainQuest,
			byte sideQuest, double mvmtSpd) {
		super();
		Name = name;
		HP = hP;
		MaxHP = maxHP;
		MP = mP;
		MaxMP = maxMP;
		XP = xP;
		GP = gP;
		this.lvl = lvl;
		InvContents = invContents;
		SpellEffects = spellEffects;
		this.freeATP = freeATP;
		Str = str;
		Agi = agi;
		Con = con;
		Int = intlct;
		Pow = pow;
		Cha = cha;
		MainQuest = mainQuest;
		SideQuest = sideQuest;
		MvmtSpd = mvmtSpd;
	}
	public void setName(String name) {
		Name = name;
	}
	public short getHP() {
		return HP;
	}
	public void setHP(short hP) {
		HP = hP;
	}
	public short getMaxHP() {
		return MaxHP;
	}
	public void setMaxHP(short maxHP) {
		MaxHP = maxHP;
	}
	public short getMP() {
		return MP;
	}
	public void setMP(short mP) {
		MP = mP;
	}
	public short getMaxMP() {
		return MaxMP;
	}
	public void setMaxMP(short maxMP) {
		MaxMP = maxMP;
	}
	public int getXP() {
		return XP;
	}
	public void setXP(int xP) {
		XP = xP;
	}
	public int getGP() {
		return GP;
	}
	public void setGP(int gP) {
		GP = gP;
	}
	public byte getLvl() {
		return lvl;
	}
	public void setLvl(byte lvl) {
		this.lvl = lvl;
	}
	public short[][] getInvContents() {
		return InvContents;
	}
	public void setInvContents(short[][] invContents) {
		InvContents = invContents;
	}
	public short[] getSpellEffects() {
		return SpellEffects;
	}
	public void setSpellEffects(short[] spellEffects) {
		SpellEffects = spellEffects;
	}
	public short getFreeATP() {
		return freeATP;
	}
	public void setFreeATP(short freeATP) {
		this.freeATP = freeATP;
	}
	public short getStr() {
		return Str;
	}
	public void setStr(short str) {
		Str = str;
	}
	public short getAgi() {
		return Agi;
	}
	public void setAgi(short agi) {
		Agi = agi;
	}
	public short getCon() {
		return Con;
	}
	public void setCon(short con) {
		Con = con;
	}
	public short getInt() {
		return Int;
	}
	public void setInt(short i) {
		Int = i;
	}
	public short getPow() {
		return Pow;
	}
	public void setPow(short pow) {
		Pow = pow;
	}
	public short getCha() {
		return Cha;
	}
	public void setCha(short cha) {
		Cha = cha;
	}
	public byte getMainQuest() {
		return MainQuest;
	}
	public void setMainQuest(byte mainQuest) {
		MainQuest = mainQuest;
	}
	public byte getSideQuest() {
		return SideQuest;
	}
	public void setSideQuest(byte sideQuest) {
		SideQuest = sideQuest;
	}
}
