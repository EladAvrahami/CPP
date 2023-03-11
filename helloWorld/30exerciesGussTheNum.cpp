//random choose num 1-100 user will have 4 guessess
#include <iostream>
#include <cstdlib>//liborary to use random function
#include <ctime>//liborary to seed the random num genarator 
using namespace std;

/*int main() {
	srand(time(nullptr));//need this for rand command will choos diffrent nums
	int computerNum = rand() %100 +1;
	int guessCount = 1;
	int playerGuess;
	bool guessNumber = false;
	cout << computerNum << endl;
	cout << "try to guess num betweem 0-100" << endl;
	while (!guessNumber)
	{
		cout << "enter your guess:" << endl;
		cin >> playerGuess;

		if (playerGuess > 100 || playerGuess < 0) {
			cout << "opps that was a wast of guess,you should pick num between 0-100." << endl;
			guessCount++;
			continue;
		}
		if (playerGuess == computerNum) {
			cout << "wowww you guess the number in "<< guessCount<<" guesses!" << endl;
			cout << "thanks for playing (:" << endl;
			guessNumber = true;
		}
		else if (playerGuess>computerNum) {
			cout << "your guess is too high.." << endl;
		}
		else
		{
			cout << "your guess is too low.." << endl;
			
		}
		guessCount++;

	}
	return 0;
}
*/