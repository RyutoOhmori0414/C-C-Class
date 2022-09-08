#include <iostream>
using namespace std;

//関数の定義
//戻り値の型 関数名(引数){ 処理 } という風に定義する
void Test()
{
	cout << "この程度ではへこたれないぞ！！" << endl;
	return;
}

//引数は複数定義することができるぞ
int Sum(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int number1 = 1000;
	int number2 = 1;
	cout << "がんばるぞ！" << endl;
	//関数の呼び出し
	Test();
	cout << number1 << " + " << number2 << " = " << Sum(number1, number2) << endl;
}