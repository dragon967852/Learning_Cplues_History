// .cpp = c plus
// .sln is project edit entry
// .cpp => compile => .obj + library => .exe
#include<iostream>// include library
using namespace std;// �ϥ�iostream��namespace

void Welcome();// �qWelcome.cpp�I�s

int main()//�ŧi�@��int����ơA()���i�H�ݭn�N�J����ȡCmain���@�ӵ{�Ǫ��i�J�I�A���i�H�����main�b�P�@��project��
{
	cout << "Hello World" << endl;// std::cout << "Hello World" << endl;
	Welcome();

	cin.get();// compile�ɡA���ݿ�J��~�i�H�����C�]�i�H�g��system("pause");���q�`����ĳ�A�]���|�I�s�쩳�h�C
	return 0;// �p�G���^�ǡA�i�H�g�A�]�i�H���g
}