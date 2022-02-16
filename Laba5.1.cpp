#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(0));
	int arr[50][50], m, n, min;
	cout << "Введите колиство строк и столбцов массива: ";
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 8;
			cout << "[" << arr[i][j] << "]";
		}
		cout << endl;
	}
	int a = arr[0][0];
	min = arr[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == min)
			{
				min = a; 
			}
			else if (arr[i][j] < min) 
				{
					a = min;  
					min = arr[i][j]; 
				}
		}
	cout << "Минимальное неповторяющееся число массива: " << min << endl;
	return 0;
}