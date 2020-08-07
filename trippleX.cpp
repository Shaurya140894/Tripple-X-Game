#include <iostream>
#include <ctime>

void PrintIntro(int Level)
{
	switch (Level)
	{
	default:
		break;
	case 1:
		std::cout << "Welcom Agent 007, seems like you have stumbeled upon some closed doors!!!\n";
		std::cout << "The right code gets you through but the wrong code makes this world go BOOMMMMM!!! MUHAHAHAHAHAHA\n";
		std::cout << "MUHAHAHAHAHA HAHA HA HA HA AHHHH...\n";
		std::cout << "SOOOOOOOO LETS BEGIN" << std::endl;
		std::cout << "Level " << Level << "\n" << std::endl;
		break;

	case 2:
		std::cout << "You beat me once but can you do it again??????\n";
		std::cout << "MUHAHAHAHAHA HAHA HA HA HA AHHHH...\n";
		std::cout << "Level " << Level << "\n" << std::endl;
		break;
		
	case 3:
		std::cout << "How are you even doing this?????\n";
		std::cout << "This time I beat you for real!!!\n";
		std::cout << "Level " << Level << "\n" << std::endl;
		break;

	case 4:
		std::cout << "This ones too difficult, you aint gonna get past this one!!!!\n";
		std::cout << "Lets see how you fair this one!!!\n";
		std::cout << "Level " << Level << "\n" << std::endl;
		break;

	case 5:
		std::cout << "Nooooooooooooooooooooooooooooooooooo\n";
		std::cout << "DIE DIE DIE\n";
		std::cout << "Level " << Level << "\n" << std::endl;
		break;
	}
}

bool PlayGame(int Level)
{
	PrintIntro(Level);

	const int CodeA = rand() % Level + Level;
	const int CodeB = rand() % Level + Level;
	const int CodeC = rand() % Level + Level;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;


	std::cout << "Enter three numbers" << std::endl;
	std::cout << "Whose sum must be " << CodeSum;
	std::cout << " and product must be " << CodeProduct << std::endl;

	int PlayerGuessA, PlayerGuessB, PlayerGuessC;

	std::cout << "What's your guess?" << std::endl;
	std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;
	std::cout << "You entered : " << PlayerGuessA << " " << PlayerGuessB << " " << PlayerGuessC << "\n" << std::endl;

	int GuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
	int GuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

	if(GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		return true;
	}
	else
	{
		std::cout << "You Failed!!!\n!!!BOOM!!!\n";
		std::cout << "Try Again\n\n" << std::endl;
		return false;
	}
}


int main() 
{ 
	srand(time(NULL));

	int DifficultyLevel = 1;
	int const EndGmae = 5;
	while (DifficultyLevel <= EndGmae)
	{
		bool bLevel = PlayGame(DifficultyLevel);
		std::cin.clear();
		std::cin.ignore();

		if (bLevel)
		{
			++DifficultyLevel;
		}
	}
	std::cout << "Well done Agent 007, you beat the game!!!";
	return 0;
}

