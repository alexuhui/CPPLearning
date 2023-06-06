#ifndef E1
#define E1

#include "e_base.h"

class E1_ref : public IEBase
{
public:
	E1_ref();
	~E1_ref();

	bool doExample();
	const char* getName();

private:
	void testRef(int& ref);

};
#endif // E1
