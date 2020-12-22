#include <iostream>
using namespace std;
int main()
{
	int n, i, j, max, min;

	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];

		max = a[0];
		min = a[0];
	}
	for (i = 0; i < n; i++)
	{

		if (max < a[i])
			max = a[i];

		else if (min > a[i])
			min = a[i];
	}
	cout << "Maximum Number is =" << max << endl;
	cout << "Minmum Number is =" << min;
	return 0;
}
