
#include "Main.h"



void characterInitialization()
{
	Player player;

	player.playerInitialization();
	
	int choice = -1;

	std::cout << "\n Please Make a selection from the menu below to create your character. ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Name: ";
	std::cout << "\n\n Race: ";
	std::cout << "\n\n Class: ";
	std::cout << "\n\n Height: ";
	std::cout << "\n\n Weight: ";
	std::cout << "\n\n Hair Color: ";
	std::cout << "\n\n Eye Color: ";
	std::cout << "\n\n Skin Color: ";

	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Name " << std::setw(40) << " [5] Weight ";
	std::cout << "\n\n [2] Race " << std::setw(44) << " [6] Hair Color ";
	std::cout << "\n\n [3] Class " << std::setw(42) << " [7] Eye Color ";
	std::cout << "\n\n [4] Height " << std::setw(42) << " [8] Skin Color ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n >: ";

	std::cin >> choice;

	selection(player, choice);
	
}

void characterCreator(Player &player)
{

	int choice = -1;

	std::cout << "\n Please Make a selection from the menu below to create your character. ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Name: " << player.playerName;
	std::cout << "\n\n Race: " << player.playerRace;
	std::cout << "\n\n Class: " << player.playerClass;
	std::cout << "\n\n Height: " << player.playerHeight;
	std::cout << "\n\n Weight: " << player.playerWeight;
	std::cout << "\n\n Hair Color: " << player.playerHairColor;
	std::cout << "\n\n Eye Color: " << player.playerEyeColor;
	std::cout << "\n\n Skin Color: " << player.playerSkinColor;

	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Name " << std::setw(40) << " [5] Weight ";
	std::cout << "\n\n [2] Race " << std::setw(44) << " [6] Hair Color ";
	std::cout << "\n\n [3] Class " << std::setw(42) << " [7] Eye Color ";
	std::cout << "\n\n [4] Height " << std::setw(42) << " [8] Skin Color ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n >: ";

	std::cin >> choice;

	selection(player, choice);

}

void selection(Player &player, int selection)
{
	switch (selection)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		getPlayerName(player);
		characterCreator(player);
		break;
	}
	case 2:
	{
		getPlayerRace(player);
		characterCreator(player);
		break;
	}
	case 3: 
	{
		getPlayerClass(player);
		characterCreator(player);
		break;
	}
	case 4:
	{
		characterCreator(player);
		break;
	}
	case 5:
	{
		characterCreator(player);
		break;
	}
	case 6:
	{
		characterCreator(player);
		break;
	}
	case 7:
	{
		characterCreator(player);
		break;
	}
	case 8:
	{
		characterCreator(player);
		break;
	}
	default:
	{

	}

	}
}

void getPlayerName(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n >:";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerRace(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select a Race: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Human";
	std::cout << "\n\n [2] Eldrich";
	std::cout << "\n\n [3] Faceless";
	std::cout << "\n\n [4] Golaith";
	std::cout << "\n\n [5] Back";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n For More Information Enter: [0]";
	std::cout << "\n\n >:";

	std::cin.get();
	std::cin.clear();
	std::cin >> selection;

	switch (selection)
	{
	case 0:
	{

	}
	case 1:
	{
		clrs();

		char confirmation;

		std::cout << "\n Human: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Dexterity";
		std::cout << "\n\n * - 1 Consititution";
		std::cout << "\n\n * + 5 Maximum Health";
		std::cout << "\n\n * + 5 Maximum Defense";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Human? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Human.";
			player.playerRace = "Human";
			//Human();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerRace(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Eldrich: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Intelligence";
		std::cout << "\n\n * - 1 Strength";
		std::cout << "\n\n * + 10 Maximum Mana";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Eldrich? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Eldrich.";
			player.playerRace = "Eldrich";
			//Eldrich();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerRace(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Faceless: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Charisma";
		std::cout << "\n\n * - 1 Wisdom";
		std::cout << "\n\n * + 10 Maximum Stamina";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Faceless? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Faceless.";
			player.playerRace = "Faceless";
			//Faceless();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerRace(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Golaith: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 1 Strength";
		std::cout << "\n\n * + 1 Constitution";
		std::cout << "\n\n * - 1 Intelligence";
		std::cout << "\n\n * + 10 Maximum Health";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Golaith? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Golaith.";
			player.playerRace = "Golaith";
			//Golaith();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerRace(player);
			break;
		}
		}
		break;
	}
	case 5:
	{
		characterCreator(player);
		break;
	}
	default:
	{

	}
	}

	clrs();
}

void getPlayerClass(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select a Class: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Protector";
	std::cout << "\n\n [2] Artificer";
	std::cout << "\n\n [3] Scoundrel";
	std::cout << "\n\n [4] Void Priest";
	std::cout << "\n\n [5] Back";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Select a Class for More Information: ";
	std::cout << "\n\n >:";

	std::cin.get();
	std::cin.clear();
	std::cin >> selection;

	switch (selection)
	{
	case 0:
	{

	}
	case 1:
	{
		clrs();

		char confirmation;

		std::cout << "\n Protector: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Strength";
		std::cout << "\n\n * + 2 Consititution";
		std::cout << "\n\n * - 2 Dexterity";
		std::cout << "\n\n * - 2 Magic Attack";
		std::cout << "\n\n * + 3 Attack";
		std::cout << "\n\n * + 5 Defense";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Protector? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Protector.";
			player.playerClass = "Protector";
			//Protector();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerClass(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Artificer: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Intelligence";
		std::cout << "\n\n * + 2 Consititution";
		std::cout << "\n\n * - 2 Strength";
		std::cout << "\n\n * + 8 Magic Attack";
		std::cout << "\n\n * - 2 Attack";
		std::cout << "\n\n * - 4 Defense";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Artificer? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Artificer.";
			player.playerClass = "Artificer";
			//Artificer();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerClass(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Scroundrel: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Dexterity";
		std::cout << "\n\n * + 2 Charisma";
		std::cout << "\n\n * - 2 Wisdom";
		std::cout << "\n\n * + 2 Magic Attack";
		std::cout << "\n\n * + 2 Attack";
		std::cout << "\n\n * - 4 Defense";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Scroundrel? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Scroundrel.";
			player.playerClass = "Scroundrel";
			//Scoundrel();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerClass(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Void Priest: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n * + 2 Dexterity";
		std::cout << "\n\n * + 2 Wisdom";
		std::cout << "\n\n * - 2 Constitution";
		std::cout << "\n\n * + 4 Magic Attack";
		std::cout << "\n\n * - 5 Attack";
		std::cout << "\n\n * + 3 Defense";
		std::cout << "\n\n History: Lorem ipsum dolor sit amet, adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
		std::cout << "\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. ";
		std::cout << "\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.";
		std::cout << "\n Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Void Priest? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Void Priest.";
			player.playerClass = "Void Priest";
			//VoidPriest();
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerClass(player);
			break;
		}
		}
		break;
	}
	case 5:
	{
		characterCreator(player);
		break;
	}
	default:
	{

	}
	}

	clrs();
}

void getPlayerHeight(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerWeight(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerHairColor(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerEyeColor(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerSkinColor(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}

void getPlayerConfirmation(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";

	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	clrs();
}