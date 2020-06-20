#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int loop;
	int sum = 0;
	for (loop = 0; loop < argc; loop++) {
		long nextInt = strtol(argv[loop], NULL, 10);
		if (nextInt < 0) {
			sum = sum + -nextInt;
		} else {
			sum = sum + nextInt;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
