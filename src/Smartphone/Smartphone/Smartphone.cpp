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
		ifstream File;
		cout << "Введите адрес файла: ";
		cin >> FileName;
		File.open(FileName);
		if (!File.is_open())
			throw 1;
		int num;
		cout << "Введите количество элементов в массиве: ";
		cin >> num;
		if (num == 0)
			throw 2;
		cout << endl;
		Smartphone* Smartphones = new Smartphone[num];
		SetInfo(Smartphones, num);
		SaveInFile(Smartphones, FileName, num);
		cout << "До сортировки: " << endl;
		GetInfo(Smartphones, num);
		Smartphones = Load(FileName, num);
		Sort(Smartphones, num);
		SaveInFile(Smartphones, FileName, num);
		//system("cls");
		cout << "После сортировки: " << endl;
		GetInfo(Smartphones, num);
		delete[] Smartphones;
		system("pause");
		return 0;
	}
	catch (int c) {
		if (c == 1)
			cout << "Ошибка! Файл не открыт!" << endl;
		if (c == 2)
			cout << "Размер массива введен некорректно!" << endl;
		if (c == 3)
			cout << "Модель смартфона введена некорректно!" << endl;
		if (c == 4)
			cout << "Цена смартфона введена некорректно!" << endl;
		if (c == 5)
			cout << "Размер диагонали экрана смартфона введен некорректно!" << endl;
	}
	
}