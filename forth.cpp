#include <iostream>
#include <regex>

using namespace std;

int main()
{
	string inp, regx, rep;

	cout<<"Enter the string to search\n";
	getline(cin, inp);
	cout<<"Enter the regex to match\n";
	getline(cin, regx);

	regex r(regx);

	cout<<"Enter the string you want to replace the regex with\n";
	getline(cin, rep);

	cout<<regex_replace(inp, r, rep);

	return 0;
}
