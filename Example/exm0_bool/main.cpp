#include <stdio.h>

int main(int argc, char *argv[])
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

	return 0;
}