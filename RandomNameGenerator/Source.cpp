#include <iostream>
#include <random>
#include <ctime>
#include <string>


int GetNumVowels();
std::string GetConsonant();
std::string GetVowel();

const std::string CONSONANTS[]{ "b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z","ch","bl","br","cl","cr","dh","dw","fl","fr","gl","gn","gr","kl","str","sl","sw" };
const std::string VOWELS[]{ "a","e","i","o","u","y","ae","ea","ou","ya" };

int main(){



	std::srand(time(0));

	std::string name = "";

	for (size_t i = 0; i < GetNumVowels(); i++)
	{
		name += GetConsonant();
		name += GetVowel();
	}
	
	std::cout << name << '\n';

	// generate number of vowels
	//		generate consonant set and vowel pair
	//		repeat for number of vowels



	std::system("pause");
}

int GetNumVowels()
{
	return 1 + rand() % 10;
}

std::string GetConsonant()
{
	int index = 0 + rand() % (sizeof(CONSONANTS) / sizeof(*CONSONANTS) - 1); //sizeof's find size of array without hardwiring

	return CONSONANTS[index];
}

std::string GetVowel()
{
	int index = 0 + rand() % (sizeof(VOWELS) / sizeof(*VOWELS) - 1);

	return VOWELS[index];
}
