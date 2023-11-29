#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

#define NUM_LETTERS 26

using namespace std;

int main() {
	srand(time(0));
	
	string animals[] = {"sloth", "koala", "tiger", "ostrich", "alligator", "jaguar", "horse", "parrot", "dog", "cat", "bunny", "wolf", "crow", "cow", "ferret", "weasel", "fox"};
	string random_animal = animals[rand() % sizeof(animals)/sizeof(animals[0])];

	const int word_length = random_animal.length();
	
	char used_letters[NUM_LETTERS];
	char correct_letters[word_length];
	char guess;
	
	bool try_again = false;
	bool letter = false;
	
	int lives = 7;
	int tries = 0;

	for (int i = 0; i < word_length; i++) {
		correct_letters[i] = '_';
	}
	correct_letters[word_length] = '\0';
	
	for (int i = 0; i < NUM_LETTERS; i++) {
		used_letters[i] = ' ';
	}
	used_letters[NUM_LETTERS] = '\0';
	
	while (lives > 0 && correct_letters != random_animal) {
		cout << "Welcome to the hangman game!" << endl;
		cout << "Your goal is to guess correctly the letters of a mysterious animal" << endl;
		
		cout << endl << "Lives: " << lives << endl;
		cout << "Letters used: " << used_letters << endl;
		cout << "Animal: " << correct_letters << endl;
		
		cout << endl << "Enter your guess: ";
		cin >> guess;
		
		for (int i = 0; i < NUM_LETTERS; i++) {
			if (used_letters[i] == guess) {
				cout << "Already used letter. Try again." << endl;
				try_again = true;
			}
		}
		if (try_again) {
			try_again = false;
			continue;
		}

		used_letters[tries] = guess;

		for (int i = 0; i < word_length; i++) {
			if (random_animal[i] == guess) {
				correct_letters[i] = guess;
				letter = true;
			}
		}
		if (!letter) {
			lives--;
		}
		
		
		tries++;
		letter = false;
		
		system("clear");
	}
	
	if (lives > 0) {
		cout << "Congratulations!" << endl;
		cout << "You have won the game, the answer was " << random_animal << "." << endl;
	} else {
		cout << "You lost!" << endl;
		cout << "Better luck nex time." << endl;
	}
	
	return 0;
}
