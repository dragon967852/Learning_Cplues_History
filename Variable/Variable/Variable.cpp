#include<iostream>
using namespace std;

int number;// 全局變量會自己初始化
#define PI 3.14 // 宏定義，需要全部大寫，但不建議使用，因為這不會定義變量的型態

int main()
{
	// 不能使用C++的關鍵字
	// 不能使用雙底線
	// 使用自定義的常量建議大寫
	int number = 1;
	cout << "local number = " << number << endl;// 如果沒有區別變數，系統會優先考慮區域變數的
	cout << "global number = " << ::number << endl;// 可以使用::去使用全局變量
	const float pi = 3.14;// 相較於#define，建議用const來取代
	// int 佔4byte，short不能長於int，long不能短於int
	// long long為8byte，float為4 byte，double是8byte
	int iA = 20;
	long long iB = 20;
	double fTr = 3.79E-23;// 10^-23
	cout << sizeof iA << endl;
	cout << sizeof iB << endl;
	cout << sizeof fTr << endl;

	// 溢位
	short s1 = 32768;// 如果溢位，數值將會回到 2^-15~2^15-1，會使用反+1，第16bit是用來判斷正負號
	cout << "s1 = " << s1 << endl;
	char c = 65;//這是asci code碼
	cout << "c = " << c << endl;
	bool b1 = true;// 這只佔了1 byte
	cout << "sizeof b1 = " << sizeof b1 << endl;
	// 字面值
	// 默認為int & double
	1UL;// unsigned long
	036L;// type long of octonary
	1.25;// type double
	3.14f;// type float
	'A';// 字符
	"Hello World"; // 字串
	cout << "Hello World!\t\"Hello World C++!\"\n" << endl;// 可以使用\"去顯示"
	// 自動改變型態
	bool bTrans = 25;
	cout << "bool bTrans = " << bTrans << endl;// always is true
	short sTrans = false;
	cout << "short sTrans = " << sTrans << endl; // change to 0
	int iTrans = 3.14;
	cout << "int iTrans = " << iTrans << endl; // only has 3
	float fTrans = 3;
	cout << "float fTrans = " << fTrans << endl;

	cin.get();
	return 0;
}