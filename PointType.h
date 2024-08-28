#pragma once
#include <cmath>
#include <iomanip>
using namespace std;
template <class T>
class PointType
{
private:
  T x;
  T y;

public:
  //Default constructor 
  PointType() {x = 0, y =0; {cout<< fixed << setprecision(1)

  //Constructor with parameters
  PointType(T ux, T uy) : x(ux), y(uy) { ; }

  // Setters
  void setX(T ux) { x = ux; }
  void setY(T uy) { y = uy; }
  void SetPoint(T ux, T uy) { x = ux, y = uy; }
 
//Getters
  T getX() {return x;}
  T getY() {return y;}
  void GetPoint(T &ux, T &uy) {ux = x, uy = y;}

  double operator - (PointType<T> op2) {double distance = sqrt(pow(x-op2.x,2)+pow(y-op2.y,2));
  return distance;  }
void print ()
{ cout << "( " << x << " ) " << y << endl;
}

};