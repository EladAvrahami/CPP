#include<iostream>
#include<string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initializeGameBoard(string gameboard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoaredFull(string gameBoard[ROWS][COLS]);




int main() {

	runGame();

	return 0;
}


void runGame()
{
	string winner = "";
	bool xTurn = true;
	int theRow = 0;
	int theCol = 0;
	string gameBoared[ROWS][COLS];

	initializeGameBoard(gameBoared);

	printCurrentBoard(gameBoared);

	while (winner == "")
	{

		if (xTurn) {
			cout << "its X turn" << endl;
		}
		else {
			cout << "its O's turn" << endl;
		}
		getUserInput(xTurn, gameBoared);
		cout << endl;
		printCurrentBoard(gameBoared);
		winner = getWinner(gameBoared);
		xTurn = !xTurn;//flip it

		if (winner == "" && isBoaredFull(gameBoared)) {
			winner = "C";//cats game... no winner
		}



	}
	//cats game?
	cout << endl;
	if (winner == "C")
	{

		cout << "its was the cats game, No winner!" << endl;
	}
	else
	{
		cout << "the winner is " << winner << endl;
	}
	cout << endl;
}


void initializeGameBoard(string gameboard[ROWS][COLS]) {

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			gameboard[i][j] = " ";
		}
	}
}

void printCurrentBoard(string gameBoard[ROWS][COLS]) {

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) 
		{
			cout << gameBoard[i][j];
			if (j < 2) {
				cout << " | ";
			}
		}
		cout << endl;
		if (i < 2) {
			cout << "- - - - - -" << endl;
		}
	}
}

















void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]) 
{
	int row = -1;
	int col = -1;
	bool keepAsking = true;

	while (keepAsking)
	{
	//keep ask until get valid answer
		cout << "pleas enter a row THEN the column,each from 0,1,2 sparated by space" << endl;
		cin >> row;
		cin >> col;
		if (row >= 0 && col >= 0 && row <= 2 && col <= 2)
		{
			//valid- in rang selection
			//but cant still be occupied by x or o already...
			if (!cellAlreadyOccupied(row,col,gameBoard))
			{
				//only set the cell if row and col is valid and not occupied already
				keepAsking = false;
			}
			else
			{
				cout << "the cell is already occupied!" << endl;
			}
		}
	}//end while

	//by time it gets here,we know it is valid row and col
	if (xTurn)
	{
		gameBoard[row][col]="X";
	}
	else
	{
		gameBoard[row][col]="O";
	}
}//end getuserinput method


//test if cell already occupied
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]) {
	return gameBoard[row][col] != " ";//if not a space than its occupied
}


//test if we have a winner //
string getWinner(string gameBoard[ROWS][COLS]) 
{
//check rows
	for (int i = 0; i < ROWS; i++)
	{
		if (gameBoard[i][0]!=" " &&gameBoard[i][0]==gameBoard[i][1]&& gameBoard[i][1]==gameBoard[i][2])
		{
			return gameBoard[i][0];//we have a match (horizontal)
		}
	}
	//check columns
	for (int i = 0; i < COLS; i++)
	{
		if(gameBoard[0][i] != " " && gameBoard[0][i]==gameBoard[1][i] && gameBoard[1][i]==gameBoard[2][i])
		{
			return gameBoard[0][i];// we have a match (vertical) !
		}
	}

	//check diagonals
	//ther are tow diagonals which we can test manually

	//uper left to bottom right diagonal
	if (gameBoard[0][0] != " " && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
	{
		return gameBoard[0][0];//we have diagonal match
	}

	//lower-left to upper right diagonal
	if (gameBoard[2][0] != " " && gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2]) 
	{
		return gameBoard[2][0];
	}
	//if i get here 
	return "";//no winner yet

}//end get winner



bool isBoaredFull(string gameBoard[ROWS][COLS]) {
	int countFill = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (gameBoard[i][j] != " ") {
				countFill++;
			}
		}
	}

	return countFill == 9;//all 9 cell is fulled
}











