#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    std::vector<int> result;

    for (const auto& num : vec) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }

    vec = result;

    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}