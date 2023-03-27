#include <iostream>
using namespace std;

int main(void) {

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	cout << dbl1 << ' ' << dbl2;
	return 0;
}