#pragma once
#include "PointType.h"

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
    PointType<T> getCenterPoint();

    // Returns the circumference point as an ordered pair
    PointType<T> getCircumPoint();

    // Returns the x and y coordinates of the center point
    void getCenterPoint(T &xCenter, T &yCenter);

    // Returns the x and y coordinates of the circumference point
    void getCircumPoint(T &xCircum, T &yCircum);

    // Displays the (x, y) coordinates of the center point
    void printCenterPoint();

    // Displays the (x, y) coordinates of the circumference point
    void printCircumPoint();

    // Returns the radius of the circle
    double calcRadius();

    // Returns the area of the circle
    double calcArea();

    // Returns the circumference of the circle
    double calcCircumference();

    // Writes the radius, area, and circumference of the circle to the display
    void print();

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
PointType<T> CircleType<T>::getCenterPoint() {
    return centerPoint;
}

template <class T>
void CircleType<T>::getCenterPoint(T &xCenter, T &yCenter) {
    xCenter = centerPoint.getX();
    yCenter = centerPoint.getY();
}

template <class T>
PointType<T> CircleType<T>::getCircumPoint() {
    return circumPoint;
}

template <class T>
void CircleType<T>::getCircumPoint(T &xCircum, T &yCircum) {
    xCircum = circumPoint.getX();
    yCircum = circumPoint.getY();
}

template<class T>
void CircleType<T>::printCenterPoint() {
    centerPoint.print();
}

template<class T>
void CircleType<T>::printCircumPoint() {
    circumPoint.print();
}

template<class T>
double CircleType<T>::calcRadius() {
    // distance formula between the center point and the circumference point
    return centerPoint - circumPoint;
}

template<class T>
double CircleType<T>::calcCircumference() {
    return 2 * PI * calcRadius();
}

template<class T>
double CircleType<T>::calcArea() {
    return PI * pow(calcRadius(), 2);
}

template <class T>
void CircleType<T>::print() {
    cout << "Radius: " << calcRadius() << endl;
    cout << "Area: " << calcArea() << endl;
    cout << "Circumference: " << calcCircumference() << endl;
}