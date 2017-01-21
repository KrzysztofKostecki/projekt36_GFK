#include "Nodes.h"

using namespace std;


wxPoint PointsConverter::calculateWxPoint(Point p){
    
    double x,y,z;

    x = p.x;
    y = p.y;
    z = p.z;

    double a = x*this->d/(z+this->d);
    double b = y*this->d/(z+this->d);

    wxPoint point(a*w/3+w/2, h-(b*h/3+h/2));

    return point;
}


vector<wxPoint> PointsConverter::calculateWxPointsVector(vector<Point> points){
    vector<wxPoint> wxPoints;
    for(int i=0; i<points.size(); i++){
        wxPoints.push_back(calculateWxPoint(points[i]));
    }

    return wxPoints;
}


PointsConverter::PointsConverter(int w, int h, double d){
    this->h = h;
    this->w = w;
    this->d = d;
}
