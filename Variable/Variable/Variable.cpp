#include<iostream>
using namespace std;

int number;// �����ܶq�|�ۤv��l��
#define PI 3.14 // ���w�q�A�ݭn�����j�g�A������ĳ�ϥΡA�]���o���|�w�q�ܶq�����A

int main()
{
	// ����ϥ�C++������r
	// ����ϥ������u
	// �ϥΦ۩w�q���`�q��ĳ�j�g
	int number = 1;
	cout << "local number = " << number << endl;// �p�G�S���ϧO�ܼơA�t�η|�u���Ҽ{�ϰ��ܼƪ�
	cout << "global number = " << ::number << endl;// �i�H�ϥ�::�h�ϥΥ����ܶq
	const float pi = 3.14;// �۸���#define�A��ĳ��const�Ө��N
	// int ��4byte�Ashort�������int�Along����u��int
	// long long��8byte�Afloat��4 byte�Adouble�O8byte
	int iA = 20;
	long long iB = 20;
	double fTr = 3.79E-23;// 10^-23
	cout << sizeof iA << endl;
	cout << sizeof iB << endl;
	cout << sizeof fTr << endl;

	// ����
	short s1 = 32768;// �p�G����A�ƭȱN�|�^�� 2^-15~2^15-1�A�|�ϥΤ�+1�A��16bit�O�ΨӧP�_���t��
	cout << "s1 = " << s1 << endl;
	char c = 65;//�o�Oasci code�X
	cout << "c = " << c << endl;
	bool b1 = true;// �o�u���F1 byte
	cout << "sizeof b1 = " << sizeof b1 << endl;
	// �r����
	// �q�{��int & double
	1UL;// unsigned long
	036L;// type long of octonary
	1.25;// type double
	3.14f;// type float
	'A';// �r��
	"Hello World"; // �r��
	cout << "Hello World!\t\"Hello World C++!\"\n" << endl;// �i�H�ϥ�\"�h���"
	// �۰ʧ��ܫ��A
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