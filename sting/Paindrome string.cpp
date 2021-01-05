#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	int i;
	cin.get(str,100);
	bool check=1;
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!=str[n-1-i])
		{
			check=0;
			break;
		}
	}
	if(check==true)
	{
		cout<<"string is Pailndrome";
	}
	else{
		cout<<"not a pailndrome";
	}
	return 0;
}
