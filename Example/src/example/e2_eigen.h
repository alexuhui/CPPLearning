#ifndef E2
#define E2

#include "e_base.h"

class E2_eigen : public IEBase
{
public:
	E2_eigen();
	~E2_eigen();

	bool doExample();
	const char* getName();

private:
	void testRef(int& ref);

};
#endif // E2
