#include<iostream>
using namespace std;

int main()
{
	float fA3 = 20;
	short iA1 = 3;
	cout << "fA3/iA1 = " << fA3 / iA1 << endl;// �N�|�ϥ�float��ܡA�p�G�ϥ�float���p��
	cout << "fA3/0 = " << fA3 / 0 << endl;// �ƭȷ|�L���jinf
	//lVaule & rVaule ���� & �k��
	int j = 0, i = 0;
	j = i++;// i++ => i = i + 1 
	cout << "j = i++ " << j << endl;// �]����[�A�ҥHj��0
	i = 0;
	j = ++i;
	cout << "j = ++i " << j << endl;// �]�����[�A�ҥHj��1
	// ��N�B��
	cout << "( 10 == 4 ) + 6 " << (10 == 4) + 6 << endl;// ��N�B�� > ���Y�B��A�ҥH�n�[()
	// �޿�B�� : !, &&, ||
	cout << "!(1 < 2 || 3 >= 5) = " << !(1 < 2 || 3 >= 5) << endl;
	// �u�B��
	int iShortCircuit = 0;
	1 < 2 || ++iShortCircuit;// �]�����e�w�g�i�H�P�O�X���G�A�ҥH�᭱���N���ݭn�A���p��
	cout << "i = " << iShortCircuit << endl;// �ҥHiShortCircuit��0
	// ���󦡹B�� : condition ?  expression1 : expression2, lowest level
	cout << ((1 < 2 && ++i) ? "true" : "false") << endl;
	// �줸�B��
	unsigned char bits = 0xb5;
	cout << hex;// �u���16�i��
	cout << "bits << 2 = " << (bits << 2) << endl;// �줸�B��N�|���ܼ��ഫ��int�A�p�G���ܼƫ��A�p��int����
	// �줸�޿�B��
	unsigned char uc1 = 5;//  0000 0101
	unsigned char uc2 = 20;// 0001 0100
	cout << "~uc = " << ~uc1 << endl;
	cout << "uc1 ^ uc2 = " << (uc1 ^ uc2) << endl;
	// ���ഫ
	short s = 15.2 + 20;
	cout << dec;
	cout << "s = " << s << endl;// �]�����A��short�A�ҥH���ܼƷ|���h�W�L���ƭ�
	cout << "15.2 + 20 = " << (15.2 + 20) << endl;//�t�η|�۰��ഫ�����������A
	cout << "s's long " << sizeof s << endl;
	cout << "sizof(15.2 + 20) = " << sizeof(15.2 + 20) << endl;// double
	int iImplicit = -1;
	cout << "(0 < iImplicit < 100) = " << (0 < iImplicit < 100) << endl;// �g���D�� : �t�η|���P�O0 < iImplicit�A�o�X���G�b�P < 100�@�P�O
	// �j��y���ഫ
	int total = 20, num = 6;
	double avg = total / num;
	cout << "avg = " << avg << endl;
	cout << "avg = " << (double)total / num << endl;// C�y������A��total�j���ഫ��double�A�i��B��
	cout << "avg = " << double(total) / num << endl;// C++����Adouble����ơA�B��total
	cout << "avg = " << static_cast<double>(total) / num << endl;//C++�j�������ഫ�B��šA��C++���h���ഫ�B���


	cin.get();
}