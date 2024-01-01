#include <iostream>
using namespace std;
int main()
{
	int* arr;
	int size, max, min, m;

	cin >> size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];


	int j = 0, f = 1;
	while(f<size)
	{
		if (arr[f] <= arr[j])
		{
			j = f;
			min = j;
			f++;
		}
		else
		{
			min = j;
			f++;
		}

	}

	m = size - 1;

	j = m;
	f = j - 1;
	while (f >= 0)
	{
		if (arr[f] >= arr[j])
		{
			j = f;
			max = j;
			f--;
		}
		else
		{
			max = j;
			f--;
		}
	}
	if (min < max)
		max -= 1;
	min = m - min;
	cout << max + min  << endl;

}
