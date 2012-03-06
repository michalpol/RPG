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
    static const short maxId = 5; //max id spella
    static const short durations[maxId + 1]; //czasy trwania spella
    static const short power[maxId + 1]; //moc spella
    static const string attrib[maxId + 1]; //atrybut na który spell wpływa
    /*
	 * @params Spell effect id
	 * @return Boolean according to question is this valid spell effect?
	 */
public:
    bool IsSpellEffect(short  id)
    {
        if((id <= this->maxId) && (id >= 0)){
            return true;
        }
        return false;
    }

    short GetDuration(short  id)
    {
        return durations[id];
    }

    const string Getattrib(int id) ;
    const short Getdurations(int id) ;
    const short Getpower(int id) ;

};
//CRASH Undefined reference, WTF!?
/*const string SpellEffect::Getattrib(int id)
{
    return attrib[id];
}

const short SpellEffect::Getdurations(int id)
{
    return durations[id];
}

const short SpellEffect::Getpower(int id)
{
    return power[id];
}
*/






#endif /* SPELLEFFECT_H_ */
