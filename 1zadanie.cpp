#include<iostream>;

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	cout << "Введите трехзначное число : ";
	cin >> x;
	int a = x % 10, b = x / 100, c = x / 10 % 10;
	bool f = false;
	
	while (f == false) {
		if (((a == b) or (a == c) or (b == c)) or ((x < 100) or (x > 999))) {
			cout << "Введите трехзначное число еще раз: ";
			cin >> x;
			a = x % 10;
			b = x / 100;
			c = x / 10 % 10;
		} 
		else f = true;
	}
	cout << "Все возможные комбинации: \n";
	cout << a << b << c << "\n";
	cout << a << c << b << "\n";
	cout << b << a << c << "\n";
	cout << b << c << a << "\n";
	cout << c << b << a << "\n";
	cout << c << a << b << "\n";
	if ((a > b) && (a > c))
	{
		if (b > c)
			cout << "Самое большое число: " << a << b << c;
		else
			cout << "Самое большое число: " << a << c << b;
	}
	else
	{
		if ((b > a) && (b > c))
		{
			if (a > c)
				cout << "Самое большое число: " << b << a << c;
			else
				cout << "Самое большое число: " << b << c << a;
		}
		else
		{
			if ((c > a) && (c > b))
			{
				if (a > b)
					cout << "Самое большое число: " << c << a << b;
				else
					cout << "Самое большое число: " << c << b << a;
			}
		}
	}
	return 0;
}
