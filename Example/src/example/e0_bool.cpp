#include "e0_bool.h"

E0_bool::E0_bool()
{
}

E0_bool::~E0_bool()
{
}

bool E0_bool::doExample()
{
	bool b = true;
	printf("bool b = true   =>    %d\n", b);
	b = false;
	printf("b = false  =>    %d\n", b);
	b = "false";
	printf("b = \"false\" (注意引号)  =>    %d\n", b);
	b = 100;
	printf("b = 100  =>    %d\n", b);

	printf("---------- bool 类型非0即1, 0为假，1为真\n");

	return true;
}

const char* E0_bool::getName()
{
	return "bool type";
}


