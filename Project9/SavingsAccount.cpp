#include <iostream>
#include "SavingsAccount.h"
using namespace std;

double SavingsAccount::annualInterestRate = .02;			//set default interest rate

void SavingsAccount::modifyInterestRate(double newRate)		//mutator function to change the interest rate		
{
	annualInterestRate = newRate;
	cout << "New rate is: " << (annualInterestRate * 100) << "%" << endl;
}
SavingsAccount::SavingsAccount(double amount)				//constructor	
	:savingsBalance(amount)
{
	//empty body
}

void SavingsAccount::calculateMonthlyInterest()				//function to add a month's interest to a savings account
{
	savingsBalance *= (1 + (annualInterestRate / 12));
}

double SavingsAccount::getSavingsBalance() const			//accessor function for the data member savingsBalance 
{
	return savingsBalance;
}


