#include <iostream>
#include <string>
#include <fstream>
#include "Smartphone.h"
using namespace std;

void SaveInFile(Smartphone* smphone, string FileName, int n)
	{
		ofstream File;
		File.open(FileName);
		for (int i = 0; i < n; i++)
		{
			File << smphone[i].model << "\n";
			File << smphone[i].price << "\n";
			File << smphone[i].diagonal << "\n";
		}
		File.close();
	}

	void SetInfo(Smartphone* smphone, int n) {
		for (int i = 0; i < n; i++) {
			cout << "Модель автомобиля: ";
			cin >> smphone[i].model;
			cout << "Цена автомобиля: ";
			cin >> smphone[i].price;
			cout << "Размер диагонали экрана смартфона: ";
			cin >> smphone[i].diagonal;
			cout << endl;
		}
	}
}

