#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
	srand(time(0));
	
	int number = (rand() % 100) + 1;
	int guess;
	
	std::cout << "Welcome to the guessing game!" << std::endl;
	std::cout << "Your goal is to guess correctly a number from 1 to 100." << std::endl;
	
	do {
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		
		if (guess > 100) {
			std::cout << "The limit is 100" << std::endl;
			continue;
		} else if (guess < 0) {
			std::cout << "The minium is 1" << std::endl;
			continue;
		}
		
		if (guess > number) {
			std::cout << "Number too high." << std::endl;
		} else if (guess < number) {
			std::cout << "Number too low." << std::endl;
		}
	} while(guess != number);
	
	std::cout << "Congratulations, you have won the game! The mysterious number was " << number << "." << std::endl;
	
	return 0;
}
