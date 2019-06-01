
#include "Main.h"



void Player::playerInitialization()
{

	Player player;

	std::string playerName = " ";
	std::string playerRace = " ";
	std::string playerClass = " ";
	std::string playerHeight = " ";
	std::string playerWeight = " ";
	std::string playerEyeColor = " ";
	std::string playerHairColor = " ";
	std::string playerSkinColor = " ";

	player.playerLevel = 1;
	player.playerCurrentExp = 0;
	player.playerExpToNextLevel = 50;

	player.playerStr = 10;
	player.playerDex = 10;
	player.playerCon = 10;
	player.playerWis = 10;
	player.playerInt = 10;
	player.playerCha = 10;

	player.playerMaxHealth = 10;
	player.playerCurrentHealth = 10;
	player.playerMaxStamina = 10;
	player.playerCurrentStamina = 10;
	player.playerMaxMana = 10;
	player.playerCurrentMana = 10;
	player.playerBaseAttack = 5;
	player.playerCurrentAttack = 5;
	player.playerBaseMagAttack = 5;
	player.playerCurrentMagAttack = 5;
	player.playerBaseDefense = 5;
	player.playerCurrentDefense = 5;

	player.playerMaxSanity = 100;
	player.playerCurrentSanity = 100;

	player.playerMaxCarryWeight = 0.0;
	player.playerCurrentCarryWeight = 0.0;

	player.playerPosY = 0;
	player.playerPosX = 0;

}

#pragma region Output Test

void Player::outputTest(Player &player)
{
	std::cout << "\n" << player.playerLevel;
	std::cout << "\n" << player.playerCurrentExp;
	std::cout << "\n" << player.playerExpToNextLevel;

	std::cout << "\n" << player.playerStr;
	std::cout << "\n" << player.playerDex;
	std::cout << "\n" << player.playerCon;
	std::cout << "\n" << player.playerWis;
	std::cout << "\n" << player.playerInt;
	std::cout << "\n" << player.playerCha;

	std::cout << "\n" << player.playerMaxHealth;
	std::cout << "\n" << player.playerCurrentHealth;
	std::cout << "\n" << player.playerMaxStamina;
	std::cout << "\n" << player.playerCurrentStamina;
	std::cout << "\n" << player.playerMaxMana;
	std::cout << "\n" << player.playerCurrentMana;
	std::cout << "\n" << player.playerBaseAttack;
	std::cout << "\n" << player.playerCurrentAttack;
	std::cout << "\n" << player.playerBaseMagAttack;
	std::cout << "\n" << player.playerCurrentMagAttack;
	std::cout << "\n" << player.playerBaseDefense;
	std::cout << "\n" << player.playerCurrentDefense;

	std::cout << "\n" << player.playerMaxSanity;
	std::cout << "\n" << player.playerCurrentSanity;

	std::cout << "\n" << player.playerMaxCarryWeight;
	std::cout << "\n" << player.playerCurrentCarryWeight;

	std::cout << "\n" << player.playerPosY;
	std::cout << "\n" << player.playerPosX;
}
#pragma endregion