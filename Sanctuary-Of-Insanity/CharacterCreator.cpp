
#include "Main.h"



void characterCreator(Player &player)
{
	Player player;

	player.playerInitialization();
	
	int choice = -1;

	std::cout << "\n Please Make a selection from the menu below to creator your character. ";
	std::cout << "\n\n +-------------------------------------------------------------------------------------------------------------------------+";
	std::cout << "\n\n Name: " << player.playerName;
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

	selection(choice);
	
}

void selection(int selection)
{
	switch (selection)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		std::cout << " I Got Here.";
		//getPlayerName(player);

		break;
	}
	}
}

void getPlayerName(Player &player)
{
	clrs();

	std::cout << "\n Please Enter Your Character's Name: ";
	
	std::cin.get();
	std::cin.clear();
	std::getline(std::cin, player.playerName);

	std::cout << " I Got Here.";
	
}
