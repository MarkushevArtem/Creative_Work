#include<iostream>
#include<ctime>
using namespace std;
int i, j, d, a;
void SortShella(int *arr, int size)
{
	d = size / 2;
	while (d > 0)
	{
		for (i = 0; i < size - d; i++)
		{
			j = i;
			for (int j = i; j < (size - d); j += d)
			{
				if (arr[j] > arr[j + d])
				{
					a = arr[j];
					arr[j] = arr[j + d];
					arr[j + d] = a;
				}
			}
		}
		if (d % 2 == 1 && d != 1)
		{
			d = d / 2 + 1;
		}
		else
		{
			d = d / 2;
		}
	}
}
int main()
{
	int size;
	setlocale(0, "");
	srand(time(0));
	cout << "Размер массива: "; 
	cin >> size;
	int* arr = new int[size]; 
	for (i = 0; i < size; i++) 
	{
		arr[i] = rand() % 100;
		cout << "[" << arr[i] << "]" << ' ';
	}
	cout << endl;
	cout << "Отсортированный массив: " << endl;
	SortShella(arr, size);
	for (i = 0; i < size; i++)
		cout << "[" << arr[i] << "]" << " ";
	delete[] arr;
	return 0;
}
