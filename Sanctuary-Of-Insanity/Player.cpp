
#include "Main.h"



void Player::playerInitialization()
{

	playerName = " ";
    playerRace = " ";
	playerClass = " ";
	playerHeight = " ";
	playerWeight = " ";
	playerEyeColor = " ";
	playerHairColor = " ";
	playerSkinColor = " ";

	Player(playerName, playerRace, playerClass, playerHeight, playerWeight, playerEyeColor, playerHairColor, playerSkinColor);

	playerLevel = 1;
	playerCurrentExp = 0;
	playerExpToNextLevel = 50;

	playerStr = 10;
	playerDex = 10;
	playerCon = 10;
	playerWis = 10;
	playerInt = 10;
	playerCha = 10;

	playerMaxHealth = 10;
	playerCurrentHealth = 10;
	playerMaxStamina = 10;
	playerCurrentStamina = 10;
	playerMaxMana = 10;
	playerCurrentMana = 10;
	playerBaseAttack = 5;
	playerCurrentAttack = 5;
	playerBaseMagAttack = 5;
	playerCurrentMagAttack = 5;
	playerBaseDefense = 5;
	playerCurrentDefense = 5;

	playerMaxSanity = 100;
	playerCurrentSanity = 100;

	playerMaxCarryWeight = 0.0;
	playerCurrentCarryWeight = 0.0;

	playerPosY = 0;
	playerPosX = 0;

}
void Player::human()
{
	playerDex += 2;
	playerCon -= 1;
	playerMaxHealth += 5;
	playerBaseDefense += 5;
}
void Player::eldrich()
{
	playerCha += 2;
	playerWis -= 1;
	playerMaxStamina += 10;
}
void Player::faceless()
{
	playerInt += 2;
	playerStr -= 1;
	playerMaxMana += 10;
}
void Player::golaith()
{
	playerStr += 1;
	playerCon += 1;
	playerInt -= 1;
	playerMaxHealth += 10;
}
void Player::protector()
{
	playerStr += 2;
	playerCon += 2;
	playerDex -= 2;
	playerBaseMagAttack -= 2;
	playerBaseAttack += 3;
	playerBaseDefense += 5;

}
void Player::artificer()
{
	playerCon += 2;
	playerInt += 2;
	playerStr -= 2;
	playerBaseMagAttack += 8;
	playerBaseAttack -= 2;
	playerBaseDefense -= 4;

}
void Player::scoundrel()
{
	playerDex += 2;
	playerCha += 2;
	playerWis -= 2;
	playerBaseMagAttack += 2;
	playerBaseAttack += 2;
	playerBaseDefense -= 4;
}
void Player::voidPriest()
{
	playerDex += 2;
	playerWis += 2;
	playerCon -= 2;
	playerBaseMagAttack += 4;
	playerBaseAttack -= 5;
	playerBaseAttack += 3;
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