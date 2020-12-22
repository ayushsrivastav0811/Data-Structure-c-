#include <iostream>
using namespace std;
int main()
{
	int i, n, max, min;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		max = a[0];
	}
	for (i = 0; i < n; i++)
	{
		max = a[0];

		if (max < a[i])
		{
			max = a[i];
		}
		cout << max << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		min = a[0];

		if (min > a[i])
		{
			min = a[i];
		}
		cout << min << " ";
	}
}
