#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Document {
    int id;
    int rating;
};

void PrintDocuments(vector<Document> documents, size_t skip_start, size_t skip_finish) {
    if (documents.empty() || (skip_start >= documents.size() && skip_finish >= documents.size())) {
        return;
    }

    sort(documents.begin(), documents.end(), [](const auto& lhs, const auto& rhs) { return lhs.rating > rhs.rating; });
    const size_t lhs = documents[0].rating + skip_start;
    const size_t rhs = documents.back().rating - skip_finish;

    for (size_t i = 0; i < documents.size(); ++i) {
            
        if ((i < skip_start && skip_start < documents.size()) || (i >= lhs && rhs < documents.size())) {
            continue;
        }
        cout << "{ id = "s << documents[i].id << ", "
            << "rating = "s << documents[i].rating << " }" << endl;
    }
}


int main() {
    PrintDocuments({ {100, 5}, {101, 7}, {102, -4}, {103, 9}, {104, 1} }, 1, 2);
}
