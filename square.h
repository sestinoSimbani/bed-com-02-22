#pragma once

namespace shapes {
    class square {
    private:
        double sideLength;

    public:
        square();
        square(double length);
        ~square();

        void setSide(double Length);
        double getSide() const;
    };
};
