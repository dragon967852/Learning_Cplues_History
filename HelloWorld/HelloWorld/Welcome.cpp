#include<iostream>
using namespace std;

void Welcome()
{
	string name;
	cout << "Please enter your name :" << endl;
	cin >> name;
	cout << "Hello " << name << endl;
	cin.get();// 因為cin >> name;，所以必須要加一個
}