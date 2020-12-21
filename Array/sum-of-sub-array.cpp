#include<iostream>
using namespace std;

int main()
{
	int n,i,j,sum=0;
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
		for(j=i;j<n;j++)
		{
			sum+=A[i]+A[j];
		}
	}
	cout<<sum;
}
	
	
	
	
	
	
	
	

