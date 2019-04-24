#include <iostream>
#include <string>

using namespace std;

void BadSwap(int myScore, int yourScore);
void GoodSwap(int &myScore, int &yourScore);



int main() 
{
	cout << "\n\n\tWelcome to the switch-a-roo!\n\n";

	int myScore = 50;
	int yourScore = 250;

	cout << "\nBefore the bad swap!\n ";
	cout << "My score =" << myScore << " Your score =" << yourScore << endl;

	//Swap scores
	// You a temp friend!

	BadSwap(myScore, yourScore);

	cout << "\nAfter the  bad swap\n ";
	cout << "My score = " << myScore << " Your score = " << yourScore << endl;

	cout << "\nBefore the good swap!\n ";
	cout << "My score =" << myScore << " Your score =" << yourScore << endl;
	
	GoodSwap(myScore, yourScore);

	cout << "\nAfter the good swap\n ";
	cout << "My score = " << myScore << " Your score = " << yourScore << endl;

	system("pause");
	return 0;
}

// Passing copies only
void BadSwap(int myScore, int yourScore)
{
	//Swap scores
    // You a temp friend!
	BadSwap(myScore, yourScore);
	int temp = 0;
	// 1. Hand data to temp from myScore
	temp = myScore;
	// 2. Hand data to myScore from yourScore
	myScore = yourScore;
	// 3. hand data to yourScore from temp
	yourScore = temp;
}

// Passing by Ref to the real value
void GoodSwap(int &myScore, int &yourScore)
{
	//Swap scores
	// You a temp friend!
	BadSwap(myScore, yourScore);
	int temp = 0;
	// 1. Hand data to temp from myScore
	temp = myScore;
	// 2. Hand data to myScore from yourScore
	myScore = yourScore;
	// 3. hand data to yourScore from temp
	yourScore = temp;
}