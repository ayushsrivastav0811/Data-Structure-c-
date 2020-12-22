#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i, a[n];
		if(n==1)
		{
			cout<<"1"<<endl;
			return 0;
		}
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int mx=-1;
		int ans=0;
		for(i=0;i<n-1;i++){
			if(a[i]>mx && a[i]>a[i+1] )
			{
				
				ans++;
		}
			mx=max(mx,a[i]);
		
		
		}
		if(a[n-1]>mx){
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
