#include <iostream>
using namespace std;
int main()
{
	int n, m, i, j;
	cin >> n >> m;
	int arr1[n];
	int arr2[m];
	cout << "enter the first array:";
	for (i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	cout << "enter the second array element :";
	for (j = 0; j < m; ++j)
	{
		cin >> arr2[j];
	}
	//		for union
	i = 0, j = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
			cout << arr1[i++] << " ";

		else if (arr1[i] > arr2[j])
			cout << arr2[j++] << " ";

		else
		{
			cout << arr1[i++] << " ";
			j++;
		}
	}
	while (i < n)
	{
		cout << arr1[i] << " ";
		i++;
	}

	while (j < m)
	{
		cout << arr2[j] << " ";
		j++;
	}
	return 0;
}
//     for intersection
