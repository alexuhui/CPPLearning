#include <iostream>

using namespace std;

#include "../example/e0_bool.h"


template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

int main()
{
	printf("hello c plus plus\n\n");
	int ex;
	IEBase* exObjs[] = {
			 new E0_bool(),
	};
	while (true)
	{
		printf("input number to run example (input -1 to show all example) : ");
		cin >> ex;
		printf("run example %d result : \n", ex);

		int len = getArrayLen(exObjs);
		if (ex == -1)
		{
			for (int i = 0; i < len; i++)
			{
				printf("example %d : %s\n", i, exObjs[i]->getName());
			}
		}
		else if (ex >= 0 && ex < len)
		{
			exObjs[ex]->doExample();
		}
		else
		{
			printf("!!!! wrong example index %d: \n", ex);
		}
		cout << endl;
	}


	system("pause");
}