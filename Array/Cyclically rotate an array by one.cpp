#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	i = n - 1;
	while (arr[i] != arr[0])
	{
		swap(arr[i], arr[i--]);
	}
	for (i = 0; i < n; i++)
	{
		cout << arr[i];
	}
}
