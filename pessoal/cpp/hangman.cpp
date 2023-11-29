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
	
	for (int i = 0; i < word_length; i++) {
		correct_letters[i] = '_';
	}
	for (int i = 0; i < NUM_LETTERS; i++) {
		used_letters[i] = ' ';
	}
	
	int lives = 7;
	
	cout << "Welcome to the hangman game!" << endl;
	cout << "Your goal is to guess correctly the letters of a mysterious animal" << endl;
	
	bool try_again = false;
	int tries = 0;
	while (lives != 0) {
		cout << endl << "Letters used: " << used_letters << endl;
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
			continue;
		}

		used_letters[tries] = guess;

		for (int i = 0; i < word_length; i++) {
			if (random_animal[i] == guess) {
				correct_letters[i] = guess;
			}
		}
		
		tries++;
	}
	
	return 0;
}
