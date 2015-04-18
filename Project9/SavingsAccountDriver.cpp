#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

int main()
{

	SavingsAccount saver1(2000);
	SavingsAccount saver2(3000);

	cout << setprecision(2) << fixed;

	cout << "Starting balance for saver1 is: $" << saver1.getSavingsBalance() << endl;
	cout << "Starting balance for saver2 is: $" << saver2.getSavingsBalance() << endl;

	SavingsAccount::modifyInterestRate(.03);

	saver1.calculateMonthlyInterest();
	cout << "New balance for saver1 after adding a month's interest is: $" << saver1.getSavingsBalance() << endl;
	saver2.calculateMonthlyInterest();
	cout << "New balance for saver2 after adding a month's interest is: $" << saver2.getSavingsBalance() << endl;

	SavingsAccount::modifyInterestRate(.04);

	saver1.calculateMonthlyInterest();
	cout << "New balance for saver1 after adding a month's interest is: $" << saver1.getSavingsBalance() << endl;
	saver2.calculateMonthlyInterest();
	cout << "New balance for saver2 after adding a month's interest is: $" << saver2.getSavingsBalance() << endl;


}
