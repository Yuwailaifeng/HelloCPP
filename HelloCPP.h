/*��������*/
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
void Box::printBox()
{
	cout << "���� : " << length << endl;
	cout << "��� : " << breadth << endl;
	cout << "�߶� : " << height << endl;
	cout << "��� : " << getVolume() << endl;
}

