#include<iostream>
using namespace std;

// struct 
struct StudentInfo// �w�qstruct or class�ɳ��|�⭺�n�r���j�g
{
	string name;
	int age;
	double score;
}stu2 = { "�p��", 19, 6 };//�Ыؼƾڨð���l��
// Enum �T�|����
enum Week
{
	Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun// �p�G�~�����ܡAif Thu = 10�A�᭱���ܼƤ]���|�@�֧���
};

int main()
{
	// Struct
	StudentInfo stu = { "Jen", 18, 75.0 };//�Ыؼƾڨð���l��
	cout << "�ǥͩm�W : " << stu.name << "\t�~��:" << stu.age << "\t���Z:" << stu.score << endl;// �X�ݼƾ�
	//���c��Ʋ�
	StudentInfo s[3] =
	{
		{"�p��", 16, 85.5},
		{"�p��", 17, 72.5},
		{"�p��", 18, 66.5}
	};
	for (StudentInfo stulist : s)
	{
		cout << "�ǥͩm�W : " << stulist.name << "\t�~��:" << stulist.age << "\t���Z:" << stulist.score << endl;// �X�ݼƾ�
	}

	// Enum
	Week w1 = Tue;
	Week w2 = Week(3);// �j��g�J�`��3�A����gWeek w2 = 3;�C�g�J��Week(n)�An�i�H���N�ơC��ĳ�٬O����enum�ҩw�q���h�ϥ�
	Week w3 = Fri;
	cout << "w1 = " << w1 << endl;// �q0�}�l
	cout << "w3 = " << w3 << endl;// �q0�}�l

	cin.get();
}
