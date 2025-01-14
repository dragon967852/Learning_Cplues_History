#include<iostream>
using namespace std;

// struct 
struct StudentInfo// 定義struct or class時都會把首要字母大寫
{
	string name;
	int age;
	double score;
}stu2 = { "小明", 19, 6 };//創建數據並做初始化
// Enum 枚舉類型
enum Week
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun// 如果途中改變，if Thu = 10，後面的變數也都會一併改變
};

int main()
{
	// Struct
	StudentInfo stu = { "Jen", 18, 75.0 };//創建數據並做初始化
	cout << "學生姓名 : " << stu.name << "\t年齡:" << stu.age << "\t成績:" << stu.score << endl;// 訪問數據
	//結構體數組
	StudentInfo s[3] =
	{
		{"小紅", 16, 85.5},
		{"小白", 17, 72.5},
		{"小黃", 18, 66.5}
	};
	for (StudentInfo stulist : s)
	{
		cout << "學生姓名 : " << stulist.name << "\t年齡:" << stulist.age << "\t成績:" << stulist.score << endl;// 訪問數據
	}

	// Enum
	Week w1 = Tue;
	Week w2 = Week(3);// 強制寫入常數3，不能寫Week w2 = 3;。寫入的Week(n)，n可以任意數。建議還是按照enum所定義的去使用
	Week w3 = Fri;
	cout << "w1 = " << w1 << endl;// 從0開始
	cout << "w3 = " << w3 << endl;// 從0開始

	cin.get();
}
