#include <iostream>
#include <cmath>
using namespace std;

void one() {
	int a, b, c;
	cout << "Ввод  a b c : ";
	cin >> a >> b >> c;
	int d = b * b - 4 * a * c;    
	if (d > 0) {
		int x1 = (-b + sqrt(d)) / (2 * a);
		int x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1 =  " << x1 << endl;
		cout << "x2 =  " << x2 << endl;
	}
	else if (d == 0) { 
		int x1 = (-b + sqrt(d)) / (2 * a);
		cout << "x = " << x1 << endl;
	}
	else if (d < 0) { cout << "Корней нет"; }
}

void two() {
	int a, b;
	cout << "Введите границы: ";
	cin >> a >> b;
	cout << "Результат: " << a + rand() % b << endl;
}

void three() {
	int array[10];
	cout << "Заполните массив: ";
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}

	cout << "Массив: " << endl;
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}


	cout << "Результат: " << endl;
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
}



int main() {
	setlocale(LC_ALL, "ru");

	one();
	two();
	three();



	return 0;
}