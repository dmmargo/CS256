# include <iostream>
# include <iomanip>
using namespace std;

void listOfSeats();
char movieMenu(char);

int main()
{
	const int rowNum = (15.0);
	double rowValue[rowNum]; //array to hold row pices
	char selection;
	int row2, col2;
	const char TAKEN = '#';
	const char EMPTY = '*';
	const int row = 15;
	const int cols = 30;
	char seats[row][cols];
	
	for(int i= 0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			seats[i][j]=EMPTY;
		}
	}

	listOfSeats();

	//seats(rowValue, rowNum);
	
	cout << "Please enter a ticket price for each row." << endl;
	
	for(int i = 0 ; i < row; i++)
	{
		cout << "Row # " << i+1 << ": " ;
		cin >> rowValue[row];	
	}
	cout << endl;
	
	
	
	
	do
		{
			cout << "MOVIE THEATER MENU" << endl;
			cout << "------------------" << endl;
			cout << "1) Sell a ticket" << endl;
			cout << "2) List the seats" << endl;
			cout << "Q) Quit program" << endl;
			cout << "Please make a selection: ";
			cin >> selection;
			
			if(selection =='1')
			{
				cout << "Please enter a row number and a seat number for the ticket: " ;
				cout << endl;
				cout << "Row # :" ;
				cin >> row2;
				cout << endl;
				cout << "Seat # :" ;
				cin >> col2;
				cout << endl;
/*
				for(int i = 0; i < row; i++)
				{
					for(int j=0;j<cols;j++)
					{
						seats[row2][col2]=TAKEN;
					}
				}
				*/
				if(seats[row2-1][col2-1] == TAKEN)
				{
					cout << "This seat is taken! Try another one. \n";
					continue; // start the loop again
				}
				else // and if it is - sell the ticket
					seats[row2-1][col2-1]=TAKEN;
				// Add the next loop to immediately see the effects:
				for (int i = 0; i < row; i++){
					for(int j = 0; j < cols; j++){
						cout << seats[i][j];
					}
					
				cout << endl;
				}

			}
			else if(selection =='2')
			{
				for (int i = 0; i < row; i++){
					for(int j = 0; j < cols; j++){
						cout << seats[i][j];
					}
					cout << endl;
				}
			}
			else if(selection =='q'||selection=='Q')
			{
				cout << "Thank you for using the program." << endl;
				exit(0);
			}
			else if(selection != '1' || selection !='q' || selection !='Q')
			{
				cout << "Invalid selection." << endl;
			}
		}while(selection != '1' || selection !='q' || selection !='Q');
	
	return 0;
}


void listOfSeats()
{
	const char TAKEN = '#';//taken
	const char EMPTY = '*';//empty
	const int row=15;
	const int cols=30;

	cout << "Seats 123456789012345678901234567890" ;
	/*
	for(int i = 1; i<=30; i++) 
	{
		cout << i ;
	}*/

	for(int i=0; i<row; i++)//making array display what's in it
	{
		if (i <10){
			cout << endl<< "Row " << i << " ";
		}
		else
		{
			cout << endl<< "Row" << i << " ";
		}
		
		for(int j=0; j<cols; j++)
		{
			cout << EMPTY;
		}
	}
	cout << endl;
}