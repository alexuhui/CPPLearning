#include <stdio.h>


void testRef(int& ref)
{
	ref = 100;
}

int main(int argc, char *argv[])
{
    int a = 100;
	int& b = a;
	int* b_p = &a;
	const int& c = b;
	printf("a %d  b %d  c %d \n", a, b, c);
	a = 200;
	printf("a %d  b %d  c %d \n", a, b, c);
	b = 300;
	//c = 400;//编译错误, const 引用不能修改
	printf("a %d  b %d  c %d \n", a, b, c);

	const int d = 110;
	//int& e = d; //编译错误，变量不能引用const

	double dval = 3.1415;
	//int& iref = dval; //编译错误
	const int& iref = dval;
	printf("dval %f  iref %d \n", dval, iref);

	int ori = 666;
	testRef(ori);
	printf("ori %d \n", ori);

	return 0;
}