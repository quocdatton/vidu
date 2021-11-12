#include <iostream>
using namespace std;
int hieu(int a, int b){
	return a - b;
};
int tong(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if (pheptoan == '-')
	{
		int hieuso = hieu(a, b);
		cout << "hieu la" << hieuso;
	}
	else
	{
		return 0;
	}
	system("pause");
	return 0;
}