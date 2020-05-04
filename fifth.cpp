#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string inp, reg;
	cout<<"String:\n";
	getline(cin, inp);
	cout<<"Pattern\n";
	getline(cin, reg);

	regex r(reg);

	smatch flag;

	regex_search(inp, flag, r);
	//while (regex_search(inp, flag, r))
	//{
		cout<<flag.str()<<"\n";
		cout<<flag.suffix().str()<<endl;
		//cout<<"AT :"<<flag.position
	//	inp = flag.suffix().str();
	//}
	return 0;

}
