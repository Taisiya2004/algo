#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

int main() {
    std::ifstream inputFile("d16.txt");
    std::ofstream outputFile("output.txt");

    std::list<int> list1;
    std::list<int> list2;
    int number;

    while (inputFile >> number) {
        if (list1.empty()) {
            list1.push_back(number);
        }
        else {
            list2.push_back(number);
        }
    }
    inputFile.close();
    list1.sort();
    list2.sort();
    list1.merge(list2);

    for (const auto& element : list1) {
        outputFile << element << " ";
    }
    outputFile.close();

    std::cout << "The result has been written to the output.txt file." << std::endl;

    return 0;
}
