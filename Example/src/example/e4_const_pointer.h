#ifndef E4
#define E4

#include "e_base.h"

using namespace std;

class E4_const_pointer : public IEBase
{
public:
	E4_const_pointer();
	~E4_const_pointer();

	bool doExample();
	const char* getName();

private:


};

#endif // E4
