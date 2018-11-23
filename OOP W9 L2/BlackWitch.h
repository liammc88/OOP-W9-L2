//BlackWitch.h
//Description: declaration for BlackWitch class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include"GameCharacter.h"
#include "Weapon.h"

class BlackWitch : public GameCharacter {
private:
	int magicProficiency_;
	int darkPower_;

public:
	BlackWitch();
	BlackWitch(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int magicProficiency, int darkPower);

	void SetMagicProficiency(int magicProficiency);
	int GetMagicProficiency();
	void SetDarkPower(int darkPower);
	int GetDarkPower();

	void Bewitch(GameCharacter &character);
	virtual void Sleep();
	virtual bool Attack(GameCharacter &character);
};