#include <iostream>
#include "PointType.h"
#include <iomanip>
using namespace std; 

//This is to test the main pointtype class



int main() 
{cout << fixed << setprecision(1) << showpoint;
{cout << "From default Constructor"<<endl;
            PointType<int> p1I;
            PointType< double> p1D;
            cout << "Integer point:";
            p1I.print();
            cout << "Double point:";
            p1D.print();
            
           cout << "\n Constructor with parameters"<<endl;
            PointType<int> p2I(3, 5);
            PointType< double> p2D(3.5, 5.5);
            cout << "Integer point:";  
            p2I.print();
            cout << "Double point:";  
            p2D.print();    
            
           cout<< "\n Distance calculation" << endl;
            double distance = p1I - p2I;
             cout << distance << endl;

           cout<< "\n Distance calculation" << endl;
          distance = p1D - p2D;
           cout << distance << endl;

           };
