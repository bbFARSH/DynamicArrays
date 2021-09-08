#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	/*int n;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	delete[] arr;*/
	int n;
	int Evencrl = 0, Oddcrl = 0;
	cout << "¬ведите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	int* Even = new int[Evencrl];
	int* Odd = new int[Oddcrl];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2)
		{
			Even[Evencrl++] = arr[i];
		}
		else
		{
			Odd[Oddcrl++] = arr[i];
		}
	}
	for (int i = 0; i < Evencrl; i++)
	{
		cout << Even[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < Oddcrl; i++)
	{
		cout << Odd[i] << "\t";
	}
	delete[] arr;
	delete[] Even;
	delete[] Odd;
}