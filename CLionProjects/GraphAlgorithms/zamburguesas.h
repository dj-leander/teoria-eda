#ifndef GRAPHALGORITHMS_ZAMBURGUESAS_H
#define GRAPHALGORITHMS_ZAMBURGUESAS_H

#include "utils.h"

struct Rock {
    double x, y, r;

    /**
     * Default constructor. (0, 0, 0)
     */
    inline Rock(): x(0), y(0), r(0) {}

    /**
     * Given constructor.
     */
    inline Rock(double x, double y, double r): x(x), y(y), r(r) {}

    /**
     * Computes the distance from the border of two rocks.
     * @param a
     * @param b
     * @return
     */
    double distance(const Rock& b) {
      return sqrt(pow(b.x-x-b.r-r, 2) + pow(b.y-y-b.r-r, 2));
    }

    /**
     * Read operator.
     */
     inline friend std::istream& operator >> (std::istream& is, Rock& rock) {
       return is >> rock.x >> rock.y >> rock.r;
     }
};



#endif //GRAPHALGORITHMS_ZAMBURGUESAS_H
