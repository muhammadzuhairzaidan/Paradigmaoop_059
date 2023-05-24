#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;

	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
	int jumlah(int a, int b) {
		return a + b;
	}
};


class pelajar : public orang {
public:
	string sekolah;

	pelajar(string pNama, string pSekolah) :
		orang(pNama),
		sekolah(pSekolah) {
		cout << "pelajar dibuat\n" << endl;

	}
	~pelajar() {
		cout << "pelajar dihapus \n" << endl;

	}
	string perkenalan(){
		return "Halo, nama saya " + nama + "dari sekolah " + "\n\n";
		}
};