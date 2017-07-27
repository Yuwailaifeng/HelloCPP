//#if _MSC_VER >= 1600    // VC2017
//#pragma execution_character_set("utf-8")
//#endif
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


	//C++ 不允许向函数传递一个完整的数组作为参数，但是，您可以通过指定不带索引的数组名来传递一个指向数组的指针
	double Day[] = { 1,2,3,4 };
	double *day = Day;//数组名是一个指向数组中第一个元素的常量指针
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


	// 一个带有 5 行 2 列的数组
	int arr[5][2] = { { 0,0 },{ 1,2 },{ 2,4 },{ 3,6 },{ 4,8 } };                    
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++)
		{
			cout << "arr[" << i << "][" << j << "]: ";
			cout << arr[i][j] << endl;
		}


	//C++ 不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针
	int *p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}



	//字符串实际上是使用 null 字符 '\0' 终止的一维字符数组
	char s1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char s2[] = "Hello";
	char s3[] = "ell";
	cout << s1 << endl;
	cout << s2 << endl;
	cout << strlen(s1) << NEWLINE;//返回字符串 s1 的长度
	cout << strcmp(s1, s2) << NEWLINE;//如果 s1 和 s2 是相同的，则返回 0
	cout << *(strstr(s1, s3)) << NEWLINE;//返回一个指针，指向字符串 s1 中字符串 s3 的第一次出现的位置



	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int  len;
	// 复制 str1 到 str3
	str3 = str1;
	cout << "str3 : " << str3 << endl;
	// 连接 str1 和 str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;
	// 连接后，str3 的总长度
	len = str3.size();
	cout << "str3.size() :  " << len << endl;


	double  *ptr = NULL;//空指针
	cout << "ptr 的值是 " << ptr << NEWLINE;

	//指针和数组并不是完全互换的,一个指向数组开头的常量，不能作为左值
	double  var[5] = { 10, 100, 200 };
	// 指针中的数组地址
	ptr = var;
	for (int i = 0; i < 5; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		ptr++;//double 8 个字节
	}

	// 指针中最后一个元素的地址
	ptr = &var[5 - 1];
	for (int i = 5; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
		ptr--;//double 8 个字节
	}
	cout << NEWLINE;




	//引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
	//一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量
	//引用很容易与指针混淆，它们之间有三个主要的不同：
	//不存在空引用。引用必须连接到一块合法的内存
	//一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象
	//引用必须在创建时被初始化。指针可以在任何时间被初始化
	//int& r = i; 和 int r = i; 不同之处应该是内存的分配吧，后者会再开辟一个内存空间
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




	// 基于当前系统的当前日期/时间
	time_t now = time(0);
	// 把 now 转换为字符串形式
	char* dt = ctime(&now);
	cout << "本地日期和时间：" << dt << endl;
	// 把 now 转换为 tm 结构
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "UTC 日期和时间：" << dt << endl;


	Books Book1;        // 定义结构体类型 Books 的变量 Book1
	strcpy(Book1.title, "C++ 教程");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "编程语言");
	Book1.book_id = 12345;
	cout << "第一本书标题 : " << Book1.title << endl;
	cout << "第一本书作者 : " << Book1.author << endl;
	cout << "第一本书类目 : " << Book1.subject << endl;
	cout << "第一本书 ID : " << Book1.book_id << endl;
	printBook1(Book1);
	printBook2(&Book1);




	Box box1;
	box1.setLength(12.1);//public所以可以访问
	box1.setBreadth(13.1);
	box1.setHeight(14.1);
	box1.setName("box1");
	printLength(box1);
	box1.printBox();

	SmallBox box2;
	box2.setLength(12.1);//public继承所以可以访问
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

    ////对象的动态内存分配
    //Box *box6 = new Box;
    //动态分配内存,并初始化
    Box *box6 = new Box(12.1, 13.1, 14.1, "box6");
    box6->printBox();
    delete box6;//调用析构函数
    
    Box* myBoxArray = new Box[7];
    cout << myBoxArray << endl;
    cout << (myBoxArray + 1) << endl;
    myBoxArray->printBox();
    (myBoxArray+1)->printBox();
    delete [] myBoxArray; // 删除数组

	
	// 静态函数输出对象的总数
	cout << "Final Box Count: " << Box::getCount() << endl <<endl;






	cout << "Max (20,10): " << Max(20, 10) << endl;
	cout << "Max (0,200): " << Max(0, 200) << endl;
	cout << "Max (100,1010): " << Max(100, 1010) << endl;
    cout << "Min (100,1010): " << MIN(100, 1010) << endl;
    cout << NEWLINE;



    //该数据类型表示输入文件流，用于从文件读取信息
    ifstream infile("HelloCPP.cpp");

    //该数据类型表示输出文件流，用于创建文件并向文件写入信息
    ofstream outfile("HelloCPP.txt", ios::out | ios::trunc);

    string temp;

    if (!infile.is_open())
    {
        cout << "未打开" << endl;
    }

    while (getline(infile, temp))
    {
        //cout << temp << endl;
        outfile << temp << endl;
    }

    ////infile.close();



    double* pvalue = NULL; // 初始化为 null 的指针
    cout << pvalue << endl;
    //pvalue = new double; // 为变量请求内存
    if (!(pvalue = new double))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    }
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // 释放内存


    cout << NEWLINE;
    //new申请完空间之后对内存进行初始化
    string *pp = new string("Hello");
    cout << pp << endl;
    cout << *pp << endl;
    cout << NEWLINE;


    // 动态分配,数组长度为 m
    int *array = new int[20];
    cout << *array << endl;
    cout << array << endl;
    cout << (array+1) << endl;
    //释放内存
    delete [] array;
    cout << array << endl;
    cout << NEWLINE;




    try {
        Stack<int> intStack;  // int 类型的栈 
        Stack<string> stringStack; // string 类型的栈 

        // 操作 int 类型的栈 
        intStack.push(7);
        cout << intStack.top() << endl;

        // 操作 string 类型的栈 
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




    //C++ 中的预定义宏
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;


    //C++ STL（标准模板库）的核心包括以下三个组件
    //容器（Containers）、算法（Algorithms）、迭代器（iterators）

    //创建一个向量存储 int
    //vector<int> vec;

    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    // 推入 5 个值到向量中
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    // 访问向量中的 5 个值
    for (i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // 使用迭代器 iterator 访问值
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




// 函数定义
void swap(int *x, int *y)
{
	int temp;
	temp = *x;	/* 保存地址 x 的值 */
	*x = *y;		/* 把 y 赋值给 x */
	*y = temp;	/* 把 x 赋值给 y */
}

int * getRandom()
{
	static int  r[10];
	// 设置种子
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
	cout << "书标题 : " << book.title << endl;
	cout << "书作者 : " << book.author << endl;
	cout << "书类目 : " << book.subject << endl;
	cout << "书 ID : " << book.book_id << endl;
}

// 该函数以结构指针作为参数
void printBook2(Books *book)
{
	cout << "书标题  : " << book->title << endl;
	cout << "书作者 : " << book->author << endl;
	cout << "书类目 : " << book->subject << endl;
	cout << "书 ID : " << book->book_id << endl;
}