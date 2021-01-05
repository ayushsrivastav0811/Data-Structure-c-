#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cin.get(str,100);
	int i;
     for(i=0;str[i]!='\0';i++)
	{
		
		if(!(str[i]>=65 && str[i]<=90) && !(str[i]>=97 && str[i]<=122) && !(str[i]>=48 && str[i]<=57))
		{
			cout<<"Not a Valid string";
			return 0;
     	}	
	
	
	}
		
		cout<<"valid string";
	return 0;
	
}
