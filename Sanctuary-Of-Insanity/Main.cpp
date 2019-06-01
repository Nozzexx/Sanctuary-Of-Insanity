
//******************************************************************************************************************
// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.					   *
// Purpose: Controls Menus, Saving, Loading, User Interface, Screen Clearing, and Exiting of Applicaiton.		   *																													
// Author: Josh Duke		 																					   *
// Intial Start Date: 03.15.19																				       *
// Github Repository Link: https://github.com/Nozzexx/Sanctuary-Of-Insanity.git									   *
// Version Number: 0.0.2																						   *
// Last Update: 05.30.2019																						   *
//******************************************************************************************************************

#pragma region Main.cpp

#include "Main.h"

#pragma region Main Function

//******************************************************************************************************************
//																												   *
//													MAIN FUNCTION												   *
//																												   *
//******************************************************************************************************************

int main(Player &player)
{
	//introNotice();
	mainMenu(player);

	std::cin.get();
	std::cin.ignore();
	return 0;
}

#pragma endregion

void introNotice()
{
	narrator(" Sanctuary of Insanity...");
	clrs();

	std::cout << "\n NOTICE: ";
	std::cout << "\n" << LINE;
	std::cout << "\n\n - This is a Text-Based Role-Playing Game. You will be required to utilize your Imagination!";
	std::cout << "\n\n - This Game is Console Based. For the Best Experience we reccommened playing in a windowed state.";
	std::cout << "\n\n         - Right-Click on the Application Task Bar > Properties > Layout > Window Size";
	std::cout << "\n\n         - Change the Default Window to 125 x 35";
	std::cout << "\n\n - Overloading the selection may cause error messages to repeat. Please be patient.";
	std::cout << "\n\n - For more Information Please visit the Directory.\n";
	std::cout << LINE;

	std::cout << "\n\n Press Enter to Continue...";
	std::cin.get();
	std::cin.ignore();

	clrs();
}

#pragma region Main Menu

//******************************************************************************************************************
//																												   *
//													  MAIN MENU													   *
//																												   *
//******************************************************************************************************************

void mainMenu(Player &player)
{
	// This variable is used to store the user's selected menu option.
	int menuSelection;

	// Displays the Main Menu User Interface to the user.
	std::cout << std::setw(80) << " A Sanctuary of Insanity Version 0.0.0" << std::endl;
	std::cout << std::setw(77) << " A text-based role-playing game" << std::endl;


	std::cout << LINE;
	std::cout << "\n\n\n [1] NEW GAME ";

	std::cout << "\n\n" << LINE;
	std::cout << "\n\n\n [2] LOAD GAME ";

	std::cout << "\n\n" << LINE;
	std::cout << "\n\n\n [3] OPTIONS ";

	std::cout << "\n\n" << LINE;
	std::cout << "\n\n\n [4] DIRECTORY ";

	std::cout << "\n\n" << LINE;
	std::cout << "\n\n\n [5] EXIT GAME ";

	std::cout << "\n\n" << LINE;

	std::cout << "\n\n Enter your selection >: ";

	std::cin >> menuSelection;

	// This While loop keeps the user at the Main Menu until a correct selection is chosen.

	while (std::cin.fail())
	{
		// Upon Failure, clear the screen and I/O Buffer.
		clrs();
		std::cin.clear();

		// Displays the Main Menu User Interface to the user.

		// Displays the Main Menu User Interface to the user.
		std::cout << std::setw(80) << " A Sanctuary of Insanity Version 0.0.0" << std::endl;
		std::cout << std::setw(77) << " A text-based role-playing game" << std::endl;


		std::cout << LINE;
		std::cout << "\n\n\n [1] NEW GAME ";

		std::cout << "\n\n" << LINE;
		std::cout << "\n\n\n [2] LOAD GAME ";

		std::cout << "\n\n" << LINE;
		std::cout << "\n\n\n [3] OPTIONS ";

		std::cout << "\n\n" << LINE;
		std::cout << "\n\n\n [4] DIRECTORY ";

		std::cout << "\n\n" << LINE;
		std::cout << "\n\n\n [5] EXIT GAME ";

		std::cout << "\n\n" << LINE;

		std::cout << "\n\n Enter your selection >: ";

		std::cin.get();
		std::cin >> menuSelection;
	}

	// This While Loop takes user's input selection and converts it into a chosen direction.
	while (menuSelection)
	{

		switch (menuSelection)
		{
		case 1:
		{
			std::cout << "\n You have selected a New Game! ";

			// Delays Console action for 1000 milliseconds, Displays "loading...", Delays Console again...
			Sleep(1000);
			narrator("\n\n Loading...");
			Sleep(1000);
			clrs();

			narrator(" Welcome to the Sanctuary of Insanity...\n");
			Sleep(3000);
			clrs();
			Sleep(2000);
		
			characterCreator(player);
			break;
		}
		case 2:
		{
			// Incomplete. (Review)
			std::cout << "\n You have selected to Load a Game! ";
			break;
		}
		case 3:
		{
			// This is a Testing Option for quick debugging. Will not be present in release version. (REVIEW)
			std::cout << "\n You have selected to view the Options! ";

			// Delays Console action for 1000 milliseconds, Displays "loading...", Delays Console again...
			Sleep(1000);
			//gameText("\n\n Loading...");
			Sleep(1000);
			clrs();

			break;
		}
		case 4:
		{
			std::cout << "\n You have selected the Directory!";
			break;
		}
		case 5:
		{
			// Sends Application back to Main Funciton and Ends Program.
			std::cout << "\n You have selected to Exit the Game!";
			break;
		}
		default:
			std::cout << "\n Invalid Selection, Please try again... > ";
			std::cout << "\n\n Enter your selection:> ";
			std::cin >> menuSelection;
			continue;
		}

		break;
	}

}

#pragma endregion

#pragma region Load Function

//******************************************************************************************************************
//																												   *
//													LOAD FUNCTION												   *
//																												   *
//******************************************************************************************************************

void load()
{


}

#pragma endregion

#pragma region Save Function

//******************************************************************************************************************
//																												   *
//													SAVE FUNCTION												   *
//																												   *
//******************************************************************************************************************

void save()
{

}

#pragma endregion

#pragma endregion