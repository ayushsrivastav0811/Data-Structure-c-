#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	i = 0;
	j = n - 1;
	while (a[i] < a[j])
	{
		while (a[i] < 0)
		{
			i++;
		}
		while (a[j] >= 0)
		{
			j--;
		}
		if (i < j)
		{
			swap(a[i], a[j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
