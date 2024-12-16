#include <iostream>
#include <vector>
using namespace std;

int main()
{   
	vector<vector<int>> matrice1 = {
		{10, 20, 30},
		{40, 50, 60},
		{70, 80, 90}
	};

	vector<vector<int>> matrice2 = {
		{100, 110, 120},
		{130, 140, 150},
		{160, 170, 180}
	};

	vector<vector<int>> rezultat(3, vector<int>(3, 0));

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			rezultat[i][j] = matrice1[i][j] + matrice2[i][j];
		}
	}

	cout << "Adunare matrice. Rezultatul este: " << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << rezultat[i][j] << " ";
		}
	}

    return 0;
}
