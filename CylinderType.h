#pragma once
#include "CircleType.h"

template <class T>
class CylinderType : public CircleType<T> {
public:
    CylinderType();
    CylinderType(T height, PointType<T> center, PointType<T> circum);

    void setHeight(T height);
    T getHeight() const;

    double calcVolume() const;
    double calcSurfaceArea() const;
    void print() const;

private:
    T height;
};

template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) {}

template <class T>
CylinderType<T>::CylinderType(T h, PointType<T> center, PointType<T> circum) 
    : CircleType<T>(center, circum), height(h) {}

template <class T>
void CylinderType<T>::setHeight(T h) {
    height = h;
}

template <class T>
T CylinderType<T>::getHeight() const {
    return height;
}

template <class T>
double CylinderType<T>::calcVolume() const {
    return CircleType<T>::calcArea() * height;
}

template <class T>
double CylinderType<T>::calcSurfaceArea() const {
    return 2 * CircleType<T>::PI * CircleType<T>::calcRadius() * height + 2 * CircleType<T>::calcArea();
}

template <class T>
void CylinderType<T>::print() const {
    CircleType<T>::print();
    cout << "Height: " << height << endl;
    cout << "Volume: " << calcVolume() << endl;
    cout << "Surface Area: " << calcSurfaceArea() << endl;
}