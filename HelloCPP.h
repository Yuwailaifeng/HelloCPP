//#if _MSC_VER >= 1600    // VC2017
//#pragma execution_character_set("utf-8")
//#endif

/*��������*/
//OOP�����������ԣ���װ�ԡ��̳��ԺͶ�̬��
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



//�����ռ�Ķ���ʹ�ùؼ��� namespace����������ռ������
using namespace std;

//#define Ԥ����ָ�����ڴ������ų������÷��ų���ͨ����Ϊ��
#define NEWLINE '\n'

//# �������� replacement-text ����ת��Ϊ���������������ַ���("x")
#define MKSTR( x ) #x

//## ���������������������(xy)
#define CONCAT( x, y )  x ## y



//ʹ�� #define ������һ�����в����ĺ�
#define MIN(a,b) (a<b?a:b)

const double  PI = 3.14159265358979323846;
static int Count = 10; /* ȫ�ֱ��� */

// ��������
void swap(int *x, int *y);
int * getRandom();

// typedef �ؼ���, ֱ��ʹ�� Books ������ Books ���͵ı�����������Ҫʹ�� struct �ؼ���
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
		Box();  // ���캯��
		Box(double len, double bre, double hei, string nam);  // ���������캯��
		~Box();  // ��������
		friend void printLength(Box box);

		//ʹ�� static �ؼ����������Ա����Ϊ��̬�ġ�
		//������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ������
		//��̬��Ա���������н�����������û�ж���
		static int objectCount;

		//��̬����ֻҪʹ�������ӷ�Χ��������� :: �Ϳ��Է���
		//��̬��Ա����ֻ�ܷ��ʾ�̬���ݳ�Ա�����ܷ���������̬��Ա���������ⲿ����������
		static int getCount();

		// ���� + ����������ڰ����� Box �������
		const Box operator+(const Box& b);

};


//��������涨�壬ʵ�����Ǹ���̬��Ա���������ڴ档
//��ʼ���Ǹ�һ����ʼֵ���������Ƿ����ڴ�
// ��ʼ���� Box �ľ�̬��Ա   ��ʵ�Ƕ��岢��ʼ���Ĺ���
int Box::objectCount = 0;

int Box::getCount()
{
	return objectCount;
}

//���캯��
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

//ʹ�ó�ʼ���б�����ʼ���ֶ�
Box::Box(double len, double bre, double hei, string nam):length(len),breadth(bre),height(hei),name(nam)
{
	objectCount++;
	cout << objectCount << name << " Object is being created" << endl;
}
//��������
Box::~Box()
{
	cout << name << " Object is being deleted" << endl;
}


//��Χ��������� :: 
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
	cout << "���� : " << this->name << endl;//��ʽthisָ��ͨ����ͷ����������
	cout << "���� : " << (*this).length << endl;//��ʽʹ��thisָ��ͨ��Բ�������
	cout << "��� : " << breadth << endl;//��ʽʹ��thisָ���ӡ  
	cout << "�߶� : " << this->height << endl;
	cout << "��� : " << getVolume() << endl;
	cout << NEWLINE;
}
void printLength(Box box)
{
	//�����Ԫ�����Ƕ��������ⲿ��
	//����Ȩ�����������˽�У�private����Ա�ͱ�����protected����Ա
	//������Ԫ������ԭ��������Ķ����г��ֹ���������Ԫ���������ǳ�Ա����
	//��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա
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





class SmallBox :public Box // SmallBox ��������
{
    public:
	    string getSmallName();
};
// ����ĳ�Ա����
string SmallBox::getSmallName()
{
	return name;
}




//C++ ����������ͨ������һ��ʹ�á�
//���һ�������������ģ���ô�ڱ���ʱ����������Ѹú����Ĵ��븱��������ÿ�����øú����ĵط���
//��������inline����������������Ŀ����Ϊ�˽�������к������õ�Ч�����⣬
//��ô˵�ɣ������ڱ����������ʱ�򣬱������������г��ֵ����������ĵ��ñ��ʽ�����������ĺ���������滻��
//�����������ĺ���������������ʱ��ű������
//����ʵ���Ǹ��ռ���ۻ�ʱ���i��ʡ��������������һ�㶼��1 - 5�е�С������
//��ʹ����������ʱҪ����
//1.�����������ڲ�����ʹ��ѭ�����Ϳ�����䣻
//2.���������Ķ���������������������һ�ε���֮ǰ��
//3.��ṹ�����ڵ���˵���ڲ�����ĺ���������������
//inline int Max(int x, int y)
//{
//	return (x > y) ? x : y;
//}



//ģ���Ƿ��ͱ�̵Ļ��������ͱ�̼���һ�ֶ������κ��ض����͵ķ�ʽ��д����
template <class T>
inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}




template <class T>
class Stack 
{
    private:
        vector<T> elems;//Ԫ��

    public:
        void push(T const&);//��ջ
        void pop();//��ջ
        T top() const;//����ջ��Ԫ��

        //���Ϊ���򷵻�Ϊ��
        bool empty() const
        {
            return elems.empty();
        }
};

template <class T>
void Stack<T>::push(T const& elem)
{
    // ׷�Ӵ���Ԫ�صĸ���
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty()) 
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // ɾ�����һ��Ԫ��
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // �������һ��Ԫ�صĸ��� 
    return elems.back();
}
