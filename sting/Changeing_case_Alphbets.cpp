#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[100];
	int i;
	cin.get(arr,100);
	
	for(i=0;i<=strlen(arr);i++)
	{
		if(arr[i]>=65 && arr[i]<=90)
		{
		arr[i]=arr[i]+32;
		}
		else if(arr[i]>=97 && arr[i]<=122)	
		{
			arr[i]-=32;
		}
	}
	cout<<arr;

}
