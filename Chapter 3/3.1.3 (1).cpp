#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string, string> capitals = 
	{ { "China", "Beijing" },{ "India", "New Delhi" },{ "Japan", "Tokyo" },{ "Philippines", "Manila" },
	{ "Russia", "Moscow" },{ "Egypt", "Cairo" },{ "Indonesia", "Jakarta" },
	{ "Democratic Republic of the Congo", "Kinshasa" },{ "South Korea", "Seoul" },
	{ "Bangladesh", "Dhaka" } }; 
	
	string s; 
	getline(cin, s);

	if (capitals.find(s) != capitals.end())
		cout << "The capital of " << s << " is " << capitals[s] << endl;
	else
		cout << "No such country on the list." << endl;

	return 0;
}