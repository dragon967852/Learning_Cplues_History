#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	// Define arrary
	// double arrary[i]; // 錯誤，元素不能為變量
	// Initialize
	float iA[] = { 2.5, 3.8, 1.79 };// 可以不指定長度
	short iA1[] = { 3, 6, 9 };// 指對數組前三個元素賦值，其他元素為0
	char c[10];
	cout << "c = " << c << endl;// 如果沒有初始化，會顯示0xCC;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "each sizeof(a) = " << sizeof(a[0]) << endl;
	int iAlong = sizeof(a) / sizeof(a[0]);
	cout << "a's long = " << iAlong << endl;// arrary的長度
	cout << "a = " << a << endl;// 會訪問到a的儲存位置
	for (int num : a)// 直接輸出arrary的數值
	{
		cout << num << endl;
	}
	//// 多維
	int aA[3][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};// int a1[3][4] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9, 10, 11, 12};，也可以寫成int a1[][4]讓系統自己去計算
	cout << "aA each line size = " << sizeof(aA[0]) << endl;

	// Vector : 是個模板類，容納一堆數據，其實就是一組類型相同的數據對象的集合。相較於數組，數組是長度固定，功能較少，安全性沒有保證。但數組更加底層，vector為數組上層抽象，會造成運行效率低。
	vector<int> v1;// 默認初始化的容器，可以隨後再新增元素
	vector<char> v2 = { 'a', 'b', 'c' };
	vector<short> v3(5, 100);// 為5個變數，指定都是100，如果不寫默認就是0
	cout << v2[0] << endl;
	cout << "v2 long size = " << v2.size() << endl;
	v3.push_back(78);//新增元素
	cout << v3[5] << endl;

	// String : iostream中也有定義string，但較為基本，如果要完整使用，建議include string。數組長度是固定的，但是string本身長度不固定，string之間可以透過相加方式結合
	string s1 = "Hello World!";// 默認初始化 : string s1;
	cout << s1 << endl;
	s1[s1.size() - 1] = '\?';
	cout << s1 << endl;
	// 兩字串相加
	string s2 = s1 + "Jen";// string s2 = "Hello World" + "Jen";會error，因為string是利用char做運算，所以其中要有string才可以調用function來運算
	cout << s2 << endl;
	cout << (s1 == s2 ? "same" : "no same") << endl;
	// 比較字串
	string s3 = "hehehe";
	cout << (s1 > s3 ? "true" : "false") << endl;// 每個字符比大小
	char str[6] = { 'h', 'e', 'l', 'l', 'l', '\0' };// 為C語言所使用的字符串，必須要包含\0，否則會出現亂碼
	char str1[] = "hello";
	cout << str << endl;
	cout << "str1 size long = " << sizeof(str1) << endl;
	// 利用string儲存輸入的字串
	string strH, strW;
	cout << "Please enter \"Hello World\" :" << endl;// 如果要輸入兩個有空格的字串，還要多一個變數來儲存，不然一個字串只會存一個不帶"空字元"的字串
	cin >> strH;
	cout << strH << endl;
	cin >> strW;
	cout << strW << endl;
	cin.get();
	// getline 讀取一整行訊息，直到遇到換行為止
	string getString;
	cout << "Please enter \"Hello World\" :" << endl;
	getline(cin, getString);
	cout << "getString = " << getString << endl;
	// cin.get()讀取一個字符，會跟
	char ch;
	cout << "Please enter one word :" << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	cin.get();// 會接收到輸入玩ch後的enter
	cin.get();

}
