#include<iostream>
using namespace std;

int main()
{
	// �p������ƾڳ��s��b���s���A�X�ݤ��s���̤p�椸�O�r�`
	// �w�q���w
	int* p;// p �O���VInt�����ƾڪ����w
	int* p1;
	long* p2;
	// ���w���j�p�|�Ѩt�Ϊ����s�t�����Ҧ����A����V���ƾ������L���A�]�����|�s�����s���a�}X64 = 8 byte�AX86 = 4 Byte
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(p2) = " << sizeof(p) << endl;

	// ���w������
	int a = 10;
	long b = 35;

	p = &a;// & ���a�}�ާ@�šA����l�ơA�S������l�ƪ��s�Ůī��w�A�]�s�����w
	p1 = &a;
	cout << "a address = " << &a << endl;
	cout << "a value = " << a << endl;
	cout << "p value = " << *p << endl;
	cout << "p address = " << p << endl;
	*p = 50;
	cout << "p address = " << p << endl;
	cout << "change p value = " << *p << endl;// *�Ѥޥ�

	//�ū��w
	int* np = nullptr;// �ū��w
	np = NULL;// �w�B���ܶq�A��0�A��ܫ��V���s��0����m�A���ä��N��u�����V0�A�u�O��ܤ��Q�ϥΪ��ƾ�
	cout << "np = " << np << endl;// ��X��0���a�}

	// void* ���w�A�i�H�ΨӦs����N��H���a�}�A��ܫ��V�Y�ӪF��
	int i = 100;
	char ch = 'a';
	string s = "hello";
	void* vp;
	vp = &i;
	vp = &ch;
	vp = &s;// �i�H�i��ƾڪ��s��H�Τ���A������*vp���ΡA�]�������D�ƾ��ܶq�쩳�O����

	// ���V���w�����w
	int doublePointer = 1024;
	int* pi = &doublePointer;
	int** ppi = &pi;
	cout << "doublePoint = " << doublePointer << endl;
	cout << "pi = " << pi << endl;
	cout << "ppi = " << ppi << endl;
	cout << "*pi = " << *pi << endl;
	cout << "*ppi = " << *ppi << endl;
	cout << "**pi = " << **ppi << endl;

	// ���V�`�q�����w
	const int c1 = 10, c2 = 25;
	const int* pc = &c1;// ����ޥ�int
	cout << "*pc = " << *pc << endl;
	pc = &c2;// �u����ܦP���`�q���ܼ�
	cout << "change *pc to c2 = " << *pc << endl;

	// ���w�`�q
	int iPointer = 1000;
	int* const cp = &iPointer;// �@����l�Ƥ���A�N����A�ޥΨ�L�a�}
	cout << "cp = " << cp << endl;
	cout << "*cp = " << *cp << endl;
	*cp = 12;
	cout << "cp = " << cp << endl;
	cout << "*cp = " << *cp << endl;
	cout << "iPointer = " << iPointer << endl;

	// ���V�`�q�����w�`�q
	int ccPointer = 50;
	const int* const ccp = &ccPointer;
	ccPointer = 1000;// ccp�����V�̵M���ܡA�ҥHccPointer�����ܤ��|��ccp���v�T
	cout << "*ccp = " << *ccp << endl;

	// ���w�M�Ʋ� : arr[10]�A�p�G�Q���Larr�A�|�۰��ഫ�����w�A���N�|���L�X�Ĥ@�Ӧa�}�A�B���ΤF���A��byte�A�]�N�Oarr[0]
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << "arr = " << arr << endl;
	cout << "&arr[0] = " << &arr[0] << endl;
	cout << "arr + 1 = &arr[1] = " << arr + 1 << endl;
	cout << "*(arr + 1) = arr[1] = " << *(arr + 1) << endl;
	int* pia = arr;
	cout << "*pia = " << *pia << endl;
	cout << "pia = " << pia << endl;

	// ���w�ƲթM�Ʋի��w
	int* pa[5]; // ���w�Ʋ�
	int(*ap)[5];// ���V�Ʋժ����w
	int arrPointer[] = { 1, 2, 3, 4, 5 };
	cout << "sizeof(pa) = " << sizeof(pa) << endl;
	cout << "sizeof(ap) = " << sizeof(ap) << endl;
	pa[0] = arrPointer;// �Ĥ@�ӫ��w�Ʋի��V�ƲաAarrPointer�����V�Ʋժ��Ĥ@�Ӥ���
	cout << "arrPointer = " << arrPointer << endl;
	cout << "pa = " << pa << endl;
	ap = &arrPointer;// ap ���V�N�O���arrPointer�Ʋ�
	cout << "*ap = " << *ap << endl;// �Ĥ@�Ӥ������a�}
	cout << "**ap = " << **ap << endl;
	cout << "*ap + 1 = " << *ap + 1 << endl;
	cout << "*(*ap + 1) = " << *(*ap + 1) << endl;

	cin.get();
}
