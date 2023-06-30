#include <Eigen/Core>
#include "e2_eigen.h"

using namespace Eigen;

E2_eigen::E2_eigen()
{
}

E2_eigen::~E2_eigen()
{
}

bool E2_eigen::doExample()
{
	MatrixXd m(2, 2);
	m(0, 0) = 3;
	m(1, 0) = 2.5;
	m(0, 1) = -1;
	m(1, 1) = m(1, 0) + m(0, 1);
	std::cout << m << std::endl;

	return true;
}

const char* E2_eigen::getName()
{
	return "eigen lib";
}


