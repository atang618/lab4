//
// Created by Allen Tang on 1/27/16.
//

#include "eecs230.h"

struct Point2D {
    double x;
    double y;

    Point2D(double x_value, double y_value) {
        x = x_value;
        y = y_value;
    };
};

struct LineSegment2D {
    Point a;
    Point b;

    LineSegment2D(Point x1, Point x2) {
        a = x1;
        b = x2;
    }

    LineSegment2D addition(LineSegment2D first, LineSegment2D second) {
        LineSegment2D resultant;
        resultant.a.x = first.a.x + second.a.x;
        resultant.a.y = first.a.y + second.a.y;
        resultant.b.x = first.b.x + second.b.x;
        resultant.b.y = first.b.y + second.b.y;
        return resultant;
    }

    LineSegment2D subtraction(LineSegment2D first, LineSegment2D second) {
        LineSegment2D resultant;
        resultant.a.x = second.a.x - first.a.x;
        resultant.a.y = second.a.y - first.a.y;
        resultant.b.x = second.b.x - first.b.x;
        resultant.b.y = second.b.y - first.b.y;
        return resultant;
    }

    Point intersection(LineSegment2D first, LineSegment2D second) {
        Point result;
        double slope1 = (first.b.y-first.a.y)/(first.b.x-first.a.x);
        double slope2 = (second.b.y-second.a.y)/(second.b.x-second.a.x);
    }
};
