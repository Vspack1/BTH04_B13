//Bai 13
#include <iostream>
using namespace std;

int main() {
	int x, chon, tong;
	do {
		cout << "Nhap so x: \n";
		cin >> x;
		tong += x;
		cout << "Nhap tiep x: (Co-1/Khong-0) \n";
		cin >> x;
	} while (chon != 0);
	system("pause");
	return 1;
}