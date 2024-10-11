vector<int> ReadLineRating1() {
    int size;
    cin >> size;
    vector<int> rating(size);
    for (int i = 0; i < size; ++i) {
        cin >> rating[i];
    }
    return rating;
}

vector<int> ReadLineRating2() {
    int number;
    vector<int> numbers;
    cin >> number;
    for (int i = 0; i < number; ++i) {
        int z;
        cin >> z;
        numbers.push_back(z);
    }
    ReadLine();
    return numbers;
}