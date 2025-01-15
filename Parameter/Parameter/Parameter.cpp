#include<iostream>
using namespace std;

// call by value : �ƾڽƻs��ӡA���槹���ᰨ�W�S�P���A�ҥHmain��n�û���ܬ�0
void increase(int x)
{
	++x;
}

// call by address : �N�ܼƪ���}�ǻ���ӡA���槹��P���A���ܼƷ|�s�b
void increase2(int* p)
{
	++(*p);
}

// call by reference : �N�ܼƤޥ�(�O�W)�i�Ө�ơA�۸���call by value�A�O�i�H�����ܼƽƻs�A�i�H�����B��Ĳv
void increase3(int& x)
{
	++x;
}

void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int* x, int* y)
{
	int* temp = x;
	*x = *y;
	*y = *temp;
}

void swap3(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

// ->�O�����X�ݹB��šA�q�`�Ω���w�X�����ε��c�������A�@�ά۷��.�A���M���Ω���w pointer->member == (*pointer).member
struct Point {
	int x, y;
	void print() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};
int main()
{
	int n = 0;
	increase(n);
	cout << "n = " << n << endl;
	increase2(&n);
	cout << "n = " << n << endl;
	increase3(n);
	cout << "n = " << n << endl;

	int a = 10, b = 25;
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	int a1 = 10, b1 = 25;
	swap2(&a1, &b1);
	cout << "a1 = " << a1 << " b1 = " << b1 << endl;
	int a2 = 10, b2 = 25;
	swap3(a2, b2);
	cout << "a2 = " << a2 << " b2 = " << b2 << endl;

	Point p = { 10, 20 };
	Point* ptr = &p; 
	ptr->print();
	cout << "x = " << ptr->x << ", y = " << ptr->y << endl;
	cout << "x = " << (*ptr).x << ", y = " << (*ptr).y << endl;
	cin.get();
}