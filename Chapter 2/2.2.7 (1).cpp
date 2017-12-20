#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s1; 
	set<int> s2; 
	unsigned start_value;
	unsigned stop_value;

	cin >> start_value;
	cin >> stop_value;

	for (int i = start_value; i <= stop_value; i++)
	{
		if (i % 2 == 0)
			s2.insert(i);
		else
			s1.insert(i);
	}

	for (int i = start_value; i <= stop_value + 1; i++)
	{
		if (i % 2 == 0)
			s1.insert(i);
		else
			s2.insert(i);
	}

	cout << s1.size() << endl;
	cout << s2.size() << endl;

	for (auto it1 = s1.begin(); it1 != s1.end(); it1++)
	{
		for (auto it2 = s2.begin(); it2 != s2.end(); it2++)
			cout << *it1 + *it2 << " ";
		cout << endl;
	}


	cout << endl; 
	return 0;
}