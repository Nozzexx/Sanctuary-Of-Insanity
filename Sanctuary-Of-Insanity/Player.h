#pragma once

class Player
{

private:

public:

	void playerInitialization();
	void outputTest(Player&);
//******************************************************************************************************************
//																												   *
//												 PLAYER RACE FUNCTIONS											   *
//																												   *
//******************************************************************************************************************

	void human();
	void faceless();
	void eldrich();
	void golaith();

//******************************************************************************************************************
//																												   *
//												PLAYER CLASS FUNCTIONS											   *
//																												   *
//******************************************************************************************************************

	void protector();
	void scoundrel();
	void artificier();
	void voidPriest();

//******************************************************************************************************************
//																												   *
//												PLAYER CHARACTER SHEET											   *
//																												   *
//******************************************************************************************************************

	void characterSheet();
	void characterFile();

//******************************************************************************************************************
//																												   *
//												PLAYER CHARACTERISTICS										       *
//																												   *
//******************************************************************************************************************

	// Player Characteristic Variables.

	std::string playerName;
	std::string playerRace;
	std::string playerClass;
	std::string playerHeight;
	std::string playerWeight;
	std::string playerEyeColor;
	std::string playerHairColor;
	std::string playerSkinColor;
	


	int playerLevel;
	int playerCurrentExp;
	int playerExpToNextLevel;

//******************************************************************************************************************
//																												   *
//												PLAYER BASE STATISTICS 											   *
//																												   *
//******************************************************************************************************************

	// Player Base Statisitics.

	int playerStr = 10;
	int playerDex = 10;
	int playerCon = 10;
	int playerWis = 10;
	int playerInt = 10;
	int playerCha = 10;

//******************************************************************************************************************
//																												   *
//											  PLAYER COMBAT STATISTICS											   *
//																												   *
//******************************************************************************************************************

	// Player Combat Statistics.

	int playerMaxHealth;
	int playerCurrentHealth;
	int playerMaxStamina;
	int playerCurrentStamina;
	int playerMaxMana;
	int playerCurrentMana;
	int playerBaseAttack;
	int playerCurrentAttack;
	int playerBaseMagAttack;
	int playerCurrentMagAttack;
	int playerBaseDefense;
	int playerCurrentDefense;

//******************************************************************************************************************
//																												   *
//											    PLAYER SANITY STATISTICS										   *
//																												   *
//******************************************************************************************************************

		// Player Sanity Statistics.

	int playerMaxSanity;
	int playerCurrentSanity;

//******************************************************************************************************************
//																												   *
//											 PLAYER CARRY WEIGHT STATISTICS										   *
//																												   *
//******************************************************************************************************************

	// Player Carry Weight Statistics.

	double playerMaxCarryWeight;
	double playerCurrentCarryWeight;

//******************************************************************************************************************
//																												   *
//											  PLAYER POSITION CORDINATES										   *
//																												   *
//******************************************************************************************************************

	// Player Position Cordinates for use by the Location Module and Action Manager.

	int playerPosY;
	int playerPosX;


};

