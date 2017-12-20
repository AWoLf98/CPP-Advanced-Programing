#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector <float> v(5);
	vector <float> vals{ 0.0f, 5.f, .5f, 2.3f, 4.7f };

	float number;
	float avg, sum = 0;

	cin >> number;

	for (int i = 0; i < v.size(); i++)
		v[i] = number + vals[i];

	for (float i : v)
		sum += i;

	avg = sum / v.size();

	cout << "Sum: " << sum << endl;
	cout << "Avg: " << avg << endl;

	return 0;
}