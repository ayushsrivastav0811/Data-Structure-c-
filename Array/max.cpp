#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int i, n;
	cout<<"enter the size of a array:";
	cin>>n;
	int arr[n];
	cout<<"enter the element :";
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int m=-199999;
	for(i=0;i<n;i++){
		m=max(m,arr[i]);
		cout<<m<<endl;
	}
	
	
	return 0;
}
