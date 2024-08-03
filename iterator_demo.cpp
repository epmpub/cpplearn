#include <iostream>
#include <vector>
#include <algorithm>

// std::vector<int>::iterator FindValue(std::vector<int> vec,int value)
// {
//     std::vector<int>::iterator it;
//     for (it = vec.begin(); it != vec.end(); ++it)
//     {
//         if (*it == value)
//         {
//             return it;
//         }
//     }

// }

int main()
{
    std::vector<int> vec = {1, 2, 3, 2, 7, 3};
    std::vector<int>::reverse_iterator pos = std::find(vec.rbegin(), vec.rend(), 3);
    std::cout << *pos << std::endl;


    std::string msg {"Hello World"};
    auto pos2 = std::find(msg.begin(),msg.end(),'H');
    std::cout << *pos2 << std::endl;
    return 0;
}