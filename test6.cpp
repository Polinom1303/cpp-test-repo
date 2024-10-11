#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

template <typename First, typename Second>
ostream& operator<<(ostream& out, const pair<First, Second>& container) {
    out << "("s << container.first << ","s << container.second << ")"s;
    return out;
}
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
}
template <typename T>
ostream& operator<<(ostream& out, const vector<T>& container) {
    out << "["s;
    Print(out, container);
    return out << "]"s;
}
template <typename T>
ostream& operator<<(ostream& out, const set<T>& container) {
    out << "{"s;
    Print(out, container);
    return out << "}"s;
}
template <typename Key, typename Value>
ostream& operator<<(ostream& out, const map<Key, Value>& container) {
    out << "<"s;
    Print(out, container);
    return out << ">"s;
}
int main() {
    setlocale(LC_ALL, "Russian");
    const vector<double> ages = { 10, 5, 2, 12 };
    cout << ages << endl;
    const set<string> cats = { "Мурка"s, "Белка"s, "Георгий"s, "Рюрик"s };
    cout << cats << endl;
    const map<string, double> names = { {"Вася", 10}, {"Петя", 5}, {"Маша", 2}, {"Коля", 12} };
    cout << names << endl;
    return 0;
}