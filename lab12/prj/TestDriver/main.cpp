#include <iostream>
#include <cmath>
#include <limits>
#include "../moduleskovalov/kovalov_lib.h"
using namespace std;

int main()
{
  bool all_tests_passed = true;

    // Перший тест
    ConeRoof c1(4.0, 3.0);
    if (c1.getRadius() == 4.0 && c1.getHeight() == 3.0) {
        std::cout << "Test 1 passed\n";
    } else {
        std::cout << "Test 1 failed\n";
        all_tests_passed = false;
    }

    // другий тест
    ConeRoof c2(10.5, 3.0);
    if (c2.getRadius() == 10.5 && c2.getHeight() == 3.0) {
        std::cout << "Test 2 passed\n";
    } else {
        std::cout << "Test 2 failed\n";
        all_tests_passed = false;
    }

    // 3 тест
    ConeRoof c3(4.0, 3.1);

    double expected_volume = 51.941;
    double epsilon = 0.0001;

    if (c3.getRadius() == 4.0 && c3.getHeight() == 3.1 && std::abs(c3.calculateVolume() - expected_volume) < epsilon) {
        std::cout << "Test 3 passed\n";
    } else {
        cout << c3.calculateVolume();
        std::cout << "Test 3 failed\n";
        all_tests_passed = false;
    }

    // 4 тест
    bool exception_thrown = false;
    try {
        ConeRoof c3(-1.0, 3.0);
    } catch (std::invalid_argument) {
        exception_thrown = true;
    }
    if (exception_thrown) {
        std::cout << "Test 4 passed\n";
    } else {
        std::cout << "Test 4 failed\n";
        all_tests_passed = false;
    }

    if (all_tests_passed) {
        std::cout << "All tests passed\n";
    } else {
        std::cout << "Some tests failed\n";
    }

    return 0;
}
