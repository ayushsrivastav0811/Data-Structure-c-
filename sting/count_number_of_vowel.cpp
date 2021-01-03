#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100];
	int count=0,i;
	cin.get(s,100);
	for(i=0;s[i]!='\0';i++){
	
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
		count++;
	}
}
cout<<count;
	
}
