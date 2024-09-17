#include <iostream>
#include "PointType.h"
#include "CircleType.h"
#include "CylinderType.h"

int main() {
    // Define a center point and a point on the circumference
    PointType<double> center(0.0, 0.0);
    PointType<double> circumference(3.0, 4.0);

    // Create a cylinder with height
    CylinderType<double> cylinder(10.0, center, circumference);

    // Print the cylinder properties
    cylinder.print();

    return 0;
}
