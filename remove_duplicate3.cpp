#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    std::set<int> uniqueSet(vec.begin(), vec.end());

    vec.assign(uniqueSet.begin(), uniqueSet.end());

    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}