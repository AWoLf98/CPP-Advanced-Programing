#include <iostream> 
#include <set> 
#include <functional>

using namespace std;

void PrintFrom(double value, set<double, greater<double>> that)
{
	int count = 0;

	for (double val : that)
	{
		if (val == value)
			count++;

		if (count > 0)
			cout << val << " ";
	}

	if (count == 0)
		cout << "Not found.";

	cout << endl;
}

int main() 
{
	set <double, greater<double>> valuesA = { -1.1, 2.9, -2.3, 2.71 }; 
	set <double, greater<double>> valuesB = { -3.14, 2.71, -3.88, 2.19 }; 

	int count = 0;
	double value;
	cin >> value;

	PrintFrom(value, valuesA);
	PrintFrom(value, valuesB);

	return 0;
}