#include<iostream>
using namespace std;

int main()
{
	// �ޥ� : �ޥΪ�����ä��O�ܶq�A�ޥΥu�O�@�ӧO�W�A���s����󪺼ƾڡA�]�S�����s�Ŷ��C�|������@���ܼƸj�w�A�@�_�C
	int a = 10, b = 25;
	int& ref = a; // �n������l�Ƥ���N�A�]������A�N�O�t�@�ӧO�W�Ӥw�C����l�Ʒ|�����C// �]���ઽ���w�q�@�Ӽƭ� int& ref = 10;
	cout << "ref = " << ref << endl;
	cout << "a address = " << &a << endl;
	cout << "ref address = " << &ref << endl;
	ref = 15;
	cout << "a = " << ref << endl;

	// �ޥΪ��ޥ�
	int& rref = ref;
	cout << "rref = " << rref << endl;

	// �`�q���ޥ�
	const int zero = 0;
	const int& cref = zero;
	int i = 30;
	const int& cref2 = i;// �i�H�����j�w���O�`�q���ܶq
	i = 50;
	double d = 3.14;
	const int& cref3 = d;// ���A�j�p�@�˴N�|�۰��ഫ
	cout << "cref2 = " << cref2 << endl;
	cout << "cref3 = " << cref3 << endl;

	// �j�w���w���ޥ�
	int c = 10;
	int* ptr = &c;
	int*& pref = ptr;// �S��int&*�A�S�����V�ޥΪ����w
	cout << "pref = " << pref << endl;
	cout << "*pref = " << *pref << endl;
	*pref = 100;
	cout << "*pref = " << *pref << endl;
	

	cin.get();

}