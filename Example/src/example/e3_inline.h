#ifndef E3
#define E3

#include "e_base.h"

using namespace std;

class E3_inline : public IEBase
{
public:
	E3_inline();
	~E3_inline();

	bool doExample();
	const char* getName();

private:
	int a = 2, b = 5, c = 5, d = 3;

	inline int max(int a, int b)
	{
		return a > b ? a : b;
	}
	int min(int a, int b);
	bool equal(int a, int b);

};

inline bool E3_inline::equal(int a, int b)
{
	return a == b;
}

#endif // E3
