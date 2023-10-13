#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

int main() {
    std::ifstream file("d5000.txt"); 

    std::list<int> list1;
    std::list<int> list2;
    int number;

 
    while (file >> number) {
        if (list1.empty()) {
            list1.push_back(number);
        }
        else {
            list2.push_back(number);
        }
    }
    file.close();
    list1.sort();
    list2.sort();
    list1.merge(list2);

    std::cout << "res: ";
    for (const auto& element : list1) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
