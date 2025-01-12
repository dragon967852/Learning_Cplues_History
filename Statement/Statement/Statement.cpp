#include<iostream>

using namespace std;
// C++語句 : 順序執行、分支執行、循環執行
int main()// 執行時會先找到主函數，然後從上到下順序執行每條語句
{
	// 語句
	// 簡單語句
	cout << "Hello World" << endl;// 表達式 + 分號;
	// 複合語句
	int i = 0;
	while (i < 5) 
	{// {}刮起來的為block，本身就是語句，結尾不需要分號
		int a = i;
		cout << a << endl;
		++i;
	}

	// 條件分支 : if & switch
	int age = 10;
	if (age >= 18) 
	{// 如果只有一條語句，可以移除括號，但注意只會執行第一條語句
		cout << "Welcome, adult!" << endl;
	}
	else 
	{
		cout << "No Welcome!" << endl;
	}
	char score;
	cout << "Please enter your score :" << endl;
	cin >> score;
	switch (score)
	{
	case 'A':
		cout << "Very good!" << endl;
		break;
	case 'B':
		cout << "Well!" << endl;
		break;// break語句的作用是"中斷"，會直接跳轉到switch語句結構外面，如果沒添加會持續執行switch裡面的判斷式
	case 'C':
		cout << "Not bad!" << endl;
		break;
	default:// default是可選的，表示為默認要執行的
		cout << "too bad!" << endl;
		break;
	}
	cin.get();

	//循環 : while, for
	int counter = 1;
	while (counter <= 10) 
	{// 如果為while(true)會持續無限循環下去
		cout << "This is " << counter++ << " round" << endl;
	}
	do
	{// 先執行後判斷
		cout << "Now is last " << --counter << " round " << endl;
		cout << "GoodBye!" << endl;
	} while (counter > 1);
	for (int counter2 = 1; counter2 <= 10; counter2++)//可以用for(;;)永遠為真
	{
		cout << "Now is " << counter2 << " round " << endl;
	}
	for (int num : {1, 3, 5, 7, 9})//序列表 : 範圍循環
	{
		cout << "Now is " << num << endl;
	}

	// 跳轉 : break表示要跳出，只能出現在switch, while, do while, for中
	int iBreak = 1;
	while (true)
	{
		cout << "Now is " << iBreak++ << endl;
		if (iBreak > 10)
		{
			break;
		}
	}
	// 繼續 : continue 繼續執行循環，針對最近的一層"循環"有效
	for (int iContinue = 1; iContinue <= 100; iContinue++)
	{
		cout << "\t";
		if (iContinue % 7 == 0 || iContinue % 10 == 7 || iContinue / 10 == 7)
			continue;
		cout << iContinue;
		if (iContinue % 10 == 0)// 遇10換行
		{
			cout << endl << endl;// endl換行
		}
	}
	// 標籤 : goto跟變量類似，只帶一條語句的標示符
	int x = 0;
begin:
	cout << "Start programming..." << endl;
	do
	{
		cout << "x = " << ++x << endl;
	} while (x < 10);
	if (x < 15)
	{
		cout << "Go back to strat point" << endl;
		goto begin;// 非常靈活但也非常危險，有時候會怕跳不出來，一般不推薦使用
	}
	cout << "Progamming done!" << endl;
	cin.get();
	return 0;// return 終止函數運行並返回結果，若沒有要返回，一般這句可以省略
}