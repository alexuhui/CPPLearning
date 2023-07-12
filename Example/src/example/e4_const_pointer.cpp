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

	//指针是一个常量，其指向的内存地址是固定的，不能修改。
	//但可以通过指针来修改指向的值。 
	//(记法，指针在前常量在后：* const)
	int* const pc = &a;
	//pc = &b; // error
	*pc = 50;

	//常量的指针，其指向的值是固定的，不能修改。
	//但可以将指针指向其他地址。
	//(记法，常量在前指针在后：const type *)
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


