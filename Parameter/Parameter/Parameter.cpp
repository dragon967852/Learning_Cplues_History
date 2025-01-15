#include<iostream>
using namespace std;

// call by value : 數據複製近來，執行完之後馬上又銷毀，所以main的n永遠顯示為0
void increase(int x)
{
	++x;
}

// call by address : 將變數的位址傳遞近來，執行完後銷毀，但變數會存在
void increase2(int* p)
{
	++(*p);
}

// call by reference : 將變數引用(別名)進來函數，相較於call by value，是可以不用變數複製，可以提高運行效率
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

// ->是成員訪問運算符，通常用於指針訪問類或結構的成員，作用相當於.，但專門用於指針 pointer->member == (*pointer).member
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