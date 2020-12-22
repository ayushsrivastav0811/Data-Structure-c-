#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout<<"enter the total element of array:";
	cin>>n;
	int A[n];
	cout<<"enter the element of array:";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<n;i++)
	{
		int current=0;
		for(j=i;j<n;j++)
		{
			current+=A[j];
			cout<<current;
			cout<<endl;
		}
		
	}
	
}
	
	
	
	
	
	
	
	

