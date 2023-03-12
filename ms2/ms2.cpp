#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RUSSIAN");
	int a[100];
	int n;
	cout << "Введите количество элементов массива : ";
	cin >> n;
	cout << "Заполните массив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива: ";
		cin >> a[i];
	}
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum =sum+a[i];
	}
	cout << "Среднее арифметическое занчение элементов массива: " << sum;

	int q=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			q = q + 1;
		
	}
	cout <<endl <<"Количество отрицательных элементов: " << q;
}


