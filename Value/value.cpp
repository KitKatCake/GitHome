//#include <iostream>
//using namespace std;
//class MyClass {
//public:
//	void init(int &val)
//	{
//		cout << "use & print" << endl;
//	}
//	void init2(int &&val) {
//		cout << "use && print" << endl;
//	}
//};
//int main()
//{
//
//	int ae = 10;
//	MyClass().init2(10);
//	MyClass().init(ae);
//	
//	
//	
//	
//	return 0;
//}


#include <iostream>
#include <typeinfo>
#include <string.h>
using namespace std;
void print_lvalue(int &i)
{
	cout << "Lvalue:" << i << std::endl;
}
void print_rvalue(int &&i)
{
	cout << "Rvalue:" << i << std::endl;
}
int main()
{
	// int i = 0;
	/*print_lvalue(i);
	print_rvalue(1);*/
    //const int p = static_cast<const int>(i);
	//decltype 

	
	

	const char *p = "Hello World!";

	decltype(p) m = p;

	//auto m = p;

	cout << m << endl;

	cout << typeid(m).name() << endl;


	/*decltype(*p) m = *p;

	cout << m << endl;
 */



	//cout << typeid(p).name() << endl;

	//cout << typeid(m).name() << endl;

	cout << typeid(p).name() << endl;




	




	return 0;
}