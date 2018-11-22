//Weapon.h
//Description: declaration for Weapon class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include "Item.h"

class Weapon : public Item {				//Weapon is generally taken from item
private:
	int weaponHitStrength_;
	int weaponHealth_;
	std::string weaponString_;

public:
	//constructors
	Weapon();
	Weapon(std::string weaponName, int value, float itemWeight, int WeaponHitStrength, int weaponHealth);

	//getters and setters
	void SetWeaponHitStrength(int weaponHitStrength);
	int GetWeaponHitStrength();

	void SetWeaponHealth(int health);
	int GetWeaponHealth();

	std::string ToString();
};