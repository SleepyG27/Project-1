#include <iostream>
#include "PointType.h"
#include "CircleType.h"
#include "CylinderType.h"

int main() {
    PointType<double> center(0.0, 0.0);
    PointType<double> circumference(3.0, 4.0);

    CylinderType<double> cylinder(10.0, center, circumference);

    cylinder.print();

    return 0;
}