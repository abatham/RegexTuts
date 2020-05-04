#include <iostream>
#include <regex>

using namespace std;

int main()
{

	string a = "GeeksForGeeks";

	regex b("(Geek)(.*)");

	if (regex_match(a,b))
		cout<<"String b found in a\n";

	if (regex_match(a.begin(), a.end(), b))
		cout<<"Even the indexed version worked\n";

	cout<<"Just checking ;)\n";
	return 0;
}
