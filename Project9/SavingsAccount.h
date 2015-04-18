

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

using namespace std;

class SavingsAccount
{
public:
	SavingsAccount(double);					//constructor
	void calculateMonthlyInterest();		//function to add a month's interest to a savings account
	double getSavingsBalance() const;		//accessor function for the data member savingsBalance 

	static void modifyInterestRate(double);	//mutator function to change the interest rate
private:
	double savingsBalance;					//balance of the savings account

	static double annualInterestRate;		//annual interest rate for the saings account

};  //end class SavingsAccount

#endif