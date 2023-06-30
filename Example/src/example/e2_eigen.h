#ifndef E2
#define E2

#include <Eigen/Core>
#include "e_base.h"

using namespace Eigen;
using namespace std;

class E2_eigen : public IEBase
{
public:
	E2_eigen();
	~E2_eigen();

	bool doExample();
	const char* getName();

private:
	bool doSegmentsIntersect(const Eigen::Vector2d& p1, const Eigen::Vector2d& p2, const Eigen::Vector2d& q1, const Eigen::Vector2d& q2);
};
#endif // E2
