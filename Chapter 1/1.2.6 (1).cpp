#include <iostream> 
#include <vector> 
#include <string>

using namespace std;

int main()
{
	vector <string> ip_table{ "127.0.0.1", "192.168.0.1", "192.168.1.100", "255.255.255.255" };
	vector <string> ip_table_copy(ip_table);
	int ipsCoutToPrint = 0;
	cin >> ipsCoutToPrint;

	if (ipsCoutToPrint > ip_table_copy.size())
	{
		cout << "Too big - value must be smaller than or equal to vector size.";
		return 0;
	}

	for (int i = 0; i < ipsCoutToPrint; i++)
		cout << ip_table_copy[i] << endl;

	return 0;
}