#include <iostream>
#include <iomanip>
#include "PointType.h"
using namespace std;

// Define which branch to test
    #define TEST_POINT_TYPE  // Comment this out to test CircleType

int main() {
    cout << fixed << setprecision(1) << showpoint;

#ifdef TEST_POINT_TYPE
    cout << "Testing PointType" << endl;
    PointType<int> p1I;
    PointType<double> p1D;

    cout << "Integer point: ";
    p1I.print();
    cout << "Double point: ";
    p1D.print();

    PointType<int> p2I(3, 5);
    PointType<double> p2D(3.5, 5.5);

    cout << "Integer point: ";
    p2I.print();
    cout << "Double point: ";
    p2D.print();

    double distance = p1I - p2I;
    cout << "\nDistance between p1I and p2I: " << distance << endl;

    distance = p1D - p2D;
    cout << "Distance between p1D and p2D: " << distance << endl;
    

#elif defined(TEST_CIRCLE_TYPE)
    cout << "Testing CircleType" << endl;
    PointType<double> center(0.0, 0.0);
    PointType<double> circumference(3.0, 4.0);

    CircleType<double> circle(center, circumference);

    circle.printCenterPoint();
    circle.printCircumPoint();
    circle.print();
#endif

    return 0;
}
