/*域外来风*/
#include "HelloCPP.h"


int main(int argc, char* argv[])
{

#if 0
	cout << "Hello,World!" << endl;
#endif


	//cout << "Size of char : " << sizeof(char) << endl;
	//cout << "Size of int : " << sizeof(int) << endl;
	//cout << "Size of short int : " << sizeof(short int) << endl;
	//cout << "Size of long int : " << sizeof(long int) << endl;
	//cout << "Size of float : " << sizeof(float) << endl;
	//cout << "Size of double : " << sizeof(double) << endl;
	//cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	//cout << "Size of string : " << sizeof(string) << endl;

	//typedef string Element;
	//Element str1 = "Hello";
	//Element str2 = "H";
	//cout << sizeof(str1) << endl;
	//cout << sizeof(str2) << endl;

	cout << PI << NEWLINE;
	cout << Count << NEWLINE;

	//enum days { one, two, three }day;
	//day = one;
	//switch (day) {
	//case one:
	//	cout << "one" << endl;
	//	break;
	//case two:
	//	cout << "two" << endl;
	//	break;
	//default:
	//	cout << "three" << endl;
	//	break;
	//}

	//char sText[5];
	//sText[0] = 'a';
	//sText[1] = 'a';
	//sText[2] = 'a';
	//sText[3] = 'a';
	//sText[4] = '\0';
	//cout << sText << endl;

	//int a = 0xFeeL;
	//int b = 0xFeeUL;
	//double c = 31415926E-7L;
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;


	//short int i;           // 有符号短整数
	//short unsigned int j;  // 无符号短整数
	//j = 50000;
	//i = 50000;
	//cout << i << " " << j << endl;



	register int i;
	int sum = 0;
	for (i = 0; i <= 100; i++)
		sum += i;
	cout << "The sum = " << &sum << endl;
	cout << "The sum = " << *(&sum) << endl;
	cout << "The sum = " << sum << endl;


	int x, y = 20;
	x = (y < 10) ? 30 : 40;
	cout << "value of x: " << x << endl;
	x>y ? cout << x << "大于" << y << endl : cout << y << "大于" << x << endl;

	int a = 100;
	int b = 200;
	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;
	/* 调用函数来交换值
	* &a 表示指向 a 的指针，即变量 a 的地址
	* &b 表示指向 b 的指针，即变量 b 的地址
	*/
	swap(&a, &b);
	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl;



	cout << "sin(PI) :" << sin(PI) << endl;
	cout << "sqrt(Count) :" << sqrt(Count) << endl;
	cout << "pow( PI, 2) :" << pow(PI, 2) << endl;



	srand((unsigned)time(NULL));
	/* 生成 10 个随机数 */
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		int j = rand()%10;
		cout << "随机数： " << j << endl;
	}





	cout << "Hello,\tWorld!" << endl;
	return 0;
}




// 函数定义
void swap(int *x, int *y)
{
	int temp;
	temp = *x;	/* 保存地址 x 的值 */
	*x = *y;		/* 把 y 赋值给 x */
	*y = temp;	/* 把 x 赋值给 y */

	return;
}