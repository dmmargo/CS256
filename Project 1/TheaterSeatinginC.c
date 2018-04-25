//# include <iostream>
//# include <iomanip>
//using namespace std;
#include <stdio.h>

void listOfSeats();

int main() {
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
	int rowChoice;
	int seatN = 0;
	int column = 0;

	for(int i= 0; i<row; i++)
	{
		for (int j=0; j<cols; j++)
		{
			seats[i][j]=EMPTY;
		}
	}

	listOfSeats(); //empty start seats display


	printf("Enter a seat price for each row.\n");
	do{
		if (counter ==15)
		{
			break;
		}
		for(int i = 0; i < row;)
		{
			printf("%s%1d%s", "Row # ", i+1, ": $");
			scanf("%1d", input);

			if (input >= 0){
				rowValue[i] = input;
				i++;
				counter++;
			}

			else
				printf("invalid input\n");
		}
		printf("\n");
	} while (input >= 0);


		do{
			printf("\n");
			printf("%s\n", "Theater Ticketing: ");
			printf("%s\n", "-----------------------");
			printf("%s\n", "1) Sell a ticket");
			printf("%s\n", "2) List the current seating chart");
			printf("%s\n", "3) Rows Specifics and Sold Seats");
			printf("%s\n", "4) Exit");
			printf("%s", "User's selection (1, 2, 3, or Q): ");
			scanf("%1d", selection);

			if(selection =='1')
			{
				printf("%s", "Enter a row number and a seat number for the ticket: ");
				printf("\n");
				do {
				printf("%s", "Row# (1 - 15)");
				scanf("%1d",row2);
					if (row2<1 || row2 >15)
					{
						printf("%s\n", "enter valid number, try again"); //invalid row
					}
				} while (row2<1 || row2 >15);


				do {
					printf("%s", "Column# (1 - 30):");
					scanf("%1d", col2);
					if (col2<1 || col2 >30)
					{
						printf("%s\n", "enter valid number, try again"); //invalid column
					}
				} while (col2<1 || col2 >30);

				printf("\n");


				if(seats[row2-1][col2-1] == TAKEN)
				{
					printf("%s", "This seat is taken! Try another one. \n");
					continue;
				}
				else {
					seats[row2-1][col2-1]=TAKEN;
					ticketSold++;

					ticketPrice = rowValue[row2-1];
					ticketTotal = ticketTotal + ticketPrice;

					printf("%s%1d%s\n", "Price of that Ticket: ", ticketPrice);
					printf("%s%1d%s\n", "Total Price: $", ticketTotal);
				}
			}
			else if(selection =='2')
			{
				printf("%s", "                    Seats\n");
				printf("%s", "       123456789012345678901234567890");

				for (int i = 0; i < row; i++){
					if (i <9){
						printf("\n%s%1d%s", "Row ", (i+1), "  ");
					}
					else
					{
						printf("\n%s%1d", "Row", (i+1), " ");
					}


					for(int j = 0; j < cols; j++){

						printf(seats[i][j]);
					}
				}
			}
			else if (selection == '3') //shows how many seats sold and total price payed
			{
				printf("\n");
				printf("%s%1d\n", "Total Tickets/Seats Sold: ", ticketSold);
				printf("%s%1d\n", "Total Price: ", ticketTotal);

				do {
				printf("Choose row: ");
				scanf("%1d",rowChoice);
				if (rowChoice < 1 || rowChoice > 15) {
					printf("Please enter a valid row number.\n");
				}

				} while (rowChoice < 1 || rowChoice > 15);
				for (int i = 0; i < cols; i++) {
					if (seats[rowChoice-1][column-1 +i] != TAKEN) {
						seatN+=1;
					}
				}
				printf(seatN + "\n");
				printf("%s%1d%s%1d%s\n", "row ", rowChoice, " has ", seatN, " seats left");

				seatN = 0;
				column = 0;
			}

			else if(selection =='4') //quits program
			{
				printf("%s\n", "Thanks for visiting Theater Ticketing!");
				exit(0);
			}
			else if(selection != '1' || selection != '2' || selection != '3'||selection !='4')
			{
				//tells the user to try again from invalid selection
				printf("%s\n", "Invalid selection. Try again!");
			}
		}while(selection != '1' || selection != '2'||selection != '3'||selection !='4' || selection !='4');

	return 0;
}

void listOfSeats() // print seats rows and columns at the start of the menu
{
	const char TAKEN = '#';
	const char EMPTY = '*';
	const int row=15;
	const int cols=30;

	printf("Seats 123456789012345678901234567890");

	for(int i=0; i<row; i++)
	{
		//makes sure the rows are alligned
		if (i <10){
			printf("\n%s%1d%s", "Row ", i, "  ");
		}
		else
		{
			printf("\n%s%1d", "Row", i, " ");
		}

		//counts the seats as empty
		for(int j=0; j<cols; j++)
		{
			printf(EMPTY);
		}
	}
	printf("\n");
}
