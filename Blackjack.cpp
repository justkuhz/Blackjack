#include "Blackjack.h"

using namespace std;

// create shuffle 

// create bet 

// create stand 

// create double

// create split 

// create deal cards 

// create dealer play 

// create card count

// create print menu 

// create print dealer hand 

// create print own hand 

void printWelcome();
void printMainMenu();
void printTutorial();
void play();
void mainMenuSelection();
int selectDecks();
void shuffleInfo(int& cards, int& sCard, int& deckNum);
deque<string> shuffle(int deckSize);


int main() {
	srand(time(NULL));
	printWelcome();
	printMainMenu();
	mainMenuSelection();
	play();
}

void printWelcome() {

	cout << "Welcome to the Casino!\nThe only game we offer is Blackjack!\n";
}

void printMainMenu() {

	cout << "\nMAIN MENU\n[P]: Play\n[T]: Tutorial\n[E]: Exit Application\n";
}

void printTutorial() {

	cout << "\nTUTORIAL\n";
	cout << "	Blackjack is a card game that uses standard 52-deck cards to play. This six-deck variant (312 cards)\n";
	cout << "is the most popular. The dealer uses a blank plastic card, which is never dealt, but is placed toward the\n";
	cout << "bottom 1/3 of the shoe to indicate when it is time for the cards to be reshuffled.\n\n";
	cout << "	The objective of the game is for the user to try and beat the dealer by getting a \"count\" as close to\n";
	cout << "21 as possible without going over 21. Cards are worth their pip value, with face cards all being worth a\n";
	cout << "count of 10 and Aces being soft 11 or hard 1.\n\n";
	cout << "	Betting limits generally have a lower bound of $2.\n\n";
	cout << "	The dealer will deal two cards to each player face up and one card face down and the other face up for\n";
	cout << "themselves. Players have the options of:";
	cout << "\n[H]itting: draw one card\n[S]tanding: no further changes to hand\n[D]: drawing one more card and doubling their bet\n";
	cout << "[P] Pair Splitting: splitting a pair into two separate hands treated separately with its own bet\n\n";
	cout << "	After the player stands, doubles, or busts (count goes over 21), the dealer will reveal their face down\n";
	cout << "card and the round will be scored.\n";
}

void mainMenuSelection() {

	char input = 0;

	do {

		cout << "Enter selection: ";
		cin >> input;
		input = toupper(input);

		if (input != 'P' && input != 'T' && input != 'E') {

			cout << "\nThat is not a valid selection, please try again.\n";
			printMainMenu();
		}
	} while (input != 'P' && input != 'T' && input != 'E');

	switch (input) {

	case 'P': break;
	case 'T': printTutorial(); printMainMenu(); mainMenuSelection(); break;
	case 'E': exit(0); break;
	default: break;
	}
}

int selectDecks() {

	int decks = 0;

	while (true) {

		cout << "\nHow many decks would you like to play with?\nPlease enter a number between 1 and 6 decks: ";

		if (!(cin >> decks)) {

			cin.clear();
			cin.ignore();
			cout << "\nPlease enter an integer between 1 and 6.\n";
		}
		else if (decks < 1 || decks > 6) {

			cout << "\nPlease enter an integer between 1 and 6.\n";
		}
		else break;
	}

	return decks;
}

void play() {

	int money = 100;
	int totalCards, cardsDealt, shuffleIndex, decks = 0;

	shuffleInfo(totalCards, shuffleIndex, decks);
	shuffle(decks);

	while (true) {
		// Loop

		// Select number of decks in the deck between 1-6

		// Loop	

			// Bet, Shuffle, See card count, or Exit
				//minimum bet $2, must bet even number

			// Deal Cards

			// Print Board status

			// Detect blackjack(s) 1.5x on win

			// Offer insurance only if dealer is showing an Ace, offer "even "even" money if player has a blackjack (Insurance pays 2:1, the cost is 1/2 of bet)

			// Player menu (stand, hit, double, split) [CANNOT USE MONEY THEY DONT HAVE TO DOUBLE OR SPLIT]

			// Once player stands or doubles, end turn

			// Play dealer turn

			// Print if player won, lost, or push, and change money accordingly
		// If shuffleCard is drawn (cards dealt > int shuffleCard), end loop
	//Play until player runs out of money or exits
	}
}

void shuffleInfo(int& cards, int& sCard, int& deckNum) {

	deckNum = selectDecks();
	cards = deckNum * 52;
	sCard = cards / 2;						//shuffle index should be between (1/2*cards) and (3/4*cards)
	sCard = sCard + (rand() % sCard);
}

deque<string> shuffle(int deckSize) {

	// generate a deque of all the cards (A, 2, 3, 4...)
}


