#include<iostream>
using namespace std;

int main()
{
	float fA3 = 20;
	short iA1 = 3;
	cout << "fA3/iA1 = " << fA3 / iA1 << endl;// 將會使用float顯示，如果使用float做計算
	cout << "fA3/0 = " << fA3 / 0 << endl;// 數值會無限大inf
	//lVaule & rVaule 左值 & 右值
	int j = 0, i = 0;
	j = i++;// i++ => i = i + 1 
	cout << "j = i++ " << j << endl;// 因為後加，所以j為0
	i = 0;
	j = ++i;
	cout << "j = ++i " << j << endl;// 因為先加，所以j為1
	// 算術運算
	cout << "( 10 == 4 ) + 6 " << (10 == 4) + 6 << endl;// 算術運算 > 關係運算，所以要加()
	// 邏輯運算 : !, &&, ||
	cout << "!(1 < 2 || 3 >= 5) = " << !(1 < 2 || 3 >= 5) << endl;
	// 短運算
	int iShortCircuit = 0;
	1 < 2 || ++iShortCircuit;// 因為先前已經可以判別出結果，所以後面的就不需要再做計算
	cout << "i = " << iShortCircuit << endl;// 所以iShortCircuit為0
	// 條件式運算 : condition ?  expression1 : expression2, lowest level
	cout << ((1 < 2 && ++i) ? "true" : "false") << endl;
	// 位元運算
	unsigned char bits = 0xb5;
	cout << hex;// 只顯示16進制
	cout << "bits << 2 = " << (bits << 2) << endl;// 位元運算將會把變數轉換為int，如果此變數型態小於int的話
	// 位元邏輯運算
	unsigned char uc1 = 5;//  0000 0101
	unsigned char uc2 = 20;// 0001 0100
	cout << "~uc = " << ~uc1 << endl;
	cout << "uc1 ^ uc2 = " << (uc1 ^ uc2) << endl;
	// 隱轉換
	short s = 15.2 + 20;
	cout << dec;
	cout << "s = " << s << endl;// 因為型態為short，所以此變數會失去超過的數值
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;//系統會自動轉換為較長的型態
	cout << "s's long " << sizeof s << endl;
	cout << "sizof(15.2 + 20) = " << sizeof(15.2 + 20) << endl;// double
	int iImplicit = -1;
	cout << "(0 < iImplicit < 100) = " << (0 < iImplicit < 100) << endl;// 經典題目 : 系統會先判別0 < iImplicit，得出結果在與 < 100作判別
	// 強制語言轉換
	int total = 20, num = 6;
	double avg = total / num;
	cout << "avg = " << avg << endl;
	cout << "avg = " << (double)total / num << endl;// C語言風格，把total強制轉換為double再進行運算
	cout << "avg = " << double(total) / num << endl;// C++風格，double為函數，處裡total
	cout << "avg = " << static_cast<double>(total) / num << endl;//C++強制類型轉換運算符，為C++底層的轉換運算符


	cin.get();
}