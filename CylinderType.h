#pragma once
#include "CircleType.h"

template <class T>
class CylinderType : public CircleType<T> {
public:
    // Default constructor
    CylinderType();

    // Constructor with height and base points
    CylinderType(T height, PointType<T> center, PointType<T> circum);

    // Setters
    void setHeight(T height);

    // Getters
    T getHeight() const;

    // Calculate volume of the cylinder
    double calcVolume() const;

    // Calculate surface area of the cylinder
    double calcSurfaceArea() const;

    // Print cylinder properties
    void print() const;

private:
    T height;  // Height of the cylinder
};

// Default constructor
template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) {}

// Constructor with height and base points
template <class T>
CylinderType<T>::CylinderType(T h, PointType<T> center, PointType<T> circum) 
    : CircleType<T>(center, circum), height(h) {}

// Set height of the cylinder
template <class T>
void CylinderType<T>::setHeight(T h) {
    height = h;
}

// Get height of the cylinder
template <class T>
T CylinderType<T>::getHeight() const {
    return height;
}

// Calculate the volume of the cylinder
template <class T>
double CylinderType<T>::calcVolume() const {
    return CircleType<T>::calcArea() * height;
}

// Calculate the surface area of the cylinder
template <class T>
double CylinderType<T>::calcSurfaceArea() const {
    return 2 * CircleType<T>::PI * CircleType<T>::calcRadius() * height + 2 * CircleType<T>::calcArea();
}

// Print all the properties of the cylinder
template <class T>
void CylinderType<T>::print() const {
    // Print the base circle properties
    CircleType<T>::print();

    // Print the cylinder properties
    cout << "Height: " << height << endl;
    cout << "Volume: " << calcVolume() << endl;
    cout << "Surface Area: " << calcSurfaceArea() << endl;