//Brawler.h
//Description: declaration for Brawler class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include"GameCharacter.h"
#include "Weapon.h"

class Brawler : public GameCharacter {
private:
	int punchDamage_;
	int strength_;

public:
	Brawler();
	Brawler(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int punchDamage, int strength);

	void SetPunchDamage(int punchDamage);
	int GetPunchDamage();
	void SetStrength(int strength);
	int GetStrength();

	void Brawl(GameCharacter &character);
	virtual void Sleep();
	virtual bool Attack(GameCharacter &character);
};