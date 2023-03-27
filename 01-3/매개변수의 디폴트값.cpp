#include <iostream>
using namespace std;

int BoxVolume(int l, int w, int h) {
	int v = l * w * h;
	return v;
}

int BoxVolume(int l, int w) {
	int v = l * w;
	return v;
}

int BoxVolume(int l) {
	return l;
}

int main(void) {
	cout << "[3, 3, 3]: " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D]: " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D]: " << BoxVolume(7) << endl;
}