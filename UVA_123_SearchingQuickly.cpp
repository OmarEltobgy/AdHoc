#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string titles[300][20];
int wordN[300], titleN, ignoreN;
map<string, int> ignore;
vector<pair< string, pair<int, int> > > keys;
string toUpperCase(string temp)
{
	string newS;
	for(int i=0; i<temp.length(); i++)
	{
		if(temp[i] >= 'A' && temp[i] <= 'Z')
		{
			newS += temp[i];
		}
		else
		{
			newS += temp[i]-'a'+'A';
		}
	}
	return newS;
}
void split(string temp)
{
	string str;
	for(int i=0; i<temp.length(); i++)
	{
		if(temp[i] != ' ')
		{
			if(temp[i] >= 'a' && temp[i] <= 'z')
			{
				titles[titleN][wordN[titleN]] += temp[i];
			}
			else
			{
				titles[titleN][wordN[titleN]] += (temp[i]-'A'+'a');
			}
		}
		else if(temp[i] == ' ')
		{
			wordN[titleN] ++;
			while(temp[i] == ' ' && i<temp.length())
			{
				titles[titleN][wordN[titleN]] += temp[i];
				i++;
			}
			i--;
			wordN[titleN] ++;
		}
	}
	wordN[titleN] ++;
}
int main()
{
	int i, j, t, w;
	string temp;
	ignoreN = 0;
	for(i=0; i<300; i++)
	{
		wordN[i] = 0;
	}
	cin >> temp;
	while(temp != "::")
	{
		//cout << temp << endl;
		ignore[temp] = ignoreN;
		ignoreN ++;
		cin >> temp;
	}
	titleN = 0;
	getchar();
	while(getline(cin, temp))
	{
		if(temp == "EOF")
		{
			break;
		}
		split(temp);
		titleN ++;
	}
	for(i=0; i<titleN; i++)
	{
		for(j=0; j<wordN[i]; j++)
		{
			if(titles[i][j][0] != ' ' && ignore.count(titles[i][j]) == 0)
			{
				//cout << titles[i][j] << " " << i << " " << j << endl;
				keys.push_back(make_pair(titles[i][j], make_pair(i, j)));
			}
		}
	}
	sort(keys.begin(), keys.end());
	for(i=0; i<keys.size(); i++)
	{
		temp = keys[i].first;
		t = keys[i].second.first;
		w = keys[i].second.second;
		for(j=0; j<wordN[t]; j++)
		{
			if(j == w)
			{
				cout << toUpperCase(titles[t][j]);
			}
			else
			{
				cout << titles[t][j];
			}
		}
		cout << endl;
	}
	//cout << endl;
	return 0;
}
