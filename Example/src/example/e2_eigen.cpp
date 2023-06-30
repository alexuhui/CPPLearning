#include "e2_eigen.h"

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

	Vector3d v(1, 2, 3);
	Vector3d w(0, 1, 2);
	std::cout << "Dot product: " << endl << v.dot(w) << std::endl;
	Vector2<int> v2(2, 2);
	std::cout << "Dot normalize: "<< endl << v2.normalized() << std::endl;


    Eigen::Vector2d p1(0, 0);
    Eigen::Vector2d p2(3, 3);
    Eigen::Vector2d q1(2, 0);
    Eigen::Vector2d q2(0, 2);

    if (doSegmentsIntersect(p1, p2, q1, q2)) {
        std::cout << "线段相交！" << std::endl;
    }
    else {
        std::cout << "线段不相交。" << std::endl;
    }


	return true;
}

const char* E2_eigen::getName()
{
	return "eigen lib";
}


bool E2_eigen::doSegmentsIntersect(const Vector2d& p1, const Vector2d& p2, const Vector2d& q1, const Vector2d& q2) {
    Eigen::Vector2d v1 = p2 - p1;
    Eigen::Vector2d v2 = q2 - q1;
    Eigen::Vector2d v3 = q1 - p1;

    double det = v1.x() * v2.y() - v1.y() * v2.x();
    double t1 = (v2.x() * v3.y() - v2.y() * v3.x()) / det;
    double t2 = (v1.x() * v3.y() - v1.y() * v3.x()) / det;

    if (t1 >= 0 && t1 <= 1 && t2 >= 0 && t2 <= 1) {
        return true; // 线段相交
    }
    else {
        return false; // 线段不相交
    }
}


