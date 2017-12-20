#include <iostream> 
#include <set>
#include <string>

using namespace std;

void SummInRange(multiset <double> values, double start_value, double stop_value)
{
	double summ = 0;

	for (double i : values)
		if (i >= start_value && i <= stop_value)
			summ += i;
	
	cout << ((summ != 0) ? to_string(summ) : "Not found") << endl;
}

// stupid excersice
int main()
{
	multiset <double> valuesA = { 1.1, 2.3, 2.7, 2.9, 3.5 };
	multiset <double> valuesB = { 2.5, 2.7, 3.14, 3.5, 3.5, 4.5 };
	double start_value, stop_value;

	cin >> start_value;
	cin >> stop_value;

	SummInRange(valuesA, start_value, stop_value);
	SummInRange(valuesB, start_value, stop_value);

	return 0;
}