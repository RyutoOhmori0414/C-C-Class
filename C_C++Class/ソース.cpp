#include <iostream>
#include <stdio.h>
using namespace std;
typedef void (*FUNC)(int i);

//address�ɂ���
void Address()
{
	int num = 81;
	//���̂܂�num���o�͂���
	cout << "���ʂɏo�͂����:" << num << endl << endl;
	//address���Ăяo��
	cout << "�ϐ����̑O�� & ��t�����:" << &num << endl << endl;
}

//�|�C���^�ϐ��ɂ���
//�|�C���^�ϐ��Ƃ̓A�h���X��ێ�����ϐ��̂���
void pointer()
{
	int num = 69;
	int* iptr;	//�|�C���^�ϐ���錾

	iptr = &num;	//iptr��num�̃A�h���X�����I
	//���̂܂�num���o�͂���
	cout << "���ʂɏo�͂����:" << num << endl << endl;
	//address���Ăяo��
	cout << "�ϐ����̑O�� & ��t�����:" << &num << endl << endl;
	//iptr���o�͂����
	cout << "iptr���o�́I:" << iptr << endl << endl;
}

//"*" �͊ԐڎQ�Ɖ��Z�q�Ƃ����A������g���ƃ|�C���^�ϐ����֐ߎQ�Ƃł���悤�ɂȂ�
//�ԐڎQ�ƂƂ̓|�C���^�ϐ��������Ă���l�𒼐ڑ���ł���悤�ɂȂ�
void dereference()
{
	int num = 1919;
	int* iptr = &num;

	//���̂܂�num���o�͂���
	cout << "num�ɏo�͂����:" << num << endl << endl;
	//address���Ăяo��
	cout << "num�̑O�� & ��t�����:" << &num << endl << endl;
	//iptr���o�͂����
	cout << "iptr���o�́I:" << iptr << endl << endl;
	//�ԐڎQ�Ɖ��Z�q���g���I�I
	cout << "*iptr���o��:" << *iptr << endl << endl;

	*iptr = 4545;	//�ԐڎQ�Ɖ��Z�q���g�����|�C���^�ϐ��ɑ���I�I

	//������num���o��
	cout << "4545������num���o��:" << num << endl << endl;
	//�����ɊԐڎQ�Ɖ��Z�q���g���o��
	cout << "4545������*iptr���o��:" << *iptr << endl << endl;
}

//�֐��|�C���^�p�̕ϐ�
void funcpointerTest(int f)
{
	cout << "funcpointerTest�̈����� f = " << f << endl << endl;
}

//�֐��|�C���^�ɂ���
//�|�C���^�ϐ��̊֐��ŁB�֐����i�[����Ă���A�h���X�������Ă����ϐ�
void funcpointer()
{
	FUNC func; //func��錾

	func = &funcpointerTest; //�֐��̃A�h���X��func�ɑ��

	cout << "funcpointerTest���Ăяo��" << endl << endl;

	(funcpointerTest)(4); //�A�h���X���g�����֐��̌Ăяo��
}

int main()
{
	//Address();
	//pointer();
	//dereference();
	funcpointer();
}
