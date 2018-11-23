//Brawler.cpp
//Description: definition for Brawler class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Brawler.h"

//contructors and destructors
Brawler::Brawler() {
	SetCharacterName("New brawler");
	SetCharacterHealth(100);
	SetCharacterWeightLimit(0.0f);
	SetWeapon(Weapon{ "New weapon", 0, 0.0f, 0, 100 });
	SetFood(0);
	SetState(CharacterState{ Idle });
	SetPunchDamage(0);
	SetStrength(0);
}

Brawler::Brawler(std::string characterName, float health, float weightLimit, Weapon weapon,
	Armour armour, int food, CharacterState state, int punchDamage, int strength)
	: GameCharacter({ characterName,health,weightLimit,weapon, armour,food,state }), punchDamage_{ punchDamage },
	strength_{ strength } {
	//
}

//getters and setters
void Brawler::SetPunchDamage(int punchDamage) {
	punchDamage_ = punchDamage;
}

int Brawler::GetPunchDamage() {
	return punchDamage_;
}

void Brawler::SetStrength(int strength) {
	strength_ = strength;
}

int Brawler::GetStrength() {
	return strength_;
}

void Brawler::Brawl(GameCharacter &character) {
	std::cout << "Black witch " << GetCharacterName() << " is brawling " << character.GetCharacterName() << std::endl;
}

void Brawler::Sleep() {
	float currentHealth = GetCharacterHealth();

	if (GetCharacterHealth() < 100.0f) {
		SetCharacterHealth(currentHealth = currentHealth * 1.15f);
	}
	std::cout << " Brawler is sleeping" << std::endl;
}

bool Brawler::Attack(GameCharacter &character) {
	std::cout << "Brawler is attacking " << character.GetCharacterName() << " with a " << std::endl; //weapon_.GetItemName() << std::endl;
	return true;
}