#include <iostream>
#include <string>
#include <fstream>
#include "Smartphone.h"

using namespace std;

	/*void Qsort(Smartphone *smphone, int n) {
		Smartphone* temp;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (smphone[j]->model < smphone[j + 1]->model || smphone[j]->model == smphone[j + 1]->model && smphone[j]->diagonal < smphone[j + 1]->diagonal) {
					temp = smphone[j];
					smphone[j] = smphone[j + 1];
					smphone[j + 1] = temp;
				}
			}
		}
	}*/

//void SetInfo(Smartphone* smphone, int n);
//void SaveInFile(Smartphone* smphone, string FileName, int n);

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
		/*for (int i = 0; i < num; i++) {
			Smartphones[i] = new Smartphone;
			cout << "Модель смартфона: ";
			cin >> Smartphones[i]->model;
			cout << "Цена смартфона: ";
			cin >> Smartphones[i]->price;
			cout << "Размер диагонали экрана смартфона: ";
			cin >> Smartphones[i]->diagonal;
			cout << endl;
		};*/
		/*cout << "До сортировки: " << endl << endl;
		for (int i = 0; i < num; i++) {
			cout << "Модель смартфона: " << Smartphones[i]->model << "\nЦена смартфона: " << Smartphones[i]->price << " руб." << "\nРазмер диагонали экрана смартфона: " << Smartphones[i]->diagonal << " дюймов" << "\n\n";
		}*/

		delete[] Smartphones;
		system("pause");
		return 0;
	}
	catch (int c) {
		if (c == 1)
			cout << "Размер массива некорректен!" << endl;
	}
	
}