
#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;
using namespace chrono;

double calculate(long long iterations, long long param1, long long param2) {
    double result = 1.0;
    for (long long i = 1; i <= iterations; ++i) {
        long double j = (long double)i * param1 - param2;
        result -= (1.0L / j);
        j = (long double)i * param1 + param2;
        result += (1.0L / j);
    }
    return result;
}

int main() {
    auto start_time = high_resolution_clock::now();
    double result = calculate(100000000, 4, 1) * 4;
    auto end_time = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end_time - start_time);

    cout << "Result: " << fixed << setprecision(12) << result << endl;
    cout << "Execution Time: " << (double)duration.count() / 1000000.0 << " seconds" << endl;

    return 0;
}

