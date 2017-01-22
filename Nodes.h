#include <iostream>
#include <vector>

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/dialog.h>
#else
	#include <wx/wxprec.h>
#endif

#include <wx/dcbuffer.h>

using namespace std;

struct Point{
    double x;
    double y;
    double z;

    Point(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Point(){
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
};



enum BodyPart {
    LARM = 0,
    RARM = 1,
    LLEG = 2,
    RLEG = 3,
    RKNEE = 4,
    LKNEE = 5,
    LELBOW = 6,
    RELBOW = 7,
    SPINE = 8,
    HIP = 9,
    NECK = 10,
    LFOOT = 11,
    RFOOT = 12,
    LHAND = 13,
    RHAND = 14,
    HEAD = 15
};


class PointsConverter{
    public:
        wxPoint calculateWxPoint(Point p);
        vector<wxPoint> calculateWxPointsVector(vector<Point> points);
        PointsConverter(int w, int h, double d);
    

    private:
        int w;
        int h;
        double d;

};


