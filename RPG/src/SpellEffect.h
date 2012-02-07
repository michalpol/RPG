/*
 * SpellEffect.h
 *
 *  Created on: 07-02-2012
 *      Author: Michalpol, Bleake
 */

#ifndef SPELLEFFECT_H_
#define SPELLEFFECT_H_

class SpellEffect
{
	const static short maxId = 5; //max id spella
	const static short durations[maxId+1];//czasy trwania spella
	const static short power[maxId+1];//moc spella
	const static string attrib[maxId+1];//atrybut na który spell wpływa

	/*
	 * @params Spell effect id
	 * @return Boolean according to question is this valid spell effect?
	 */
	bool IsSpellEffect(short id)
	{
		if((id<=this->maxId) && (id>=0))
		{
			return true;
		}
		return false;
	}
};


#endif /* SPELLEFFECT_H_ */
