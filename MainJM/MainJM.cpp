#include <iostream>
#include <string>
using namespace std;

#include "jantung.h"
#include "manusia.h"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}