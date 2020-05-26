// lab4_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int q=0,p=2;

int fung(int* Arrf, int* Arrg, int nn);
int funf(int* Arrf, int* Arrg, int nn);

int main()
{
	setlocale(LC_ALL, "Russian");
	int* Arrf;
	int* Arrg;
	int  n; bool prov = true;
	while (prov)
	{
		cout << "n = "; cin >> n;
		if (n >= 2) { prov = false; }
		else { cout << "введите n >= 2"<<endl; }
	}
	Arrf = new int[n]; // динамический массив
	Arrg = new int[n]; // динамический массив
	
	cout << "f(1) = "; cin >> Arrf[0];
	cout << "g(1) = "; cin >> Arrg[0];
	cout << endl << "---------------------------" << endl << endl;
	fung(Arrf, Arrg, n);

	int ii=1;
	for (int i = 0; i < n; i++)
	{
		cout << "f(" << ii << ") = " << Arrf[i] << endl;
		cout << "g(" << ii << ") = " << Arrg[i] << endl;
		ii++;
	}
	
   
}


int fung(int* Arrf, int* Arrg, int ng)
{

	if (ng > 0) { Arrg[ng] = funf(Arrf, Arrg, ng - 1) + fung(Arrf, Arrg, ng - 1); return Arrg[ng];}
	else { return Arrg[0]; }


}


int funf(int* Arrf, int* Arrg, int nf)
{


	if (nf > 0) { Arrf[nf] = funf(Arrf, Arrg, nf - 1) * fung(Arrf, Arrg, nf - 1); return Arrf[nf];}
	else { return Arrf[0]; }


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
