#include <iostream>
#include <regex>

using namespace std;

int main()
{

	string input, exp;
	cout<<"Enter a string:\n";
	getline(cin, input);

	cout<<"Enter the regex:\n";

	getline(cin, exp);

	regex r(exp);

	smatch flag;

	regex_search(input, flag, r);

	for( auto z : flag)
		cout<<z<<"\n";

	return 0;
}
