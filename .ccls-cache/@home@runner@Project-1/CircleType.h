#pragma once
#include "PointType.h"
#include <cmath>
#include <iostream>

using namespace std;

template <class T>
class CircleType {
public:
    // Define static constant for the value of Pi.
    static const double PI;

    // Default constructor
    CircleType();

    // Constructor with coordinates sent in
    CircleType(T, T, T, T);

    // Constructor with points sent in
    CircleType(PointType<T>, PointType<T>);

    // Sets coordinates for the center point
    void setCenterPoint(T, T);

    // Sets coordinates for the circumference point
    void setCircumPoint(T, T);

    // Returns the center point as an ordered pair
    PointType<T> getCenterPoint() const;

    // Returns the circumference point as an ordered pair
    PointType<T> getCircumPoint() const;

    // Returns the x and y coordinates of the center point
    void getCenterPoint(T &xCenter, T &yCenter) const;

    // Returns the x and y coordinates of the circumference point
    void getCircumPoint(T &xCircum, T &yCircum) const;

    // Displays the (x, y) coordinates of the center point
    void printCenterPoint() const;

    // Displays the (x, y) coordinates of the circumference point
    void printCircumPoint() const;

    // Returns the radius of the circle
    double calcRadius() const;

    // Returns the area of the circle
    double calcArea() const;

    // Returns the circumference of the circle
    double calcCircumference() const;

    // Writes the radius, area, and circumference of the circle to the display
    void print() const;

private:
    PointType<T> centerPoint;
    PointType<T> circumPoint;
};

template <class T>
const double CircleType<T>::PI = 3.14159;

template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint() {}

template <class T>
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircum)
    : centerPoint(xCenter, yCenter), circumPoint(xCircum, yCircum) { }

template <class T>
CircleType<T>::CircleType(PointType<T> center, PointType<T> circum)
    : centerPoint(center), circumPoint(circum) { }

template <class T>
void CircleType<T>::setCenterPoint(T xCenter, T yCenter) {
    centerPoint.setX(xCenter);
    centerPoint.setY(yCenter);
}

template <class T>
void CircleType<T>::setCircumPoint(T xCircum, T yCircum) {
    circumPoint.setX(xCircum);
    circumPoint.setY(yCircum);
}

template <class T>
PointType<T> CircleType<T>::getCenterPoint() const {
    return centerPoint;
}

template <class T>
void CircleType<T>::getCenterPoint(T &xCenter, T &yCenter) const {
    xCenter = centerPoint.getX();
    yCenter = centerPoint.getY();
}

template <class T>
PointType<T> CircleType<T>::getCircumPoint() const {
    return circumPoint;
}

template <class T>
void CircleType<T>::getCircumPoint(T &xCircum, T &yCircum) const {
    xCircum = circumPoint.getX();
    yCircum = circumPoint.getY();
}

template<class T>
void CircleType<T>::printCenterPoint() const {
    centerPoint.print();
}

template<class T>
void CircleType<T>::printCircumPoint() const {
    circumPoint.print();
}

template<class T>
double CircleType<T>::calcRadius() const {
    // distance formula between the center point and the circumference point
    return centerPoint - circumPoint;
}

template<class T>
double CircleType<T>::calcCircumference() const {
    return 2 * PI * calcRadius();
}

template<class T>
double CircleType<T>::calcArea() const {
    return PI * pow(calcRadius(), 2);
}

template <class T>
void CircleType<T>::print() const {
    cout << "Radius: " << calcRadius() << endl;
    cout << "Area: " << calcArea() << endl;
    cout << "Circumference: " << calcCircumference() << endl;
}
