/*域外来风*/
#include<iostream>
#include<cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>




using namespace std;


#define NEWLINE '\n'
const double  PI = 3.14159265358979323846;
static int Count = 10; /* 全局变量 */

// 函数声明
void swap(int *x, int *y);
int * getRandom();

// typedef 关键字, 直接使用 Books 来定义 Books 类型的变量，而不需要使用 struct 关键字
typedef struct
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
}Books;

void printBook1(Books book);
void printBook2(Books *book);






class Box {
    public:
		double length;
		double breadth;
		double height;

		double getVolume();
		void printBox();
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
};

//范围解析运算符 :: 
double Box::getVolume()
{
	return length*breadth*height;
}
void Box::setLength(double len)
{
	length = len;
}
void Box::setBreadth(double bre)
{
	breadth = bre;
}
void Box::setHeight(double hei)
{
	height = hei;
}
void Box::printBox()
{
	cout << "长度 : " << length << endl;
	cout << "宽度 : " << breadth << endl;
	cout << "高度 : " << height << endl;
	cout << "体积 : " << getVolume() << endl;
}

