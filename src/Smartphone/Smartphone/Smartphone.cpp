#include <iostream>
#include <string>

using namespace std;

class Smartphone {
    string model;
    double price;
    double diagonal;

	void qsort(Smartphone** smphone, int n) {
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

	}

};

int main()
{
	
}
