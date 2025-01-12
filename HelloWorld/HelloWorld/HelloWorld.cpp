// .cpp = c plus
// .sln is project edit entry
// .cpp => compile => .obj + library => .exe
#include<iostream>// include library
using namespace std;// 使用iostream的namespace

void Welcome();// 從Welcome.cpp呼叫

int main()//宣告一個int的函數，()中可以看要代入什麼值。main為一個程序的進入點，不可以有兩個main在同一個project裡
{
	cout << "Hello World" << endl;// std::cout << "Hello World" << endl;
	Welcome();

	cin.get();// compile時，等待輸入後才可以結束。也可以寫成system("pause");但通常不建議，因為會呼叫到底層。
	return 0;// 如果不回傳，可以寫，也可以不寫
}