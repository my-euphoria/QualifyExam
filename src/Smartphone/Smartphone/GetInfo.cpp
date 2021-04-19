#include <iostream>
#include <cstring>
#include <fstream>
#include "Smartphone.h"
using namespace std;

Smartphone* Load(string FileName, int n)
{
	Smartphone* Smartphones = new Smartphone[n];
	ifstream File;
	File.open(FileName);
	for (int i = 0; i < n; i++)
	{
		File >> Smartphones[i].model;
		File >> Smartphones[i].price;
		File >> Smartphones[i].diagonal;
	}
	File.close();
	return Smartphones;
}

void Sort(Smartphone* smphone, int n) {
	Smartphone temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (smphone[j].model < smphone[j + 1].model || smphone[j].model == smphone[j + 1].model && smphone[j].diagonal < smphone[j + 1].diagonal) {
				temp = smphone[j];
				smphone[j] = smphone[j + 1];
				smphone[j + 1] = temp;
			}
		}
	}
}

void GetInfo(Smartphone* smphone, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Модель смартфона: " << smphone[i].model << endl;
		cout << "Цена смартфона: " << smphone[i].price << " руб." << endl;
		cout << "размер диагонали экрана смартфона: " << smphone[i].diagonal << endl;
		cout << endl;
	}
}
