#include <iostream>
#include<ctime>
using namespace std;

void SortHoara(int* arr, int f, int l)
{
	int CentrElement = arr[(f + l) / 2];
	int i = f, j = l, value;
	while (i <= j)
	{
		while (arr[i] < CentrElement)
		{
			i++;
		}
		while (arr[j] > CentrElement)
		{
			j--;
		}
		if (i <= j)
		{
			value = arr[i];
			arr[i] = arr[j];
			arr[j] = value;
			i++;
			j--;
		}
	}
	if (i < l)
	{
		SortHoara(arr, i, l);
	}
	if (f < j)
	{
		SortHoara(arr, f, j);
	}
}

int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[100], size;
	cout << "Введите количество элементов массива: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << "[" << arr[i] << "]" << " ";
	}
	cout << endl;
	int i = 0, j = size - 1;
	SortHoara(arr, i, j);
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "[" << arr[i] << "]" << " ";
	}
	return 0;
}