#include <iostream>
#include "Point2d.h"
#include <cmath>

using namespace std;

double Point2d::get_x() const{
    return x;
}

double Point2d::get_y() const{
    return y;
}

void set_x(double x){

}
void set_y(double y){

}

void Point2d::translate(const Point2d& t){
    x += t.get_x();
    y += t.get_y();
}

double Point2d::distance_to(const Point2d& p) const{
    
}
void
int main(){
    return 0;
}
