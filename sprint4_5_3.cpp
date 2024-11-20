template <typename Container>
void EraseAndPrint(Container& container, int index, int start, int end) {
    container.erase(container.begin() + index);    
    PrintRange(container.begin(), container.end());
    container.erase(container.begin() + start, container.begin() + end + 1);
    PrintRange(container.begin(), container.end());
}