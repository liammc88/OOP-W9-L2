//Brawler.cpp
//Description: definition for Cleric class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Cleric.h"

//contructors and destructors
Cleric::Cleric() {
	SetCharacterName("New cleric");
	SetCharacterHealth(100);
	SetCharacterWeightLimit(0.0f);
	SetWeapon(Weapon{ "New weapon", 0, 0.0f, 0, 100 });
	SetFood(0);
	SetState(CharacterState{ Idle });
	SetPietyLevel(0);
}

Cleric::Cleric(std::string characterName, float health, float weightLimit, Weapon weapon,
	Armour armour, int food, CharacterState state, int pietyLevel)
	: GameCharacter({ characterName,health,weightLimit,weapon, armour,food,state }), pietyLevel_{ pietyLevel } {
	//
}

//getters and setters
void Cleric::SetPietyLevel(int pietyLevel) {
	pietyLevel_ = pietyLevel;
}

int Cleric::GetPietyLevel() {
	return pietyLevel_;
}

void Cleric::PrayFor(GameCharacter &character) {
	std::cout << "Cleric " << GetCharacterName() << " is praying for " << character.GetCharacterName() << std::endl;
}

void Cleric::Sleep() {
	float currentHealth = GetCharacterHealth();

	if (GetCharacterHealth() < 100.0f) {
		SetCharacterHealth(currentHealth = currentHealth * 1.15f);
	}
	std::cout << "Cleric is sleeping" << std::endl;
}

bool Cleric::Attack(GameCharacter &character) {
	std::cout << "Cleric is attacking " << character.GetCharacterName() << " with a " << std::endl; //weapon_.GetItemName() << std::endl;
	return true;
}