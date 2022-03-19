#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

double f(double x) 
{
	return sin(x) / x;
}

void function()
{
	double a, end = 4, b;
	cout << "Задайте начальную точку интервала возможных значений аргумента:" << " ";
	cin >> a;
	b = (4 - a) / 10;

	for (int i = 0; i < 10; i++)
	{
		double x = b * i + a;
		cout << "Вычисления значений функции : " << " " << f(x) << " " << endl;
	}
}


void fibonacci()
{
	int N, S, MAX;
	int a = 1;
	int b = 1;
	cout << "Введите максимальное значение:" << " ";
	cin >> MAX;
	S = a;
	N = 1;
	while (S + b < MAX)
	{
		S += b;
		
		int next = a + b;
		a = b;
		b = next;
		N++;
	}
	cout << "Вывод суммы чисел Фибоначчи:" << " " << S << " " << "Вывод колличества чисел Фибоначчи:" << " " << N << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	function();
	fibonacci();
}

