#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	// Ū�X
	ifstream input("input.txt");
	
	// ����v��Ū��
	//string word;
	//while (input >> word)
	//{
	//	cout << word << endl;
	//}
	// �v��Ū��
	string line;
	while (getline(input, line))
	{
		cout << line << endl;
	}
	// �v�Ӧr��Ū��
	//char ch;
	//while (input.get(ch))
	//{
	//	cout << ch << endl;
	//}

	// ��X
	//ofstream output("Output.txt");
	//char ch1;
	//while (input.get(ch1))
	//{
	//	output << ch1 << endl;
	//}

	cin.get();
}
