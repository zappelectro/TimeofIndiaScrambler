#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	string str = "etaghil";
	ll i;
	char cmp = str[0];
	ifstream NewFile("dict.txt");
	int n = str.length();
	unsigned int opsize = pow(2, n);
	for (int counter = 1; counter < opsize; counter++)
	{
		string subs = "";
		for (int j = 0; j < n; j++)
		{
			if (counter & (1 << j))
				subs.push_back(str[j]);
		}
		do
		{
			if (subs.length() >= 4 && subs.find(cmp) != string::npos)
			{
				cout << subs << "\n";
			}
		}
		while (next_permutation(subs.begin(), subs.end()));
	}
}