#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	// Define arrary
	// double arrary[i]; // ���~�A�������ର�ܶq
	// Initialize
	float iA[] = { 2.5, 3.8, 1.79 };// �i�H�����w����
	short iA1[] = { 3, 6, 9 };// ����Ʋիe�T�Ӥ�����ȡA��L������0
	char c[10];
	cout << "c = " << c << endl;// �p�G�S����l�ơA�|���0xCC;
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "each sizeof(a) = " << sizeof(a[0]) << endl;
	int iAlong = sizeof(a) / sizeof(a[0]);
	cout << "a's long = " << iAlong << endl;// arrary������
	cout << "a = " << a << endl;// �|�X�ݨ�a���x�s��m
	for (int num : a)// ������Xarrary���ƭ�
	{
		cout << num << endl;
	}
	//// �h��
	int aA[3][4] =
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};// int a1[3][4] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9, 10, 11, 12};�A�]�i�H�g��int a1[][4]���t�Φۤv�h�p��
	cout << "aA each line size = " << sizeof(aA[0]) << endl;

	// Vector : �O�ӼҪO���A�e�Ǥ@��ƾڡA���N�O�@�������ۦP���ƾڹ�H�����X�C�۸���ƲաA�ƲլO���שT�w�A�\����֡A�w���ʨS���O�ҡC���Ʋէ�[���h�Avector���ƲդW�h��H�A�|�y���B��Ĳv�C�C
	vector<int> v1;// �q�{��l�ƪ��e���A�i�H�H��A�s�W����
	vector<char> v2 = { 'a', 'b', 'c' };
	vector<short> v3(5, 100);// ��5���ܼơA���w���O100�A�p�G���g�q�{�N�O0
	cout << v2[0] << endl;
	cout << "v2 long size = " << v2.size() << endl;
	v3.push_back(78);//�s�W����
	cout << v3[5] << endl;

	// String : iostream���]���w�qstring�A�������򥻡A�p�G�n����ϥΡA��ĳinclude string�C�Ʋժ��׬O�T�w���A���Ostring�������פ��T�w�Astring�����i�H�z�L�ۥ[�覡���X
	string s1 = "Hello World!";// �q�{��l�� : string s1;
	cout << s1 << endl;
	s1[s1.size() - 1] = '\?';
	cout << s1 << endl;
	// ��r��ۥ[
	string s2 = s1 + "Jen";// string s2 = "Hello World" + "Jen";�|error�A�]��string�O�Q��char���B��A�ҥH�䤤�n��string�~�i�H�ե�function�ӹB��
	cout << s2 << endl;
	cout << (s1 == s2 ? "same" : "no same") << endl;
	// ����r��
	string s3 = "hehehe";
	cout << (s1 > s3 ? "true" : "false") << endl;// �C�Ӧr�Ť�j�p
	char str[6] = { 'h', 'e', 'l', 'l', 'l', '\0' };// ��C�y���ҨϥΪ��r�Ŧ�A�����n�]�t\0�A�_�h�|�X�{�ýX
	char str1[] = "hello";
	cout << str << endl;
	cout << "str1 size long = " << sizeof(str1) << endl;
	// �Q��string�x�s��J���r��
	string strH, strW;
	cout << "Please enter \"Hello World\" :" << endl;// �p�G�n��J��Ӧ��Ů檺�r��A�٭n�h�@���ܼƨ��x�s�A���M�@�Ӧr��u�|�s�@�Ӥ��a"�Ŧr��"���r��
	cin >> strH;
	cout << strH << endl;
	cin >> strW;
	cout << strW << endl;
	cin.get();
	// getline Ū���@���T���A����J�촫�欰��
	string getString;
	cout << "Please enter \"Hello World\" :" << endl;
	getline(cin, getString);
	cout << "getString = " << getString << endl;
	// cin.get()Ū���@�Ӧr�šA�|��
	char ch;
	cout << "Please enter one word :" << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	cin.get();// �|�������J��ch�᪺enter
	cin.get();

}
