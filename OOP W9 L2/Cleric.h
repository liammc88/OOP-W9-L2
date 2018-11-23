//Brawler.h
//Description: declaration for Cleric class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include"GameCharacter.h"
#include "Weapon.h"

class Cleric : public GameCharacter {
private:
	int pietyLevel_;

public:
	Cleric();
	Cleric(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int pietyLevel);

	void SetPietyLevel(int pietyLevel);
	int GetPietyLevel();

	void PrayFor(GameCharacter &character);
	virtual void Sleep();
	virtual bool Attack(GameCharacter &character);
};