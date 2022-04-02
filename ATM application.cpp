#include <iostream>
using namespace std;

void showMenu()
{
	cout << "*********menu***********" << endl;
	cout << "1.check balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;
	cout << "4.Exit" << endl;
	cout << "*************************" << endl;

}

int main()
{
	int option;
	double balance = 0;
	double DepositAmount = 0;
	double WithdrawAmount = 0;
	do {
		showMenu();
		cout << "Please choose your option \n";
		cin >> option;
		system("cls");
		switch (option)
		{
		case 1: cout << "balance is: " << balance << "$" << endl; break;
		case 2: cout << "Deposit amount : ";
			cin >> DepositAmount;
			balance += DepositAmount;
			break;
		case 3:cout << "Withdraw amount : ";
			cin >> WithdrawAmount;
			if (WithdrawAmount <= balance)
				balance -= WithdrawAmount;
			else
				cout << "Not enough money" << endl;
			break;
		}
	} while (option != 4);
	
}

