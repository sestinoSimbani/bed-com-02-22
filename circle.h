#pragma once

namespace shapes {
    class circle {
    private:
        double radius;

    public:
        circle();
        circle(double circRadius);
        ~circle();

        void setRadius(double CircRadius);
        double getRadius() const;
    };
};