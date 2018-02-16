#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	const int len = 100;
	int temp = 0, max = 0;
	char mass[len];

	ifstream fs("INPUT.txt", ios::in | ios::binary);
	if (!fs) return 1;
	fs >> mass;
	cout << mass << endl;
	fs.close();

	for (int i = 0; i <= len; i++){
		if (mass[i] == '1') temp++;
		else temp = 0;
		if (temp > max) max = temp;
	}
	ofstream out("OUTPUT.txt");
	out << "Maximal length of ones sequence is " << max << endl;
	system("pause");
	return 0;
}
