#include<iostream>
using namespace std;

int main()
{
	bool b = true;
	bool* pb = &b;
	char c = 'x';
	char* pc = &c;
	int i = 0;
	int& ri = i;
	int* pi = &i;
	double d = 3.14;
	double* pd = &d;

	double* p1 = reinterpret_cast<double*>(ri);
	int* p2 = reinterpret_cast<int*>(c);
	bool b1 = reinterpret_cast<bool>(pd);
	//double d1= reinterpret_cast<double>(i);
	int& ri1 = reinterpret_cast<int&>(i);

	//char c1 = reinterpret_cast<char>(b);
	//long l1 = reinterpret_cast<long>(i);
	cout << sizeof(long) << endl;
}

//int main()
//{
//	int i = 1;
//	int& ri = i;
//	int* p1 = &i;
//	float f = (float)i;
//	double d1 = double(i);
//
//	double d2 = static_cast<double>(i);//��̬ת�����������
//	void* p = static_cast<void*>(p1);
//
//	double* p2 = reinterpret_cast<double*>(i);
//	return 0;
//}

//int main()
//{
//	volatile const int a = 2;
//	//int* p = (int*)&a;
//	int* p = const_cast<int*>(&a);
//	*p = 3;
//
//	cout << a << endl;
//	cout << *p << endl;
//
//	//cout << &a << endl;
//	cout << typeid(&a).name() << endl;
//	printf("%p\n", &a);
//	//cout << (void*)&a << endl;
//	cout << p << endl;
//	return 0;
//}

//class A
//{
//public:
//	virtual void f(){}
//
//	int _a = 1;
//};
//
//class B :public A
//{
//public:
//	virtual void f(){}
//
//	int _b = 2;
//};
//
//void func(A* pa)
//{
//	//B* p = (B*)pa;//ֱ������ת�������ָ���࣬�����Խ�����
//	B* p = dynamic_cast<B*>(pa);
//	if (p)
//	{
//		p->_a++;
//		p->_b++;
//	}
//	else
//	{
//		cout << "ת��ʧ��" << endl;
//	}
//}
//
//int main()
//{
//	B b;
//	A a = b;
//	A& ra = b;//�˴�û����ʽ����ת��
//
//	double d = 3.14;
//	const int& ri = d;//�˴�����ʽ����ת��
//
//	func(&a);
//	func(&b);
//	return 0;
//}