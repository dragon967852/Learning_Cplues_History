#include<iostream>// �y�A����ܬ�����library
#include"utils.h"//���޸���ܦۭq�q�A�b��e���̭��j�M�N�n�F
using namespace std;
// Function
// ��Ƹ̭����j�A���N�O�ҿת��@�ΰ�A�̭����ѼƤ]�u���s�b�o�ǧ@�ΰ���Y�A���|�Q��L��ƨϥΡA�κ�-�����ܶq
// �p�G�Q�n�����@�ӧ����ܶq���ͩR�g���A�N�i�H�b�w�q�����ܶq�[�Wstatic�A�s�������R�A��H�A�N��O���|�H�ۨ�Ƥ��@�γQ�P���A���O���M�u�s�b��o�ӧ@�ΰ�
// �g��Ʈɭn�g�b�D��Ƥ��e�A�]��build code ���y�|�q�W��U�A���D��ƤU���A�|���{�o�A���D��²��w�q���o�Ө��(�J���@�ΰ쪺�g�k)�A�A���̫᭱
// 

// �]�p����M
int square(int x)// �n����� // x���ΰ� // �i�H���ǤJ����F��A�i�H���� // �p�G����^�ȡA�i�H��void
{
	return x * x;
}

// �������
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
// �ƻs�r�Ŧ�
string copyStr(string str, int n)
{
	string result;
	while (n > 0)
	{
		result += str;
		--n;
	}
	return result;
}
// ��ܦۨ���ƪ��ͩR�g�� : �Q�եΤ���N�Q�P��
int callCount()
{
	static int count = 0;//�ܶq�|�b���槹�o�ӧ@�ΰ줧��N�Q�P�� // �i�H�b�e���[�Jstatic�A�O���ܶq���ͩR�g�� //�Ӧ��ɪ���l�ƥu�|�Q�w�q�@���A�Y�Ϥ��i���l�ơA�t�Τ]�|����@����0
	++count;
	cout << "�Q�եΪ����� " << count << " ��!" << endl;
	return count;
}
int main()
{
	int n = 6;
	cout << n << " square = " << square(n) << endl;// �ǤJ�i�h�������

	cout << "5 & 7 ������M�� " << cubeSum(5, 7) << endl;

	cout << "5�������� : " << factorial(5) << endl;

	cout << copyStr("Hello ", 5) << endl;

	for(int i = 0; i < 5; i++)
	{
		callCount();
	}
	cin.get();
	return 0;
}