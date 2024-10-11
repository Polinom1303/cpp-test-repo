#include <iostream>
#include <sstream>
#include <vector>
#include <set>
using namespace std;
template <typename Element>
ostream& operator<<(ostream& out, const vector<Element>& container);
template <typename Element>
ostream& operator<<(ostream& out, const set<Element>& container);
template<typename Collection>
string Print(const Collection& container) {
    bool first = true;
    stringstream ss;
    for (const auto& element : container) {
        if (!first) {
            ss << ", "s;
        }
        first = false;
        ss << element;
    }
    return ss;
}
template <typename T>
ostream& operator<<(ostream& out, const vector<T>& container) {
    return out << Print(container);
}
template <typename T>
ostream& operator<<(ostream& out, const set<T>& container) {
    return out << Print(container);
}
int main() {
    const vector<double> ages = { 10, 5, 2, 12 };
    cout << ages << endl;
    const set<string> cats = { "Мурка"s, "Белка"s, "Георгий"s, "Рюрик"s };
    cout << cats << endl;
    return 0;
}