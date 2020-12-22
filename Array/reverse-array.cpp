//  Reverse of array
#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin >> n;
	int a[n], i, j;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp;
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
	for (i = 0; i < n; i++)
	{

		cout << a[i] << " ";
	}
}
