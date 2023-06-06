#include "e1_reference.h"

E1_ref::E1_ref()
{
}

E1_ref::~E1_ref()
{
}

bool E1_ref::doExample()
{
	int a = 100;
	int& b = a;
	const int& c = b;
	printf("a %d  b %d  c %d \n", a, b, c);
	a = 200;
	printf("a %d  b %d  c %d \n", a, b, c);
	b = 300;
	//c = 400;//编译错误
	printf("a %d  b %d  c %d \n", a, b, c);

	const int d = 110;
	//int& e = d; //编译错误

	return true;
}

const char* E1_ref::getName()
{
	return "refrence";
}


