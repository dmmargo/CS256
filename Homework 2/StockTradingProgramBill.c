/*
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
for the stock.
Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the amount
he received for the stock.

Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the two
commissions to his broker. (If the amount of profit that your program displays is a
negative number, then Joe lost money on the transaction.)
*/

//PatternDisplays

#include <stdio.h>

int main()
{

	//last month purchase
	double joeNumShareBuy = 1000;
	double buyPriceperShare = 45.50;
	double commission = 0.02; //of the amount he paid for stocks and received from stocks

	//two weeks sold
	double joeNumShareSold = 1000;
	double soldPriceperShare = 56.90;

	double paid = joeNumShareBuy * buyPriceperShare;
	double commissionPaid = commission * paid;
	double sold = joeNumShareSold * soldPriceperShare;
	double commissionSold = sold * commission;
	double profit = ((sold - commission*sold) - (paid - commission*paid));


	printf("The amount of money Joe paid for the stock: $%.2f\n", paid);
	printf("The amount of commission Joe paid his broker when he bought the stock: $%.2f\n", commissionPaid);
	printf("The amount that Joe sold the stock for: $%.2f\n", sold);
	printf("The amount of commission Joe paid his broker when he sold the stock: $%.2f\n", commissionSold);
	printf("the amount of profit that Joe made after selling his stock ");
	printf("and paying the two commissions to his broker: $%.2f\n", profit);

	return 0;

}
