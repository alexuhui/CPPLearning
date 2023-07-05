#include "e3_inline.h"

E3_inline::E3_inline()
{
}

E3_inline::~E3_inline()
{
}

int E3_inline::min(int a, int b)
{
	return a > b ? b : a;
}

bool E3_inline::doExample()
{
	int maxv = max(a, b);
	int minv = min(a, b);
	bool eq = equal(a, b);

	printf("max : %d  min : %d  eq : %d \n", maxv, minv, eq);

	//int maxv2 = max(a, c);
	//int minv2 = min(a, c);
	//bool eq2 = equal(c, b);

	//printf("max2 : %d  min2 : %d  eq2 : %d \n", maxv2, minv2, eq2);

	//int maxv3 = max(a, c);
	//int minv3 = min(a, c);
	//bool eq3 = equal(c, b);

	//printf("max3 : %d  min3 : %d  eq3 : %d \n", maxv3, minv3, eq3);

	return true;
}

const char* E3_inline::getName()
{
	return "inline";
}


