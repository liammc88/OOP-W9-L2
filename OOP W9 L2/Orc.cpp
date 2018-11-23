//Orc.cpp
//Description: definition for Orc class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Orc.h"

//contructors and destructors
Orc::Orc() {
	SetCharacterName("New brawler");
	SetCharacterHealth(100);
	SetCharacterWeightLimit(0.0f);
	SetWeapon(Weapon{ "New weapon", 0, 0.0f, 0, 100 });
	SetFood(0);
	SetState(CharacterState{ Idle });
	SetFerociousness(0);
	SetStrength(0);
}

Orc::Orc(std::string characterName, float health, float weightLimit, Weapon weapon,
	Armour armour, int food, CharacterState state, int ferociousness, int strength)
	: GameCharacter({ characterName,health,weightLimit,weapon, armour,food,state }), ferociousness_{ ferociousness },
	strength_{ strength } {
	//
}

//getters and setters
void Orc::SetFerociousness(int ferociousness) {
	ferociousness_ = ferociousness;
}

int Orc::GetFerociousness() {
	return ferociousness_;
}

void Orc::SetStrength(int strength) {
	strength_ = strength;
}

int Orc::GetStrength() {
	return strength_;
}

void Orc::Scream(GameCharacter &character) {
	std::cout << "Orc " << GetCharacterName() << " is screaming at " << character.GetCharacterName() << std::endl;
}

void Orc::Sleep() {
	float currentHealth = GetCharacterHealth();

	if (GetCharacterHealth() < 100.0f) {
		SetCharacterHealth(currentHealth = currentHealth * 1.15f);
	}
	std::cout << "Orc is sleeping" << std::endl;
}

bool Orc::Attack(GameCharacter &character) {
	std::cout << "Orc is attacking " << character.GetCharacterName() << " with a " << std::endl; //weapon_.GetItemName() << std::endl;
	return true;
}