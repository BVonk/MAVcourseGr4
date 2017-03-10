#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



const int maxTries = 5;

int rightWrong(char letter, string sword, string &guessword){
	int i;
	int match = 0;
	int leng = sword.length();
	for (i = 0; i < leng; i++){
		if (letter == guessword[i]){
			return 0;
		}
		if (sword[i] == letter){
			guessword[i] = letter;
			match++;
		}
	}
	return match;
}

void board(string dit, int fout){
	cout << "Hello, welcome to Hangman." << endl;
	cout << "You have " << maxTries - fout << " tries to guess the word. \n" << endl;
	cout << dit << "\n" << endl;
}

int main()
{
	system("clear");
	string word;
	string words[] = {"jari","bart","maarten","viktor","luca","dirk"};
	int wrongs = 0;
	char let;

	// find a secret word
	srand(time(NULL));
	int len = sizeof(words) / sizeof(words[0]);
	int index = rand() % len;
	word = words[index];

	string soFar(word.length(), '*');
	board(soFar, wrongs);
	cout << "Guess one letter: " << endl; 
	while (maxTries - wrongs > 0){
		cin >> let;
		int check = rightWrong(let, word, soFar);
		system("clear");
		board(soFar, wrongs);
		if (check == 0){
			cout << "Too bad, wrong guess." << endl;
			cout << "Make another guess: " << endl;
			wrongs++;
		}
		else{ cout << "HELLYEAH, right guess!" << endl;  if (soFar == word){ cout << "\nYou have found the word!" << endl; break; } else{ cout << "Make another guess: " << endl; } }
		}
		if (maxTries == wrongs){ cout << "\nSorry bro, you lost" << endl; cout << "\nThe word was: " << word << endl; }

	return 0;
}
