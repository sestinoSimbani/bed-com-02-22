#pragma once

namespace shapes {
    class triangle {
    private:
        double base;
        double height;

    public:
        triangle();
        triangle(double triBase, double triHeight);
        ~triangle();

        void setBase(double triBase);
        double getBase() const;

        void setHeight(double triHeight);
        double getHeight() const;
    };
};
