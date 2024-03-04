#include <iostream>
using namespace std;

main()
{
	char c;
	cout << "carater";
	cin >> c;
	
	if (c >= '0' && c<='9')
	{
		cout << "Numero" << c;
	}
	else
	{
		if ((c >= 'a' && c<='z') || (c >= 'A' && c<='Z'))
		{
			cout << "Letra";
		}
		else
		{
			cout << "Simbolo";
		}	
	}
}

