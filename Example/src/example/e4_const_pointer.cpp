#include "e4_const_pointer.h"

E4_const_pointer::E4_const_pointer()
{
}

E4_const_pointer::~E4_const_pointer()
{
}

bool E4_const_pointer::doExample()
{
	int a = 5;
	int b = 6;

	//指针常量（Constant Pointer）
	//该常量是一个指针，其指向的内存地址是固定的，不能修改。
	//但指针指向的值可以修改。 
	//(记法，const 约束跟在它后面的对象：pc 即 pc 是一个常量)
	int* const pc = &a;
	//pc = &b; // error
	*pc = 50;

	//常量指针（Pointer to Constant）
	//指向常量的指针，其指向的值是固定的，不能修改。
	//但可以将指针指向其他地址。
	//(记法，const 约束跟在它后面的对象：*cp 即 *pc 是一个常量)
	const int* cp = &a;
	cp = &b;
	//*cp = 50; // error

	cout << "a:" << &a << "  " << a << endl;
	cout << "b:" << &b << "  " << b << endl;
	cout << "pc:" << &pc << "  " << pc << " " << *pc << endl;
	cout << "cp:" << &cp << "  " << cp << " " << *cp << endl;

	return true;
}

const char* E4_const_pointer::getName()
{
	return "Constant Pointer vs. Pointer to Constant";
}


