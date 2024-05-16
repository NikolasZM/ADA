#include <iostream>
using namespace std;

int mal(int n) {
	int val = 1;
	for (int i{ 0 }; i < n; i++) {
		val = val * 2;
	}
	return val;
}

int bien(int n, int x) {
	if (n == 1) {
		return x;
	}
	int aux = bien(n / 2,x);
	return aux*aux;
}




int main() {
	cout << mal(8) << "\n";
	cout << bien(8,2);
}
