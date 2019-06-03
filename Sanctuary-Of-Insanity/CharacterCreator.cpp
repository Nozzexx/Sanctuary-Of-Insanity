
#include "Main.h"



void characterInitialization()
{
	Player player;

	player.playerInitialization();
	
	int choice = -1;

	std::cout << std::setw(75) << " == Character Creation == ";
	std::cout << "\n\n Please Make a selection from the menu below to create your character. ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Name: " << std::setw(55) << " " << " Height: ";
	std::cout << "\n\n\n Race: " << std::setw(55) << " " << " Weight: ";
	std::cout << "\n\n\n Class: " << std::setw(54) << " " << " Hair Style: ";
	std::cout << "\n\n\n Alightment: " << std::setw(49) << " " << " Hair Color: ";
	std::cout << "\n\n\n Gender: " << std::setw(53) << " " << " Eye Color: ";
	std::cout << "\n\n\n Age: " << std::setw(56) << " " << " Skin Color: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Name " << std::setw(25) << " [4] Alignment " << std::setw(23) << " [7] Height " << std::setw(29) << " [10] Hair Color ";
	std::cout << "\n\n [2] Race " << std::setw(22) << " [5] Gender " << std::setw(26) << " [8] Weight " << std::setw(28) << " [11] Eye Color ";
	std::cout << "\n\n [3] Class " << std::setw(18) << " [6] Age " << std::setw(33) << " [9] Hair Style " << std::setw(25) << " [12] Skin Color " << std::setw(35) << "[0] Create Character ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n >: ";

	std::cin >> choice;

	selection(player, choice);
	
}

void characterCreator(Player &player)
{

	int choice = -1;

	int spacer = 0;
	size_t gap = 0;
	

	std::cout << std::setw(75) << " == Character Creation == ";
	std::cout << "\n\n Please Make a selection from the menu below to create your character. ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

	spacer = 64;
	gap = player.playerName.length();
	std::cout << "\n\n Name: " << player.playerName << std::setw(spacer - gap)  << " Height: ";

	spacer = 55;
	gap = player.playerRace.length();
	std::cout << "\n\n\n Race: " << player.playerRace << std::setw(spacer - gap) << " " << " Weight: ";

	spacer = 54;
	gap = player.playerClass.length();
	std::cout << "\n\n\n Class: " << player.playerClass << std::setw(spacer - gap) << " " << " Hair Style: ";

	spacer = 49;
	gap = player.playerAlignment.length();
	std::cout << "\n\n\n Alightment: " << player.playerClass << std::setw(spacer - gap) << " " << " Hair Color: ";

	spacer = 53;
	gap = player.playerGender.length();
	std::cout << "\n\n\n Gender: " << player.playerClass << std::setw(spacer - gap) << " " << " Eye Color: ";

	spacer = 56;
	gap = player.playerAge.length();
	std::cout << "\n\n\n Age: " << player.playerClass << std::setw(spacer - gap) << " " << " Skin Color: ";

	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Name " << std::setw(25) << " [4] Alignment " << std::setw(23) << " [7] Height " << std::setw(29) << " [10] Hair Color ";
	std::cout << "\n\n [2] Race " << std::setw(22) << " [5] Gender " << std::setw(26) << " [8] Weight " << std::setw(28) << " [11] Eye Color ";
	std::cout << "\n\n [3] Class " << std::setw(18) << " [6] Age " << std::setw(33) << " [9] Hair Style " << std::setw(25) << " [12] Skin Color " << std::setw(35) << "[0] Create Character ";
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
		getPlayerConfirmation(player);
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
		getPlayerHeight(player);
		characterCreator(player);
		break;
	}
	case 5:
	{
		getPlayerWeight(player);
		characterCreator(player);
		break;
	}
	case 6:
	{
		getPlayerHairColor(player);
		characterCreator(player);
		break;
	}
	case 7:
	{
		getPlayerEyeColor(player);
		characterCreator(player);
		break;
	}
	case 8:
	{
		getPlayerSkinColor(player);
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
			player.human();
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
			player.eldrich();
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
			player.faceless();
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
			player.golaith();
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
			player.protector();
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
			player.artificer();
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
			player.scoundrel();
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
			player.voidPriest();
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

	int selection = -1;

	std::cout << "\n Please Select a Height: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Diminutive";
	std::cout << "\n\n [2] Small";
	std::cout << "\n\n [3] Medium";
	std::cout << "\n\n [4] Large";
	std::cout << "\n\n [5] Exit";
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

		std::cout << "\n Diminutive: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Diminutive Catagory are between 2ft - 3ft in height.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Diminutive? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Diminutive.";
			player.playerHeight = "Diminutive";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHeight(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Small: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Small Catagory are between 3ft - 5ft in height.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Small? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Small.";
			player.playerHeight = "Small";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHeight(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Medium: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Medium Catagory are between 5ft - 7ft in height.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Medium? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Medium.";
			player.playerHeight = "Medium";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHeight(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Large: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Large Catagory are between 7ft - 10ft in height.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Large? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Large.";
			player.playerHeight = "Large";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHeight(player);
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

void getPlayerWeight(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select a Weight: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Tiny";
	std::cout << "\n\n [2] Light";
	std::cout << "\n\n [3] Moderate";
	std::cout << "\n\n [4] Heavy";
	std::cout << "\n\n [5] Exit";
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

		std::cout << "\n Tiny: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Tiny Catagory are between 50lbs - 100lbs in weight.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Tiny? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Tiny.";
			player.playerWeight = "Tiny";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerWeight(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Light: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Light Catagory are between 100 lbs - 150lbs in weight.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Light? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Light.";
			player.playerWeight = "Light";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerWeight(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Moderate: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Moderate Catagory are between 150lbs - 250lbs in weight.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Moderate? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Moderate.";
			player.playerWeight = "Moderate";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerWeight(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Heavy: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n Those in the Heavy Catagory are between 250lbs - 400lbs in weight.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Heavy? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Heavy.";
			player.playerWeight = "Heavy";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerWeight(player);
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

void getPlayerHairColor(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select a Hair Color: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Blonde";
	std::cout << "\n\n [2] Brown";
	std::cout << "\n\n [3] Red";
	std::cout << "\n\n [4] Black";
	std::cout << "\n\n [5] Exit";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Select a Hair Color for More Information: ";
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

		std::cout << "\n Blonde: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's hair color to blonde.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Blonde? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Blonde.";
			player.playerHairColor = "Blonde";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHairColor(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Brown: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's hair color to brown.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Brown? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Brown.";
			player.playerHairColor = "Brown";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHairColor(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Red: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's hair color to red.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Red? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Red.";
			player.playerHairColor = "Red";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHairColor(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Black: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's hair color to black.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Black? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Black.";
			player.playerHairColor = "Black";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerHairColor(player);
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

void getPlayerEyeColor(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select an Eye Color: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Blue";
	std::cout << "\n\n [2] Brown";
	std::cout << "\n\n [3] Green";
	std::cout << "\n\n [4] Violet";
	std::cout << "\n\n [5] Exit";
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

		std::cout << "\n Blue: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's eye color to blue.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Blue? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Blue.";
			player.playerEyeColor = "Blue";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerEyeColor(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Brown: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's eye color to brown.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Brown? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Brown.";
			player.playerEyeColor = "Brown";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerEyeColor(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Green: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's eye color to green.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Brown? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Brown.";
			player.playerEyeColor = "Brown";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerEyeColor(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Violet: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's eye color to violet.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Violet? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Violet.";
			player.playerEyeColor = "Violet";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerEyeColor(player);
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

void getPlayerSkinColor(Player &player)
{
	clrs();

	int selection = -1;

	std::cout << "\n Please Select a Skin Color: ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n [1] Pale";
	std::cout << "\n\n [2] Light";
	std::cout << "\n\n [3] Tan";
	std::cout << "\n\n [4] Dark";
	std::cout << "\n\n [5] Exit";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Select a Skin Color for More Information: ";
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

		std::cout << "\n Pale: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's skin color to pale.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Pale? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Pale.";
			player.playerSkinColor = "Pale";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerSkinColor(player);
			break;
		}
		}
		break;
	}
	case 2:
	{
		clrs();

		char confirmation;

		std::cout << "\n Light: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's skin color to light.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Light? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Light.";
			player.playerSkinColor = "Light";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerSkinColor(player);
			break;
		}
		}
		break;
	}
	case 3:
	{
		clrs();

		char confirmation;

		std::cout << "\n Tan: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's skin color to tan.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Tan? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Tan.";
			player.playerSkinColor = "Tan";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerSkinColor(player);
			break;
		}
		}
		break;
	}
	case 4:
	{
		clrs();

		char confirmation;

		std::cout << "\n Dark: ";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
		std::cout << "\n\n This will change your character's skin color to dark.";
		std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";

		std::cout << "\n\n Choose Dark? ";
		std::cout << "\n\n ( Y | N )";
		std::cout << "\n\n >:";

		std::cin >> confirmation;

		switch (confirmation)
		{
		case 'y':
		case 'Y':
		{
			std::cout << " You have Selected Dark.";
			player.playerSkinColor = "Dark";
			break;
		}
		case 'n':
		case 'N':
		{
			getPlayerSkinColor(player);
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

void getPlayerConfirmation(Player &player)
{
	clrs();

	// Calculation of Player's Starting Statistics.

	player.playerMaxHealth += player.playerCon / 2;
	player.playerCurrentHealth = player.playerMaxHealth;

	player.playerMaxMana += player.playerInt / 2;
	player.playerCurrentMana = player.playerMaxMana;

	player.playerMaxStamina += player.playerDex / 2;
	player.playerCurrentStamina = player.playerMaxStamina;

	player.playerBaseAttack += player.playerStr / 2;
	player.playerCurrentAttack = player.playerBaseAttack;

	player.playerBaseMagAttack += player.playerInt / 2;
	player.playerCurrentMagAttack = player.playerBaseMagAttack;

	player.playerBaseDefense += player.playerCon / 2;
	player.playerCurrentDefense = player.playerBaseDefense;

	player.playerMaxSanity += player.playerWis / 2;
	player.playerCurrentSanity = player.playerMaxSanity;

	player.playerMaxCarryWeight += player.playerStr * 4.0;
	player.playerCurrentCarryWeight = 0.0;
	

	std::cout << "\n" << player.playerName;
	std::cout << "\n Lv." << player.playerLevel << " " << player.playerRace;







	//player.outputTest(player);
	std::cin.get();
	std::cin.ignore();
	clrs();
}