#include <iostream>
#include <regex>
#include <string>


using namespace std;

int main()
{
	string inp, reg;
	//cout<<"STRING: ";
	//getline(cin, inp);
	cout<<"REGEX: ";
	getline(cin, reg);

	regex r(reg);
	cout<<"Write a string to evaluate:\n";
	while(getline(cin, inp))
	{
		sregex_iterator curIt (inp.begin(), inp.end(), r);
		sregex_iterator lastIt;
		while ( curIt != lastIt )
		{
			smatch match = *curIt;
			cout<< match.str()<<"\n";
			curIt++;
		
		}
	}

	return 0;
}
