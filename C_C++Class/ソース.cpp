#include <iostream>
#include <stdio.h>
using namespace std;
typedef void (*FUNC)(int i);

//addressについて
void Address()
{
	int num = 81;
	//そのままnumを出力する
	cout << "普通に出力すると:" << num << endl << endl;
	//addressを呼び出す
	cout << "変数名の前に & を付けると:" << &num << endl << endl;
}

//ポインタ変数について
//ポインタ変数とはアドレスを保持する変数のこと
void pointer()
{
	int num = 69;
	int* iptr;	//ポインタ変数を宣言

	iptr = &num;	//iptrにnumのアドレスを代入！
	//そのままnumを出力する
	cout << "普通に出力すると:" << num << endl << endl;
	//addressを呼び出す
	cout << "変数名の前に & を付けると:" << &num << endl << endl;
	//iptrを出力すると
	cout << "iptrを出力！:" << iptr << endl << endl;
}

//"*" は間接参照演算子といい、これを使うとポインタ変数を関節参照できるようになる
//間接参照とはポインタ変数がさしている値を直接操作できるようになる
void dereference()
{
	int num = 1919;
	int* iptr = &num;

	//そのままnumを出力する
	cout << "numに出力すると:" << num << endl << endl;
	//addressを呼び出す
	cout << "numの前に & を付けると:" << &num << endl << endl;
	//iptrを出力すると
	cout << "iptrを出力！:" << iptr << endl << endl;
	//間接参照演算子を使う！！
	cout << "*iptrを出力:" << *iptr << endl << endl;

	*iptr = 4545;	//間接参照演算子を使ったポインタ変数に代入！！

	//代入後にnumを出力
	cout << "4545を代入後numを出力:" << num << endl << endl;
	//代入後に間接参照演算子を使い出力
	cout << "4545を代入後*iptrを出力:" << *iptr << endl << endl;
}

//関数ポインタ用の変数
void funcpointerTest(int f)
{
	cout << "funcpointerTestの引数の f = " << f << endl << endl;
}

//関数ポインタについて
//ポインタ変数の関数版。関数が格納されているアドレスを持っておく変数
void funcpointer()
{
	FUNC func; //funcを宣言

	func = &funcpointerTest; //関数のアドレスをfuncに代入

	cout << "funcpointerTestを呼び出す" << endl << endl;

	(funcpointerTest)(4); //アドレスを使った関数の呼び出し
}

int main()
{
	//Address();
	//pointer();
	//dereference();
	funcpointer();
}
