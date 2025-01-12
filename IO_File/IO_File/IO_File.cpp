#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	// 讀出
	ifstream input("input.txt");
	
	// 單詞逐個讀取
	//string word;
	//while (input >> word)
	//{
	//	cout << word << endl;
	//}
	// 逐行讀取
	string line;
	while (getline(input, line))
	{
		cout << line << endl;
	}
	// 逐個字符讀取
	//char ch;
	//while (input.get(ch))
	//{
	//	cout << ch << endl;
	//}

	// 輸出
	//ofstream output("Output.txt");
	//char ch1;
	//while (input.get(ch1))
	//{
	//	output << ch1 << endl;
	//}

	cin.get();
}
