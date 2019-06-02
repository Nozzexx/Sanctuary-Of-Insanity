#pragma once

class Player
{

private:

public:

	void playerInitialization();
	void outputTest(Player&);

	Player()
	{





	}

	Player(std::string pName, std::string pRace, std::string pClass, std::string pHeight, std::string pWeight, std::string pEyeColor, std::string pHairColor, std::string pSkinColor)
	{ 

		pName = playerName;
		pRace = playerRace;
		pClass = playerClass;
		pHeight = playerHeight;
		pWeight = playerWeight;
		pEyeColor = playerEyeColor;
		pHairColor = playerHairColor;
		pSkinColor = playerSkinColor;

	}

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
	void artificer();
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
	std::string playerGender;
	std::string playerAge;
	std::string playerHeight;
	std::string playerWeight;
	std::string playerEyeColor;
	std::string playerHairColor;
	std::string playerHairStyle;
	std::string playerSkinColor;
	std::string playerAlignment;
	


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


