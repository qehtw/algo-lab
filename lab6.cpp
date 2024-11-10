#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159265358979323846;
const double EPSILON = 0.0001;

// Exact function y(x) = (PI / 4) * x
double exactFunction(double x) {
    return (PI / 4) * x;
}

// Series expansion S(x) for a given n
double seriesExpansionFixedN(double x, int n) {
    double result = 0.0;
    for (int i = 0; i <= n; ++i) {
        int k = 2 * i + 1;
        double term = pow(-1, i) * sin(k * x) / (k * k);
        result += term;
    }
    return result;
}

// Series expansion S(x) for a given precision epsilon
double seriesExpansionWithPrecision(double x) {
    double result = 0.0;
    double term;
    int i = 0;
    
    do {
        int k = 2 * i + 1;
        term = pow(-1, i) * sin(k * x) / (k * k);
        result += term;
        ++i;
    } while (fabs(term) > EPSILON);
    
    return result;
}

int main() {
    double a = 0, b = PI/2;
    int k, n;

    std::cout << "Enter the number of points k: ";
    std::cin >> k;
    std::cout << "Enter the value of n for fixed term series: ";
    std::cin >> n;

    // Calculate step size
    double step = (b - a) / (k - 1);

    // Output table headers
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "x\t\ty(x)\t\tS(x) (fixed n)\tS(x) (epsilon)\tError (fixed n)\tError (epsilon)\n";
    std::cout << "----------------------------------------------------------------------------------------\n";

    // Loop over each x in the range [a, b]
    for (int i = 0; i < k; ++i) {
        double x = a + i * step;
        double y_exact = exactFunction(x);
        double s_fixed_n = seriesExpansionFixedN(x, n);
        double s_epsilon = seriesExpansionWithPrecision(x);

        // Calculate errors
        double error_fixed_n = fabs(y_exact - s_fixed_n);
        double error_epsilon = fabs(y_exact - s_epsilon);

        // Print values
        std::cout << x << "\t" << y_exact << "\t" << s_fixed_n << "\t\t" 
                  << s_epsilon << "\t\t" << error_fixed_n << "\t\t" << error_epsilon << "\n";
    }

    return 0;
}
