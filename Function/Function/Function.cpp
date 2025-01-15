#include<iostream>// 尖括號表示為內建library
#include"utils.h"//雙引號表示自訂義，在當前文件裡面搜尋就好了
using namespace std;
// Function
// 函數裡面的大括弧就是所謂的作用域，裡面的參數也只有存在這些作用域裡頭，不會被其他函數使用，統稱-局部變量
// 如果想要延伸一個局部變量的生命週期，就可以在定義局部變量加上static，叫做局部靜態對象，意思是不會隨著函數不作用被銷毀，但是仍然只存在於這個作用域
// 寫函數時要寫在主函數之前，因為build code 掃描會從上到下，放到主函數下面，會不認得，除非先簡單定義有這個函數(撇除作用域的寫法)，再放到最後面
// 

// 設計平方和
int square(int x)// 聲明函數 // x為形參 // 可以不傳入任何東西，可以為空 // 如果不返回值，可以用void
{
	return x * x;
}

// 階乘函數
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
// 複製字符串
string copyStr(string str, int n)
{
	string result;
	while (n > 0)
	{
		result += str;
		--n;
	}
	return result;
}
// 顯示自身函數的生命週期 : 被調用之後就被銷毀
int callCount()
{
	static int count = 0;//變量會在執行完這個作用域之後就被銷毀 // 可以在前面加入static，保持變量的生命週期 //而此時的初始化只會被定義一次，即使不進行初始化，系統也會執行一次為0
	++count;
	cout << "被調用的次數 " << count << " 次!" << endl;
	return count;
}
int main()
{
	int n = 6;
	cout << n << " square = " << square(n) << endl;// 傳入進去的為實參

	cout << "5 & 7 的平方和為 " << cubeSum(5, 7) << endl;

	cout << "5的階乘為 : " << factorial(5) << endl;

	cout << copyStr("Hello ", 5) << endl;

	for(int i = 0; i < 5; i++)
	{
		callCount();
	}
	cin.get();
	return 0;
}