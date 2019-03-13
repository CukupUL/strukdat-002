/*
Nama Program	: exercise-01
Nama			: NURUL MA'ARIF
NPM				: 140810180040
Deskriptif		: Menginput nama, umur, goldar, dan jenis kelamin menggunakan stuct
Tahun			: 2019
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang {
	int umur;
	char nama[30];
	char JK[2];
	char goldar[2];
};

int main() {
	Orang orang;
	orang.umur=18;
    strcpy(orang.nama, "Cukup");
    strcpy(orang.JK, "L");
    strcpy(orang.goldar, "O");
	cout << orang.umur << endl;
	cout << orang.nama << endl;
	cout << orang.goldar << endl;
	cout << orang.JK << endl;

}
