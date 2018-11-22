//GameCharacter.cpp
//Description: definition for GameCharacter class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Weapon.h"
#include "GameCharacter.h"
#include "Armour.h"

#include "Item.h"

GameCharacter::GameCharacter() {
	std::string characterName_ = "New character";
	float health_ = 0;
	float weightLimit_ = 0;
	weapon_ = Weapon{ "New weapon", 0, 0, 0, 0 };
	armour_ = Armour{ "New armour", 0, 0, 0, 0, Leather };
	int food_ = 0;
	CharacterState { Idle };

	std::cout << "New character: " << characterName_ << " has been born!" << std::endl;
}

GameCharacter::~GameCharacter() {
	std::cout << "Default destructor for GameCharacter" << std::endl;
}

GameCharacter::GameCharacter(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state)
	: characterName_{ characterName }, health_{ health }, weightLimit_{ weightLimit }, weapon_{ weapon }, armour_{ armour }, food_{ food }, state_{ state } {
	std::cout << "Base GameCharacter called...... " << characterName_ << " has been born!" << std::endl;
}



bool GameCharacter::Attack(GameCharacter &character) {
	std::cout << characterName_ << " is attacking " << character.GetCharacterName() << " with a " << weapon_.GetItemName() << 
		" and armour made from " << armour_.GetArmourType() << std::endl;
	state_ = Attacking;
	character.Defend();
	return false;
}

void GameCharacter::Defend() {
	std::cout << characterName_ << " is defending using " << armour_.GetItemName() <<
		" made from " << armour_.GetArmourType() << std::endl;
	state_ = Defending;
}

void GameCharacter::Walk() {
	state_ = Walking;
	std::cout << characterName_ << " is " << state_;
}

void GameCharacter::Run() {
	state_ = Running;
	std::cout << characterName_ << " is " << state_;
}

void GameCharacter::Sleep() {
	state_ = Sleeping;
	std::cout << characterName_ << " is " << state_;
}

//void CharacterState::GetState() {		///is this void???????????????????????
//	//TODO
//}

void GameCharacter::AddFood(int amount) {
	amount = food_ + food_;
}

void GameCharacter::Eat() {
	for (int i = 0; i < 4; i++) {
		if (food_ > 0) {
			AddFood(-1);
			health_ = health_ + 0.25f;
		}
		else if (i == 3 && food_ > 0) {
			std::cout << "You can't eat anymore!" << std::endl;
		}
	}
}

//getters and setters
void GameCharacter::SetCharacterName(std::string characterName) {
	characterName_ = characterName;
}

std::string GameCharacter::GetCharacterName() {
	return characterName_;
}

void GameCharacter::SetCharacterHealth(float health) {
	health_ = health;
}

float GameCharacter::GetCharacterHealth() {
	return health_;
}

void GameCharacter::SetCharacterWeightLimit(float weightLimit) {
	weightLimit_ = weightLimit;
}

float GameCharacter::GetCharacterWeightLimit() {
	return weightLimit_;
}

void GameCharacter::SetFood(int food) {
	food_ = food;
}

int GameCharacter::GetFood() {
	return food_;
}

void GameCharacter::SetWeapon(Weapon weapon) {
	weapon_ = weapon;
}

void GameCharacter::SetArmour(Armour armour) {
	armour_ = armour;
}

void GameCharacter::SetState(CharacterState state) {
	state_ = state;
}