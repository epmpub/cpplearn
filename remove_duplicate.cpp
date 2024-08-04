#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // 先排序
    std::sort(vec.begin(), vec.end());

    // 使用 unique 函数去除相邻的重复元素
    auto it = std::unique(vec.begin(), vec.end());

    // 使用 erase 函数删除后面多余的元素
    vec.erase(it, vec.end());

    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}