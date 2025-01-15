#include<iostream>
using namespace std;

int main()
{
	// 引用 : 引用的本質並不是變量，引用只是一個別名，不存放任何的數據，也沒有內存空間。會直接跟一個變數綁定再一起。
	int a = 10, b = 25;
	int& ref = a; // 要直接初始化之後就再也不能更改，就是另一個別名而已。不初始化會報錯。// 也不能直接定義一個數值 int& ref = 10;
	cout << "ref = " << ref << endl;
	cout << "a address = " << &a << endl;
	cout << "ref address = " << &ref << endl;
	ref = 15;
	cout << "a = " << ref << endl;

	// 引用的引用
	int& rref = ref;
	cout << "rref = " << rref << endl;

	// 常量的引用
	const int zero = 0;
	const int& cref = zero;
	int i = 30;
	const int& cref2 = i;// 可以直接綁定不是常量的變量
	i = 50;
	double d = 3.14;
	const int& cref3 = d;// 型態大小一樣就會自動轉換
	cout << "cref2 = " << cref2 << endl;
	cout << "cref3 = " << cref3 << endl;

	// 綁定指針的引用
	int c = 10;
	int* ptr = &c;
	int*& pref = ptr;// 沒有int&*，沒有指向引用的指針
	cout << "pref = " << pref << endl;
	cout << "*pref = " << *pref << endl;
	*pref = 100;
	cout << "*pref = " << *pref << endl;
	

	cin.get();

}