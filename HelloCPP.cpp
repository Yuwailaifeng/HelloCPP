//#if _MSC_VER >= 1600    // VC2017
//#pragma execution_character_set("utf-8")
//#endif
/*��������*/
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

	cout << setprecision(20) << PI << NEWLINE;
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


	//short int i;           // �з��Ŷ�����
	//short unsigned int j;  // �޷��Ŷ�����
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
	x>y ? cout << x << "����" << y << endl : cout << y << "����" << x << endl;

	int a = 100;
	int b = 200;
	cout << "����ǰ��a ��ֵ��" << a << endl;
	cout << "����ǰ��b ��ֵ��" << b << endl;
	/* ���ú���������ֵ
	* &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ
	* &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ
	*/
	swap(&a, &b);
	cout << "������a ��ֵ��" << a << endl;
	cout << "������b ��ֵ��" << b << endl;



	cout << "sin(PI) :" << sin(PI) << endl;
	cout << "sqrt(Count) :" << sqrt(Count) << endl;
	cout << "pow( PI, 2) :" << pow(PI, 2) << endl;



	srand((unsigned)time(NULL));
	/* ���� 10 ������� */
	for (i = 0; i < 10; i++)
	{
		// ����ʵ�ʵ������
		int j = rand()%10;
		cout << "������� " << j << endl;
	}


	//C++ ��������������һ��������������Ϊ���������ǣ�������ͨ��ָ������������������������һ��ָ�������ָ��
	double Day[] = { 1,2,3,4 };
	double *day = Day;//��������һ��ָ�������е�һ��Ԫ�صĳ���ָ��
	cout << setfill('*') << setw(7) << Day[0] << setw(7) << Day[1] << NEWLINE;
	cout << setfill('*') << setw(7) << *(Day) << setw(7) << *(Day + 1) << NEWLINE;
	cout << setfill('*') << setw(7) << *(day) << setw(7) << *(day+1) << NEWLINE;




	vector<int> vec;
	cout << vec.size() << NEWLINE;
	for (i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}
	cout << vec.size() << NEWLINE;


	// һ������ 5 �� 2 �е�����
	int arr[5][2] = { { 0,0 },{ 1,2 },{ 2,4 },{ 3,6 },{ 4,8 } };                    
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << "arr[" << i << "][" << j << "]: ";
			cout << arr[i][j] << endl;
		}


	//C++ ��������һ��������������Ϊ�����Ĳ��������ǣ�������ͨ��ָ������������������������һ��ָ�������ָ��
	int *p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}



	//�ַ���ʵ������ʹ�� null �ַ� '\0' ��ֹ��һά�ַ�����
	char s1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char s2[] = "Hello";
	char s3[] = "ell";
	cout << s1 << endl;
	cout << s2 << endl;
	cout << strlen(s1) << NEWLINE;//�����ַ��� s1 �ĳ���
	cout << strcmp(s1, s2) << NEWLINE;//��� s1 �� s2 ����ͬ�ģ��򷵻� 0
	cout << *(strstr(s1, s3)) << NEWLINE;//����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s3 �ĵ�һ�γ��ֵ�λ��



	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int  len;
	// ���� str1 �� str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;
	// ���� str1 �� str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;
	// ���Ӻ�str3 ���ܳ���
	len = str3.size();
	cout << "str3.size() :  " << len << endl;


	double  *ptr = NULL;//��ָ��
	cout << "ptr ��ֵ�� " << ptr << NEWLINE;

	//ָ������鲢������ȫ������,һ��ָ�����鿪ͷ�ĳ�����������Ϊ��ֵ
	double  var[5] = { 10, 100, 200 };
	// ָ���е������ַ
	ptr = var;
	for (int i = 0; i < 5; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		ptr++;//double 8 ���ֽ�
	}

	// ָ�������һ��Ԫ�صĵ�ַ
	ptr = &var[5 - 1];
	for (int i = 5; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		ptr--;//double 8 ���ֽ�
	}
	cout << NEWLINE;




	//���ñ�����һ��������Ҳ����˵������ĳ���Ѵ��ڱ�������һ�����֡�
	//һ�������ó�ʼ��Ϊĳ���������Ϳ���ʹ�ø��������ƻ����������ָ�����
	//���ú�������ָ�����������֮����������Ҫ�Ĳ�ͬ��
	//�����ڿ����á����ñ������ӵ�һ��Ϸ����ڴ�
	//һ�����ñ���ʼ��Ϊһ�����󣬾Ͳ��ܱ�ָ����һ������ָ��������κ�ʱ��ָ����һ������
	//���ñ����ڴ���ʱ����ʼ����ָ��������κ�ʱ�䱻��ʼ��
	//int& r = i; �� int r = i; ��֮ͬ��Ӧ�����ڴ�ķ���ɣ����߻��ٿ���һ���ڴ�ռ�
	int& r = i;
	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;
	cout << "Addr of i: " << &i << endl;
	cout << "Addr of r: " << &r << endl;
	cout << NEWLINE;
	y = x;
	x = 6;
	cout << "Value of x : " << x << endl;
	cout << "Value of y : " << y << endl;
	cout << "Addr of x: " << &x << endl;
	cout << "Addr of y: " << &y << endl;
	cout << NEWLINE;




	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);
	// �� now ת��Ϊ�ַ�����ʽ
	char* dt = ctime(&now);
	cout << "�������ں�ʱ�䣺" << dt << endl;
	// �� now ת��Ϊ tm �ṹ
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC ���ں�ʱ�䣺" << dt << endl;


	Books Book1;        // ����ṹ������ Books �ı��� Book1
	strcpy(Book1.title, "C++ �̳�");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "�������");
	Book1.book_id = 12345;
	cout << "��һ������� : " << Book1.title << endl;
	cout << "��һ�������� : " << Book1.author << endl;
	cout << "��һ������Ŀ : " << Book1.subject << endl;
	cout << "��һ���� ID : " << Book1.book_id << endl;
	printBook1(Book1);
	printBook2(&Book1);




	Box box1;
	box1.setLength(12.1);//public���Կ��Է���
	box1.setBreadth(13.1);
	box1.setHeight(14.1);
	box1.setName("box1");
	printLength(box1);
	box1.printBox();

	SmallBox box2;
	box2.setLength(12.1);//public�̳����Կ��Է���
	box2.setBreadth(13.1);
	box2.setHeight(14.1);
	box2.setName("box2");
	cout << box2.getSmallName() << NEWLINE;
	printLength(box2);
	box2.printBox();
	
	Box box3(12.1,13.1,14.1,"box3");
	printLength(box3);
	box3.printBox();
	

	Box *box4 = &box3;
	cout << box4 << endl;
	box4->printBox();

	Box box5 = box1 + *box4;
	box5.printBox();

    ////����Ķ�̬�ڴ����
    //Box *box6 = new Box;
    //��̬�����ڴ�,����ʼ��
    Box *box6 = new Box(12.1, 13.1, 14.1, "box6");
    box6->printBox();
    delete box6;//������������
    
    Box* myBoxArray = new Box[7];
    cout << myBoxArray << endl;
    cout << (myBoxArray + 1) << endl;
    myBoxArray->printBox();
    (myBoxArray+1)->printBox();
    delete [] myBoxArray; // ɾ������

	
	// ��̬����������������
	cout << "Final Box Count: " << Box::getCount() << endl <<endl;






	cout << "Max (20,10): " << Max(20, 10) << endl;
	cout << "Max (0,200): " << Max(0, 200) << endl;
	cout << "Max (100,1010): " << Max(100, 1010) << endl;
    cout << "Min (100,1010): " << MIN(100, 1010) << endl;
    cout << NEWLINE;



    //���������ͱ�ʾ�����ļ��������ڴ��ļ���ȡ��Ϣ
    ifstream infile("HelloCPP.cpp");

    //���������ͱ�ʾ����ļ��������ڴ����ļ������ļ�д����Ϣ
    ofstream outfile("HelloCPP.txt", ios::out | ios::trunc);

    string temp;

    if (!infile.is_open())
    {
        cout << "δ��" << endl;
    }

    while (getline(infile, temp))
    {
        //cout << temp << endl;
        outfile << temp << endl;
    }

    ////infile.close();



    double* pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
    cout << pvalue << endl;
    //pvalue = new double; // Ϊ���������ڴ�
    if (!(pvalue = new double))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    }
    *pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // �ͷ��ڴ�


    cout << NEWLINE;
    //new������ռ�֮����ڴ���г�ʼ��
    string *pp = new string("Hello");
    cout << pp << endl;
    cout << *pp << endl;
    cout << NEWLINE;


    // ��̬����,���鳤��Ϊ m
    int *array = new int[20];
    cout << *array << endl;
    cout << array << endl;
    cout << (array+1) << endl;
    //�ͷ��ڴ�
    delete [] array;
    cout << array << endl;
    cout << NEWLINE;




    try {
        Stack<int> intStack;  // int ���͵�ջ 
        Stack<string> stringStack; // string ���͵�ջ 

        // ���� int ���͵�ջ 
        intStack.push(7);
        cout << intStack.top() << endl;

        // ���� string ���͵�ջ 
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        //stringStack.pop();
        //stringStack.pop();
    }
    catch (exception const& ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
    cout << NEWLINE;




    //C++ �е�Ԥ�����
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;


    //C++ STL����׼ģ��⣩�ĺ��İ��������������
    //������Containers�����㷨��Algorithms������������iterators��

    //����һ�������洢 int
    //vector<int> vec;

    // ��ʾ vec ��ԭʼ��С
    cout << "vector size = " << vec.size() << endl;

    // ���� 5 ��ֵ��������
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // ��ʾ vec ��չ��Ĵ�С
    cout << "extended vector size = " << vec.size() << endl;

    // ���������е� 5 ��ֵ
    for (i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // ʹ�õ����� iterator ����ֵ
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) 
    {
        cout << "value of v = " << *v << endl;
        v++;
    }










    cout << NEWLINE;
	cout << "Hello,\tWorld!" << endl;
	return 0;
}




// ��������
void swap(int *x, int *y)
{
	int temp;
	temp = *x;	/* �����ַ x ��ֵ */
	*x = *y;		/* �� y ��ֵ�� x */
	*y = temp;	/* �� x ��ֵ�� y */
}

int * getRandom()
{
	static int  r[10];
	// ��������
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}



void printBook1(Books book)
{
	cout << "����� : " << book.title << endl;
	cout << "������ : " << book.author << endl;
	cout << "����Ŀ : " << book.subject << endl;
	cout << "�� ID : " << book.book_id << endl;
}

// �ú����Խṹָ����Ϊ����
void printBook2(Books *book)
{
	cout << "�����  : " << book->title << endl;
	cout << "������ : " << book->author << endl;
	cout << "����Ŀ : " << book->subject << endl;
	cout << "�� ID : " << book->book_id << endl;
}