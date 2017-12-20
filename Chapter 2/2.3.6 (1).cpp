#include <iostream>
#include <map> 
#include <vector> 
#include <string>

using namespace std;

int main()
{
	map<string, int> variables_map = { { "x", 0 },{ "y", 1 },{ "z", 2 },{ "xx", 3 },{ "xy", 4 },{ "xz", 5 } };
	vector<int> values = { 9, 6, 5, 7, 3, 2 };

	string variable_name;
	cin >> variable_name;

	for (pair<string, int> pair : variables_map)
		cout << "Variable: " << pair.first << " at address "
		<< pair.second << " has value "
		<< values[pair.second] << endl;

	if (variables_map.find(variable_name) != variables_map.end())
		cout << "Variable: " << variable_name << " at address "
		<< variables_map[variable_name] << " has value "
		<< values[variables_map[variable_name]] << endl;
	else
		cout << "Variable: " << variable_name << " doesn't exist" << endl;

	return 0;
}