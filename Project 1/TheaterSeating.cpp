# include <iostream>
# include <iomanip>
using namespace std;

void listOfSeats();

int main()
{
	const int rowNum = 15.0;
	double rowValue[rowNum]; 
	char selection;
	int row2, col2;
	const char TAKEN = '#';
	const char EMPTY = '*';
	const int row = 15;
	const int cols = 30;
	char seats[row][cols];
	int ticketSold = 0;
	double ticketPrice = 0;
	double ticketTotal = 0;
	double input;
	int counter = 0;
	
	for(int i= 0;i<row;i++)
	{
		for (int j=0;j<cols;j++)
		{
			seats[i][j]=EMPTY;
		}
	}

	listOfSeats(); //empty start seats display

	
	cout << "Enter a seat price for each row." << endl;
	do{
		if (counter ==15)
		{
			break;
		}
		for(int i = 0; i < row;)
		{
			cout << "Row # " << i+1 << ": $" ;
			cin >> input;
			
			if (input >= 0){
				rowValue[i] = input;
				i++;
				counter++;
			}
			
			else 
				cout << "invalid input" << endl;
		}
		cout << endl;
	} while (input >= 0);
	
	
		do{
			cout << endl;
			cout << "Theater Ticketing: " << endl;
			cout << "-----------------------" << endl;
			cout << "1) Sell a ticket" << endl;
			cout << "2) List the current seating chart" << endl;
			cout << "3) How many tickets sold" << endl;
			cout << "Q) Exit" << endl;
			cout << "User's selection (1, 2, 3, or Q): ";
			cin >> selection;
			
			if(selection =='1')
			{
				cout << "Enter a row number and a seat number for the ticket: " ;
				cout << endl;
				do {
				cout << "Row# (1 - 15)" ;
				cin >> row2;
					if (row2<1 || row2 >15)
					{
						cout << "enter valid number, try again" << endl; //invalid row
					}
				} while (row2<1 || row2 >15);
				
				//cout << endl;
				do {
					cout << "Column# (1 - 30):" ;
					cin >> col2;
					if (col2<1 || col2 >30)
					{
						cout << "enter valid number, try again" << endl; //invalid column
					}
				} while (col2<1 || col2 >30);
				
				cout << endl;
				
				
				if(seats[row2-1][col2-1] == TAKEN)
				{
					cout << "This seat is taken! Try another one. \n";
					continue; 
				}
				else {
					seats[row2-1][col2-1]=TAKEN;
					ticketSold++;
					
					ticketPrice = rowValue[row2-1];
					ticketTotal = ticketTotal + ticketPrice;
					
					cout << "Price of that Ticket: " << ticketPrice << endl;
					cout << "Total Price: $" << ticketTotal << endl;
				}
			}
			else if(selection =='2')
			{
				cout << "                   Seats" << endl;
				cout << "      123456789012345678901234567890" ;
				
				for (int i = 0; i < row; i++){
					if (i <9){
						cout << endl<< "Row " << i+1 << " ";
					}
					else
					{
						cout << endl<< "Row" << i+1 << " ";
					}
		
					
					for(int j = 0; j < cols; j++){
						
						cout << seats[i][j];
					}
				}
			}
			else if (selection == '3') //shows how many seats sold and total price payed
			{
				cout << endl;
				cout << "Total Tickets/Seats Sold: " << ticketSold << endl;
				cout << "Total Price: " << ticketTotal << endl;
					
			}
			
			else if(selection =='q'||selection=='Q') //quits program
			{
				cout << "Thanks for visiting Theater Ticketing!" << endl;
				exit(0);
			}
			else if(selection != '1' || selection != '2' || selection != '3'||selection !='q' || selection !='Q')
			{
				//tells the user to try again from invalid selection
				cout << "Invalid selection. Try again!" << endl;
			}
		}while(selection != '1' || selection != '2'||selection != '3'||selection !='q' || selection !='Q');
	
	return 0;
}

void listOfSeats() // print seats rows and columns at the start of the menu
{
	const char TAKEN = '#';
	const char EMPTY = '*';
	const int row=15;
	const int cols=30;

	cout << "Seats 123456789012345678901234567890" ;

	for(int i=0; i<row; i++)
	{
		//makes sure the rows are alligned
		if (i <10){ 
			cout << endl<< "Row " << i << " ";
		}
		else
		{
			cout << endl<< "Row" << i << " ";
		}
		
		//counts the seats as empty
		for(int j=0; j<cols; j++)
		{
			cout << EMPTY;
		}
	}
	cout << endl;
}