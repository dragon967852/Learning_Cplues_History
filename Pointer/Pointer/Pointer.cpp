#include<iostream>
using namespace std;

int main()
{
	// 計算機的數據都存放在內存中，訪問內存的最小單元是字節
	// 定義指針
	int* p;// p 是指向Int類型數據的指針
	int* p1;
	long* p2;
	// 指針的大小會由系統的內存系統環境有關，跟指向的數據類型無關，因為它會存取內存的地址X64 = 8 byte，X86 = 4 Byte
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(p2) = " << sizeof(p) << endl;

	// 指針的應用
	int a = 10;
	long b = 35;

	p = &a;// & 取地址操作符，做初始化，沒有做初始化的叫空效指針，也叫野指針
	p1 = &a;
	cout << "a address = " << &a << endl;
	cout << "a value = " << a << endl;
	cout << "p value = " << *p << endl;
	cout << "p address = " << p << endl;
	*p = 50;
	cout << "p address = " << p << endl;
	cout << "change p value = " << *p << endl;// *解引用

	//空指針
	int* np = nullptr;// 空指針
	np = NULL;// 預處裡變量，為0，表示指向內存的0的位置，但並不代表真的指向0，只是表示不被使用的數據
	cout << "np = " << np << endl;// 輸出為0的地址

	// void* 指針，可以用來存放任意對象的地址，表示指向某個東西
	int i = 100;
	char ch = 'a';
	string s = "hello";
	void* vp;
	vp = &i;
	vp = &ch;
	vp = &s;// 可以進行數據的存放以及比較，但不能*vp取用，因為不知道數據變量到底是什麼

	// 指向指針的指針
	int doublePointer = 1024;
	int* pi = &doublePointer;
	int** ppi = &pi;
	cout << "doublePoint = " << doublePointer << endl;
	cout << "pi = " << pi << endl;
	cout << "ppi = " << ppi << endl;
	cout << "*pi = " << *pi << endl;
	cout << "*ppi = " << *ppi << endl;
	cout << "**pi = " << **ppi << endl;

	// 指向常量的指針
	const int c1 = 10, c2 = 25;
	const int* pc = &c1;// 不能引用int
	cout << "*pc = " << *pc << endl;
	pc = &c2;// 只能改變同為常量的變數
	cout << "change *pc to c2 = " << *pc << endl;

	// 指針常量
	int iPointer = 1000;
	int* const cp = &iPointer;// 一旦初始化之後，就不能再引用其他地址
	cout << "cp = " << cp << endl;
	cout << "*cp = " << *cp << endl;
	*cp = 12;
	cout << "cp = " << cp << endl;
	cout << "*cp = " << *cp << endl;
	cout << "iPointer = " << iPointer << endl;

	// 指向常量的指針常量
	int ccPointer = 50;
	const int* const ccp = &ccPointer;
	ccPointer = 1000;// ccp的指向依然不變，所以ccPointer的改變不會對ccp有影響
	cout << "*ccp = " << *ccp << endl;

	// 指針和數組 : arr[10]，如果想打印arr，會自動轉換成指針，那就會打印出第一個地址，且佔用了型態的byte，也就是arr[0]
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "arr + 1 = &arr[1] = " << arr + 1 << endl;
	cout << "*(arr + 1) = arr[1] = " << *(arr + 1) << endl;
	int* pia = arr;
	cout << "*pia = " << *pia << endl;
	cout << "pia = " << pia << endl;

	// 指針數組和數組指針
	int* pa[5]; // 指針數組
	int(*ap)[5];// 指向數組的指針
	int arrPointer[] = { 1, 2, 3, 4, 5 };
	cout << "sizeof(pa) = " << sizeof(pa) << endl;
	cout << "sizeof(ap) = " << sizeof(ap) << endl;
	pa[0] = arrPointer;// 第一個指針數組指向數組，arrPointer為指向數組的第一個元素
	cout << "arrPointer = " << arrPointer << endl;
	cout << "pa = " << pa << endl;
	ap = &arrPointer;// ap 指向就是整個arrPointer數組
	cout << "*ap = " << *ap << endl;// 第一個元素的地址
	cout << "**ap = " << **ap << endl;
	cout << "*ap + 1 = " << *ap + 1 << endl;
	cout << "*(*ap + 1) = " << *(*ap + 1) << endl;

	cin.get();
}
