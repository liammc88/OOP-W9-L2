//Armour.h
//Description: declaration for Armour class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include "Item.h"

enum ArmourType { Cardboard, Leather, Wood, Iron, Steel };			//enumeration

class Armour : public Item {				//Weapon is generally taken from item
private:
	int armourDefence_;
	int armourHealth_;
	ArmourType armourType_;
	std::string armourString_;

public:
	//constructors
	Armour();
	Armour(std::string armourName, int itemValue, float itemWeight, int armourDefence, int armourHealth, ArmourType armourType);

	//getters and setters
	void SetArmourDefence(int armourDefence);
	int GetArmourDefence();

	void SetArmourHealth(int armourHealth);
	int GetArmourHealth();

	void SetArmourType(ArmourType armourType);
	int GetArmourType();

	std::string ToString();
};