#include <iostream>
#include <vector>
using namespace std;

vector <char> characters = {'a', 'b', 'c', 'd', 'e',
							'f', 'g', 'h', 'i', 'j',
							'k', 'l', 'm', 'n', 'o', 
							'p', 'q', 'r', 's', 't', 
							'u', 'v', 'w', 'x', 'y', 
							'z', 'A', 'B', 'C', 'D', 
							'E', 'F', 'G', 'H', 'I',
							'J', 'K', 'L', 'M', 'N',
							'O', 'P', 'Q', 'R', 'S', 
							'T', 'U', 'V', 'W', 'X',
							'Y', 'Z', '1', '2', '3', 
							'4', '5', '6', '7', '8', 
							'9', '0', '`', '~', '!',
							'@', '#', '$', '%', '^',
							'&', '&', '*', '(', ')',
							'-', '_', '=', '+', '[',
							'{', ']', '}', '\\', '|',
							';', ':', '\'', '"', ',',
							'<', '.', '>', '/', '?'};

int get_d (int e, int t)
{
	vector <int> e_multiples;
	for (int i = 1; i <= t; i++)
	{
		e_multiples.push_back(e * i);
	}
	//for (int i = 0; i < e_multiples.size(); i++)
	//{
	//	cout << e_multiples.at(i) << " ";
	//}
	//cout << endl;
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < e_multiples.size(); j++)
		{
			//cout << (t * i) + 1 << endl;
			if ((t * i) + 1 == e_multiples.at(j))
			{
				return j + 1;
			}
		}
	}
}

int main(int argc, const char * argv[]) 
{
	int p, q, n, totient, e, d;
	do {
	cout << "please enter a prime number p" << endl;
	cin >> p; //assumes p is prime
	cout << "please enter different prime number q" << endl;
	cin >> q; //assumes q is prime and different than p
	
	n = p * q;
	cout << "n = " << n << endl;
	if (n <= characters.size())
	{
		cout << "please choose larger p and q" << endl;
	}
	} while (n <= characters.size());

	totient = (p - 1) * (q - 1);
	cout << "totient = " << totient << endl;

	cout << "choose a number e that is relatively prime to the totient" << endl;
	cin >> e; //assumes e is entered correctly
	
	d = get_d(e, totient);
	cout << "d = " << d << endl;

	return 0;
}
