//Armour.cpp
//Description: definition for Armour class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Armour.h"
#include "Item.h"

//constructors and destructors
Armour::Armour() 
	: Item({ "Armour", 0, 0.0f }), armourDefence_{ 0 }, armourHealth_{ 0 }, armourType_{ Cardboard } {
}

Armour::Armour(std::string armourName, int itemValue, float itemWeight, int armourDefence, int armourHealth, ArmourType armourType)
	: Item{ armourName, itemValue, itemWeight }, armourDefence_{ armourDefence }, armourHealth_{ armourHealth }, armourType_{ armourType } {
}

//getters and setters
void Armour::SetArmourDefence(int armourDefence) {
	armourDefence_ = armourDefence;
}

int Armour::GetArmourDefence() {
	return armourDefence_;
}

void Armour::SetArmourHealth(int armourHealth) {
	armourHealth_ = armourHealth;
}

int Armour::GetArmourHealth() {
	return armourHealth_;
}

void Armour::SetArmourType(ArmourType armourType) {
	armourType_ = armourType;
}

int Armour::GetArmourType() {
	return armourType_;
}

//converts armour variables to a string
std::string Armour::ToString() {
	std::string armourNameString = GetItemName();
	std::string armourValueString = std::to_string(GetItemValue());
	std::string armourDefenceString = std::to_string(GetArmourDefence());
	std::string armourHealthString = std::to_string(GetArmourHealth());
	std::string armourTypeString = std::to_string(GetArmourType());

	return armourString_ = "Weapon: " + armourNameString + "Worth: " + armourValueString + "Defence: "
							+ armourDefenceString + "Armour health: " + armourHealthString + "Armour material: " 
							+ armourTypeString;
}