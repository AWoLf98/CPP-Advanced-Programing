#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm>

using namespace std;

class Banknote
{
private:
	int denomination;
	int banknotesCount;

public:
	Banknote(int denomination, int banknotesCount);
	int GetDenomination() { return this->denomination; };
	int GetBanknotesCount() { return this->banknotesCount; }
};

Banknote::Banknote(int denomination, int banknotesCount)
{
	this->denomination = denomination;
	this->banknotesCount = banknotesCount;
}


int main()
{
	vector<Banknote*> ATM;
	int toWithdraw1, toWithdraw2;
	int moneyCount = 0;

	ATM.push_back(new Banknote(10, 5));
	ATM.push_back(new Banknote(20, 6));
	ATM.push_back(new Banknote(50, 3));
	ATM.push_back(new Banknote(100, 4));
	ATM.push_back(new Banknote(200, 5));

	for (Banknote* i : ATM)
		moneyCount += i->GetBanknotesCount() * i->GetDenomination();

	cin >> toWithdraw1;
	cin >> toWithdraw2;

	if (toWithdraw1 % 10 != 0)
	{
		cout << "Incorrect amount of money" << endl;
	}
	else
	{
		if (toWithdraw1 < moneyCount)
		{
			cout << "Enough money." << endl;
			moneyCount -= toWithdraw1;
		}
		else
		{
			cout << "Not enough money." << endl;
		}
	}

	if (toWithdraw2 % 10 != 0)
	{
		cout << "Incorrect amount of money" << endl;
	}
	else
	{
		if (toWithdraw2 < moneyCount)
		{
			cout << "Enough money." << endl;
			moneyCount -= toWithdraw2;
		}
		else
		{
			cout << "Not enough money." << endl;
		}
	}

	return 0;
}