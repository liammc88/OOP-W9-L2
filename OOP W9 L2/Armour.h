//Armour.h
//Description: declaration for Armour class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>
#include "Item.h"

enum ArmourType { Leather, Wood, Iron, Steel };

class Armour : public Item {
private:
	int armourDefence_;
	int armourHealth_;
	ArmourType armourType_;
	std::string armourString_;

public:
	Armour();
	Armour(std::string armourName, int itemValue, float itemWeight, int armourDefence, int armourHealth, ArmourType armourType);

	void SetArmourDefence(int armourDefence);
	int GetArmourDefence();
	void SetArmourHealth(int armourHealth);
	int GetArmourHealth();
	void SetArmourType(int armourType);
	int GetArmourType();
	std::string ToString();
};