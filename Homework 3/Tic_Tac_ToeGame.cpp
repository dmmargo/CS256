/*

 Write a program that allows two players to play a game of tic-tac-toe. Use a twodimensional  char  array with three rows and three 
 columns as the game board. Each element of the array should be initialized with an asterisk (*). The program should run a loop that 
 
 
 •  Displays the contents of the board array 
 
 
 •  Allows player 1 to select a location on the board for an X. The program should ask the user to enter the row and column number. 
 
 
 •  Allows player 2 to select a location on the board for an O. The program should ask the user to enter the row and column number. 
 
 
 •  Determines whether a player has won, or a tie has occurred. If a player has won, the program should declare that player the winner 
 and end. If a tie has occurred, the program should say so and end. Player 1 wins when there are three Xs in a row on the game board. 
 The Xs can appear in a row, in a column, or diagonally across the board. A tie occurs when all of the locations on the board are full, 
 but there is no winner. 
 */
 
#include <iostream>
#include <string> 
using namespace std;
class TicTacToe
{
	private:
	char board[3][3]; 
	public:
	TicTacToe() {}
	void SetGameBoard()
	{
	int n = 1;
	int i = 0;
	int j = 0;
	for ( i = 0; i < 3; i++ )
	{
		for ( j = 0; j < 3; j++ )
		{
			board[i][j] = '0' + n; 
			n++;
		}
	}
}

void PrintGameBoard()
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < 3; i++ )
	{
		for ( j = 0; j < 3; j++ )
		{
			if ( j < 2 )
			{
				cout << board[i][j] << " | ";
			}
			else
			{
				cout << board[i][j] << endl;
			}
		}
	}
}

void PlayerTurn(char num, char Player)
{
	int i = 0;
	int j = 0;
	bool WrongMove = true; 
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			if(board[i][j] == num)
			{
			board[i][j] = Player; 
			WrongMove = false;
			}
		}
	}
	if(WrongMove == true) 
	{ 
		cout << "You can only mark the open sets!\n"; 
	}
}

bool CheckFinalResult(char Player, bool GameOver)
{
	for(int i = 0; i < 3; i++) 
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) GameOver = true;
	}
	for(int i = 0; i < 3; i++) 
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) GameOver = true;
	}
  
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) 
	{
		GameOver = true;
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		GameOver = true;
	}
	if(GameOver == true)
	{
		cout << "Winner: " << Player << "!\n\n";
		cout << "| CONGRATULATIONS " << Player << " |\n";
	}
	return GameOver;
}

bool CheckGameDraw(bool GameOver)
{
	int n = 1;
	int i = 0;
	int j = 0;
	int counter = 0;
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			if(board[i][j] == '0' + n)
			{
				counter++;
			}
			n++;
		}
	}
	if( counter < 1 )
	{
		cout << "No one won , keep playing !\n\n";
		GameOver = true;
	}
	return GameOver;
}
};


int main()
{
	bool done = false, GameOver = false;
	char Player = 'O', num;
	cout << "TIC TAC TOE\n";
	cout << "Get three in a row\n";
	cout << "-------------"<< endl;
	TicTacToe myGame;
	myGame.SetGameBoard();
	do
	{
		if( Player == 'X' )
		{
			Player = 'O';
		}
		else
		{
			Player = 'X';
		}
		myGame.PrintGameBoard();
		cout << "\nit's player \"" << Player << "\"'s turn: ";
		cin >> num;
		cout << "\n";
		myGame.PlayerTurn(num, Player);
		GameOver = myGame.CheckFinalResult(Player, GameOver);
		GameOver = myGame.CheckGameDraw(GameOver);
		if(GameOver == true)
		{ 
			myGame.SetGameBoard();
			GameOver = false;
		}
	} while(!done);
return 0;
}