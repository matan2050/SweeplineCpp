#ifndef _PRIMITIVES_H_
#define _PRIMITIVES_H_

namespace Sweepline
{
    namespace GeometryTypes
    {
        class Point
        {
        public:
            Point(const float t_x, const float t_y) : x(t_x), y(t_y) {};
            Point(const Point& other) : x(other.x), y(other.y) {};

        private:
            float x;
            float y;
        };

        class Line
        {
        public:
            Line(const float t_a, const float t_b) : a(t_a), b(t_b) {};
            Line(const Line& other) : a(other.a), b(other.b) {};

        private:
            float a;
            float b;
        };

        class Segment : Line
        {
        public:
            Segment(const float t_a, const float t_b, Point t_start, Point t_end) :
                Line(t_a, t_b), start(t_start), end(t_end) {};

        private:
            Point start;
            Point end;
        };
    }
}

#endif
