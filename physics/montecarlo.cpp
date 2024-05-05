#include <iostream>
#include <random>
#include <cmath>

int main() {
    int throws = 2000000;
    int inside_circle = 0;
    int i = 0;
    double radius = 1.0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(-radius, radius);

    while (i < throws) {
        // Choose random X and Y centered around 0,0
        double x = dis(gen);
        double y = dis(gen);
        // If the point is inside circle, increase variable
        if (x * x + y * y <= radius * radius) {
            inside_circle++;
        }
        i++;
    }

    // Calculate area and print; should be closer to Pi with increasing number of throws
    double area = (((2 * radius) * (2 * radius)) * inside_circle) / static_cast<double>(throws);
    std::cout << "monte area: " << area << " real area : " << M_PI << std::endl;

    return 0;
}

