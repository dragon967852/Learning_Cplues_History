#include<iostream>

using namespace std;
// C++�y�y : ���ǰ���B�������B�`������
int main()// ����ɷ|�����D��ơA�M��q�W��U���ǰ���C���y�y
{
	// �y�y
	// ²��y�y
	cout << "Hello World" << endl;// ��F�� + ����;
	// �ƦX�y�y
	int i = 0;
	while (i < 5) 
	{// {}��_�Ӫ���block�A�����N�O�y�y�A�������ݭn����
		int a = i;
		cout << a << endl;
		++i;
	}

	// ������� : if & switch
	int age = 10;
	if (age >= 18) 
	{// �p�G�u���@���y�y�A�i�H�����A���A���`�N�u�|����Ĥ@���y�y
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
		break;// break�y�y���@�άO"���_"�A�|���������switch�y�y���c�~���A�p�G�S�K�[�|�������switch�̭����P�_��
	case 'C':
		cout << "Not bad!" << endl;
		break;
	default:// default�O�i�諸�A��ܬ��q�{�n���檺
		cout << "too bad!" << endl;
		break;
	}
	cin.get();

	//�`�� : while, for
	int counter = 1;
	while (counter <= 10) 
	{// �p�G��while(true)�|����L���`���U�h
		cout << "This is " << counter++ << " round" << endl;
	}
	do
	{// �������P�_
		cout << "Now is last " << --counter << " round " << endl;
		cout << "GoodBye!" << endl;
	} while (counter > 1);
	for (int counter2 = 1; counter2 <= 10; counter2++)//�i�H��for(;;)�û����u
	{
		cout << "Now is " << counter2 << " round " << endl;
	}
	for (int num : {1, 3, 5, 7, 9})//�ǦC�� : �d��`��
	{
		cout << "Now is " << num << endl;
	}

	// ���� : break��ܭn���X�A�u��X�{�bswitch, while, do while, for��
	int iBreak = 1;
	while (true)
	{
		cout << "Now is " << iBreak++ << endl;
		if (iBreak > 10)
		{
			break;
		}
	}
	// �~�� : continue �~�����`���A�w��̪񪺤@�h"�`��"����
	for (int iContinue = 1; iContinue <= 100; iContinue++)
	{
		cout << "\t";
		if (iContinue % 7 == 0 || iContinue % 10 == 7 || iContinue / 10 == 7)
			continue;
		cout << iContinue;
		if (iContinue % 10 == 0)// �J10����
		{
			cout << endl << endl;// endl����
		}
	}
	// ���� : goto���ܶq�����A�u�a�@���y�y���Хܲ�
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
		goto begin;// �D�`�F�����]�D�`�M�I�A���ɭԷ|�ȸ����X�ӡA�@�뤣���˨ϥ�
	}
	cout << "Progamming done!" << endl;
	cin.get();
	return 0;// return �פ��ƹB��ê�^���G�A�Y�S���n��^�A�@��o�y�i�H�ٲ�
}