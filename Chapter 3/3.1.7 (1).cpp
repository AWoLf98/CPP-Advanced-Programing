#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#include <list>

using namespace std;

template <class T>

void print(const T & value)
{
	cout << value << " ";
}

struct Find
{
	unsigned start_value;
	unsigned stop_value;

	Find(int start_value, int stop_value)
	{
		this->start_value = start_value;
		this->stop_value = stop_value;
	}

	bool operator()(const int & v)
	{
		if (v >= start_value && v <= stop_value)
			return true;
		return false;
	}
};

int main()
{
	vector<double> values = { 2.1, 3.14, 2.2, 1.1, 2.11, 3.2, 3.6, 2.5, 2.6, 4.11, 4.12, 3.11, 3.73, 4.83 };
	unsigned start_value;
	unsigned stop_value;
	unsigned valuesCount;

	cin >> start_value;
	cin >> stop_value;

	valuesCount = count_if(values.begin(), values.end(), Find(start_value, stop_value));
	cout << valuesCount << endl;

	return 0;
}