#include <iostream>
using namespace std;

//�֐��̒�`
//�߂�l�̌^ �֐���(����){ ���� } �Ƃ������ɒ�`����
void Test()
{
	cout << "���̒��x�ł͂ւ�����Ȃ����I�I" << endl;
	return;
}

//�����͕�����`���邱�Ƃ��ł��邼
int Sum(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int number1 = 1000;
	int number2 = 1;
	cout << "����΂邼�I" << endl;
	//�֐��̌Ăяo��
	Test();
	cout << number1 << " + " << number2 << " = " << Sum(number1, number2) << endl;
}