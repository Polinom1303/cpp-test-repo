    static int ComputeAverageRating(const vector<int>& ratings) {
        const int size = ratings.size();
        if (ratings.empty()) {
            return 0;
        }
        return accumulate(ratings.cbegin(), ratings.cend(), 0) / size;
    }