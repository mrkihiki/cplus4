﻿// lab4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int fun(int a,int n,int nn,int otv,int skok)
{
	if (n > 1) { if (nn > 1) { otv += skok; nn--;  fun(a, n, nn, otv, skok); } else {   n--; fun(a, n, a, otv, otv); } }
	else { return otv; }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n, otvet;
	cout << "Введите число a "; cin >> a;
	bool prov = true;
	while (prov)
	{
		cout << "n = "; cin >> n;
		if (n >= 1) { prov = false; }
		else { cout << "введите n >= 1" << endl; }
	}
	otvet = fun(a,n,a,a,a);
	cout << "otvet = " << otvet;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
