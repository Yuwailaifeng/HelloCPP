//#if _MSC_VER >= 1600    // VC2017
//#pragma execution_character_set("utf-8")
//#endif

/*域外来风*/
//OOP具有三大特性：封装性、继承性和多态性
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>
#include<stdexcept>



//命名空间的定义使用关键字 namespace，后跟命名空间的名称
using namespace std;

//#define 预处理指令用于创建符号常量。该符号常量通常称为宏
#define NEWLINE '\n'

//# 运算符会把 replacement-text 令牌转换为用引号引起来的字符串("x")
#define MKSTR( x ) #x

//## 运算符用于连接两个令牌(xy)
#define CONCAT( x, y )  x ## y



//使用 #define 来定义一个带有参数的宏
#define MIN(a,b) (a<b?a:b)

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
    private:
		double length;
		double breadth;
		double height;

    protected:
		string name;

    public:
		double getVolume();
		void printBox();
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
		void setName(string nam);
		Box();  // 构造函数
		Box(double len, double bre, double hei, string nam);  // 带参数构造函数
		~Box();  // 析构函数
		friend void printLength(Box box);

		//使用 static 关键字来把类成员定义为静态的。
		//当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本
		//静态成员变量在类中仅仅是声明，没有定义
		static int objectCount;

		//静态函数只要使用类名加范围解析运算符 :: 就可以访问
		//静态成员函数只能访问静态数据成员，不能访问其他静态成员函数和类外部的其他函数
		static int getCount();

		// 重载 + 运算符，用于把两个 Box 对象相加
		const Box operator+(const Box& b);

};


//在类的外面定义，实际上是给静态成员变量分配内存。
//初始化是赋一个初始值，而定义是分配内存
// 初始化类 Box 的静态成员   其实是定义并初始化的过程
int Box::objectCount = 0;

int Box::getCount()
{
	return objectCount;
}

//构造函数
Box::Box()
{
	objectCount++;
	cout << objectCount << "Box Object is being created" << endl;
}
//Box::Box(double len, double bre, double hei, string nam)
//{
//	length = len;
//	breadth = bre;
//	height = hei;
//	name = nam;
//	objectCount++;
//	cout << objectCount << name << " Object is being created" << endl;
//}

//使用初始化列表来初始化字段
Box::Box(double len, double bre, double hei, string nam):length(len),breadth(bre),height(hei),name(nam)
{
	objectCount++;
	cout << objectCount << name << " Object is being created" << endl;
}
//析构函数
Box::~Box()
{
	cout << name << " Object is being deleted" << endl;
}


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
void Box::setName(string nam)
{
	name = nam;
}
void Box::printBox()
{
	cout << "名字 : " << this->name << endl;//显式this指针通过箭头操作符访问
	cout << "长度 : " << (*this).length << endl;//显式使用this指针通过圆点操作符
	cout << "宽度 : " << breadth << endl;//隐式使用this指针打印  
	cout << "高度 : " << this->height << endl;
	cout << "体积 : " << getVolume() << endl;
	cout << NEWLINE;
}
void printLength(Box box)
{
	//类的友元函数是定义在类外部，
	//但有权访问类的所有私有（private）成员和保护（protected）成员
	//尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数
	//因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员
	cout << "Length of "<< box.name << " : " << box.length << NEWLINE;
}

const Box Box::operator+(const Box& b)
{
	Box box;
	box.length = this->length + b.length;
	box.breadth = this->breadth + b.breadth;
	box.height = this->height + b.height;
	box.name = this->name + b.name;
	return box;
}





class SmallBox :public Box // SmallBox 是派生类
{
    public:
	    string getSmallName();
};
// 子类的成员函数
string SmallBox::getSmallName()
{
	return name;
}




//C++ 内联函数是通常与类一起使用。
//如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方。
//内联函数inline：引入内联函数的目的是为了解决程序中函数调用的效率问题，
//这么说吧，程序在编译器编译的时候，编译器将程序中出现的内联函数的调用表达式用内联函数的函数体进行替换，
//而对于其他的函数，都是在运行时候才被替代。
//这其实就是个空间代价换时间的i节省。所以内联函数一般都是1 - 5行的小函数。
//在使用内联函数时要留神：
//1.在内联函数内不允许使用循环语句和开关语句；
//2.内联函数的定义必须出现在内联函数第一次调用之前；
//3.类结构中所在的类说明内部定义的函数是内联函数。
//inline int Max(int x, int y)
//{
//	return (x > y) ? x : y;
//}



//模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码
template <class T>
inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}




template <class T>
class Stack 
{
    private:
        vector<T> elems;//元素

    public:
        void push(T const&);//入栈
        void pop();//出栈
        T top() const;//返回栈顶元素

        //如果为空则返回为真
        bool empty() const
        {
            return elems.empty();
        }
};

template <class T>
void Stack<T>::push(T const& elem)
{
    // 追加传入元素的副本
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty()) 
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // 返回最后一个元素的副本 
    return elems.back();
}
