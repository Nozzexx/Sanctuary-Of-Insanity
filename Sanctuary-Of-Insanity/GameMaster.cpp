
#include "Main.h"


void narrator(const std::string& text)
{
	Sleep(750);
	// loop through each character in the text
	for (std::size_t i = 0; i < text.size(); ++i)
	{
		// output one character
		// flush to make sure the output is not delayed
		std::cout << text[i] << std::flush;

		// sleep 60 milliseconds
		Sleep(55); // use Sleep on windows
	}
	Sleep(750);
}

void narratorDelayed(const std::string& text)
{
	Sleep(750);
	// loop through each character in the text
	for (std::size_t i = 0; i < text.size(); ++i)
	{
		// output one character
		// flush to make sure the output is not delayed
		std::cout << text[i] << std::flush;

		// sleep 60 milliseconds
		Sleep(55); // use Sleep on windows
	}
}