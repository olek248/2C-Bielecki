#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;

	void AccountInformation()
	{
		std::cout << "Informacja o koncie bankowym\n";
		std::cout << "W³aœciciel: " << owner << "\n";
		std::cout << "Soldo: " << balance << " " << currency << "\n";
	}

	void DepositToAccount(BankAccount& account, double amount)
	{
		if (amount >= 0)
			account.balance = account.balance + amount;
	}

	bool WidthdrawalFromAccount(BankAccount& account, double amount)
	{
		if (amount >= 0
			&& account.balance >= amount)
		{
			account.balance = account.balance - amount;
			true;
		}
		false;
	}

	void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
	{
		if (WidthdrawalFromAccount(sourceAccount, amount))
			DepositToAccount(targetAccount, amount);
	}

	void transferBetweenAccounts(BankAccount& sourceAccount, BankAccount& targetAccount, double amount)
	{
		if (WidthdrawalFromAccount(sourceAccount, amount))
			DepositToAccount(targetAccount, amount);
	}
};
