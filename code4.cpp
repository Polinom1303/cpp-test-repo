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
void Print(ostream& out, const Collection& container) {
    bool first = true;
    
    for (const auto& element : container) {
        if (!first) {
            out << ", "s;
        }
        first = false;
        out << element;
    }
    return out;
}
template <typename T>
ostream& operator<<(ostream& out, const vector<T>& container) {
    return out << Print(out,container);
}
template <typename T>
ostream& operator<<(ostream& out, const set<T>& container) {
    return out << Print(out,container);
}
int main() {
    const vector<double> ages = { 10, 5, 2, 12 };
    cout << ages << endl;
    const set<string> cats = { "Мурка"s, "Белка"s, "Георгий"s, "Рюрик"s };
    cout << cats << endl;
    return 0;
}