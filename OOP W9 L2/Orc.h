//Orc.h
//Description: declaration for Orc class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include"GameCharacter.h"
#include "Weapon.h"

class Orc : public GameCharacter {
private:
	int ferociousness_;
	int strength_;

public:
	Orc();
	Orc(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int ferociousness, int strength);

	void SetFerociousness(int ferociousness);
	int GetFerociousness();
	void SetStrength(int strength);
	int GetStrength();

	void Scream(GameCharacter &character);
	virtual void Sleep();
	virtual bool Attack(GameCharacter &character);
};