#include <iostream>
#include <string>

using namespace std;

#include "../example/e0_bool.h"
#include "../example/e1_reference.h"
#include "../example/e2_eigen.h"


template <class T>
unsigned int getArrayLen(T& array)
{
	//cout << "sizeof(array) : " << sizeof(array) << "  sizeof(array[0]) : " << sizeof(array[0]) << endl;
	return (sizeof(array) / sizeof(array[0]));
}

int main()
{
	printf("hello c plus plus\n\n");
	int ex;
	string str = "0";
	IEBase* exObjs[] = {
			 new E0_bool(),
			 new E1_ref(),
			 new E2_eigen(),
	};
	unsigned int len = getArrayLen(exObjs);
	while (true)
	{
		printf("input number to run example (input -1 to show all example) : ");
		cin >> str;

		char first = str[0];
		if (first == '-')
			first = str[1];
		if (first < '0' || first > '9')
		{
			printf("string %s can not convert to int. \n", str.c_str());
			continue;
		}
			
		ex = stoi(str);

		if (ex == -1)
		{
			printf("all example list : \n");
			for (int i = 0; i < len; i++)
			{
				printf("example %d : %s\n", i, exObjs[i]->getName());
			}
		}
		else if (ex >= 0 && ex < len)
		{
			printf("--------------------------- run example %d (%s) result : \n", ex, exObjs[ex]->getName());
			exObjs[ex]->doExample();
		}
		else
		{
			printf("!!!! wrong example index %d: \n", ex);
		}
		cout << endl;
	}
	for (unsigned int i = 0; i < len; i++)
	{
		delete exObjs[i];
	}

	system("pause");
}