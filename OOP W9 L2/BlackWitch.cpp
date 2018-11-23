//BlackWitch.cpp
//Description: definition for BlackWitch class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "BlackWitch.h"

//contructors and destructors
BlackWitch::BlackWitch() {
	SetCharacterName("New witch");
	SetCharacterHealth(100);
	SetCharacterWeightLimit(0.0f);
	SetWeapon(Weapon{ "New weapon", 0, 0.0f,0, 100 });
	SetFood(0);
	SetState(CharacterState{ Idle });
	SetMagicProficiency(0);
	SetDarkPower(0);
}

BlackWitch::BlackWitch(std::string characterName, float health, float weightLimit, Weapon weapon, 
						Armour armour, int food, CharacterState state, int magicProficiency, int darkPower)
	: GameCharacter({ characterName,health,weightLimit,weapon, armour,food,state }), magicProficiency_{ magicProficiency }, 
					darkPower_{ darkPower } {
	//
}

void BlackWitch::SetMagicProficiency(int magicProficiency) {
	magicProficiency_ = magicProficiency;
}

int BlackWitch::GetMagicProficiency() {
	return magicProficiency_;
}

void BlackWitch::SetDarkPower(int darkPower) {
	darkPower_ = darkPower;
}

int BlackWitch::GetDarkPower() {
	return darkPower_;
}

void BlackWitch::Bewitch(GameCharacter &character) {
	std::cout << "Black witch " << GetCharacterName() << " is attempting to bewitch " << character.GetCharacterName() << std::endl;
}

void BlackWitch::Sleep() {
	float currentHealth = GetCharacterHealth();

	if (GetCharacterHealth() < 100.0f) {
		SetCharacterHealth(currentHealth = currentHealth * 1.15f);
	}
	std::cout << " Black witch is sleeping" << std::endl;
}

bool BlackWitch::Attack(GameCharacter &character) {
	std::cout << "Black witch is attacking " << character.GetCharacterName() << " with a " << std::endl; //weapon_.GetItemName() << std::endl;
}