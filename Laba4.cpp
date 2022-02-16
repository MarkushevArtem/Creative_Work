#include<iostream>
#include<ctime>
using namespace std;
void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "[" << arr[i] << "]" <<" ";
	}
	cout << endl;
}

void DeleteElements(int*& arr, int& size)
{
	int* newArray = new int[size];
	for (int i = 5; i < size; i++)
	{
		newArray[i - 5] = arr[i];
	}
	size -= 5;
	delete[] arr;

	arr = newArray;

}

void AddElemens(int*& arr, int& size, int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;

	delete[] arr;

	arr = newArray;

}

void main()
{
	srand(time(0));
	setlocale(0, "");
	int size, value;
	cout << "Введите количество элементов в массиве: ";
	cin >> size;
	int* arr = new int[size];
	FillArray(arr, size);
	cout << "Массив: " << endl;
	ShowArray(arr, size);
	DeleteElements(arr, size);
	cout << "Массив без 5 первых элементов: " << endl;
	ShowArray(arr, size);
	for (int i = 0; i < 3; i++) {
		value = rand() % 100;
		AddElemens(arr, size, value);
	}
	cout << "Конечный массив: " << endl;
	ShowArray(arr, size);
	delete[] arr;
}