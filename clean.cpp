#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	string text;
	ifstream MyFile("words.txt");
	ofstream NewFile("dict.txt");
	ll cnt = 0;
	while (getline(MyFile, text))
	{
		ll n = text.length(), i;
		bool poss = true;
		if (n > 3 && n <= 7)
		{
			for (i = 0; i < n; i++)
			{
				if (text[i] < 'a' || text[i] > 'z' || text[i] == ',' || text[i] == '.' || text[i] == '-')
					poss = false;
			}
			if (poss)
				NewFile << text << "\n";
			else
				continue;
		}
	}
	NewFile.close();
}