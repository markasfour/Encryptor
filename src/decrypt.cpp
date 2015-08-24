#include <iostream>
#include <vector>
using namespace std;

vector <string> characters = {"a", "b", "c", "d", "e",
			 				  "f", "g", "h", "i", "j",
							  "k", "l", "m", "n", "o", 
							  "p", "q", "r", "s", "t", 
							  "u", "v", "w", "x", "y", 
							  "z", "A", "B", "C", "D", 
							  "E", "F", "G", "H", "I",
							  "J", "K", "L", "M", "N",
							  "O", "P", "Q", "R", "S", 
							  "T", "U", "V", "W", "X",
							  "Y", "Z", "1", "2", "3", 
							  "4", "5", "6", "7", "8", 
							  "9", "0", "`", "~", "!",
							  "@", "#", "$", "%", "^",
							  "&", "&", "*", "(", ")",
							  "-", "_", "=", "+", "[",
							  "{", "]", "}", "\\", "|",
							  ";", ":", "'", "\"", ",",
							  "<", ".", ">", "/", "?",
							  " "};

int decrypt(int c, int d, int n)
{
	int m = 1;

	for (int i = 0; i < (d / 2); i++)
	{
		m *= ((c * c) % n);
		m %= n;
	}

	if (d % 2 == 1)
	{
		m *= c;
	}

	m %= n;
	//cout << "m = " << m << endl;
	return m;
}

int main(int argc, const char * argv[])
{
	vector <string> x;
	for (int i = 1; i < argc; i++) 
	{
		//cout << argv[i] << endl;
		string temp = argv[i];
		int a = atoi(temp.c_str());
		//cout << "a = " << a << endl;
		//word += characters.at(decrypt(a, 103, 143) - 2);
		x.push_back(characters.at(decrypt(a, 103, 143) - 2));

	}
	for (int i = 0; i < x.size(); i++)
	{
		cout << x.at(i);
	}
	cout << endl;
}
