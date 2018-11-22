//GameCharacter.h
//Description: declaration for GameCharacter class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include "Armour.h"
#include "Weapon.h"

enum CharacterState { Idle, Running, Sleeping, Walking, Defending, Attacking, Dead};

class GameCharacter {
private: 
	std::string characterName_;
	float health_;
	float weightLimit_;
	Weapon weapon_;
	Armour armour_;
	int food_;
	CharacterState state_;

public:
	//constructors and destructors
	GameCharacter();
	GameCharacter(std::string characterName, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state);

	bool Attack(GameCharacter &character);
	void Defend();
	void Walk();
	void Run();
	void Sleep();
	void AddFood(int amount);
	void Eat();

	//getters and setters
	void SetCharacterName(std::string characterName);
	std::string GetCharacterName();

	void SetCharacterHealth(float health);
	float GetCharacterHealth();

	void SetCharacterWeightLimit(float weightLimit);
	float GetCharacterWeightLimit();

	void SetFood(int food);
	int GetFood();

	void SetWeapon(Weapon weapon);
	void SetArmour(Armour armour);
	void SetState(CharacterState state);
};