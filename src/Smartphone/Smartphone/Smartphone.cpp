#include <iostream>
#include <string>
#include <fstream>
#include "Smartphone.h"

using namespace std;

void SetInfo(Smartphone* smphone, int n);
void SaveInFile(Smartphone* smphone, string FileName, int n);
Smartphone* Load(string FileName, int n);
void Sort(Smartphone* smphone, int n);
void GetInfo(Smartphone* smphone, int n);

int main()
{
	try {
		setlocale(LC_ALL, "Russian");
		string FileName;
		cout << "Введите адрес файла: ";
		cin >> FileName;
		int num;
		cout << "Введите количество элементов в массиве: ";
		cin >> num;
		if (num == 0)
			throw 1;
		cout << endl;
		Smartphone* Smartphones = new Smartphone[num];
		SetInfo(Smartphones, num);
		SaveInFile(Smartphones, FileName, num);
		cout << "До сортировки: " << endl;
		GetInfo(Smartphones, num);
		Smartphones = Load(FileName, num);
		Sort(Smartphones, num);
		SaveInFile(Smartphones, FileName, num);
		system("cls");
		cout << "После сортировки: " << endl;
		GetInfo(Smartphones, num);
		delete[] Smartphones;
		system("pause");
		return 0;
	}
	catch (int c) {
		if (c == 1)
			cout << "Размер массива некорректен!" << endl;
	}
	
}