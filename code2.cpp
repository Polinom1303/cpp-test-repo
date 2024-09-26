#include <cstdint>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    const auto min =  INT64_MIN;    // минимальное значение типа int64_t
    const auto max =  UINT64_MAX; // максимальное значение типа uint64_t
    cout << "min = "s << min << endl;
    cout << "max = "s << max << endl;
    cout << "min + max = "s << min + max << endl;
    cout << "2*min = "s << 2 * min << endl;
    cout << "2*max = "s << 2 * max << endl;
    // выведите 5 чисел
}