#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	long wings = strtol(argv[1], NULL, 10);
	
	long temp = wings;
	
	if (wings % 7 == 0 || wings % 11 == 0 ) {
		cout << "Yes" << endl;
		return 0;
	}
	
	while (!(temp < 11)) {
		if (temp % 7 == 0) {
			cout << "Yes" << endl;
			return 0;
		}
		temp = temp - 11;	
	}
	
	temp = wings;
	
	while (!(temp < 7)) {
		if (temp % 11 == 0) {
			cout << "Yes" << endl;
			return 0;
		}
		temp = temp - 7;	
	}
	
	
	cout << "No" << endl;
	
	return 0;
}
