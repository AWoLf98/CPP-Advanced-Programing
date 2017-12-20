#include <iostream> 
#include <map> 
#include <string>

using namespace std;

int main()
{
	map<string, int> results = { { "Sarah", 15 },{ "John", 12 },{ "Bart", 17 } };
	
	for (pair<string, int> pair : results)
		cout << pair.first << " result is: " << pair.second << endl;
	cout << endl;

	map<string, int>::iterator it = results.find("Sarah");
	results.erase(it);

	for (pair<string, int> pair : results)
		cout << pair.first << " result is: " << pair.second << endl;
	cout << endl;

	results["Bob"] = 16;

	for (pair<string, int> pair : results)
		cout << pair.first << " result is: " << pair.second << endl;
	cout << endl;

	return 0;
}