#include <iostream>

int main() {
    int start, end;
    int temp;
    std::cout << "Enter two number and print integer between start and end: " << std::endl;
    std::cin >> start >> end;
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }
    while (start <= end) {
        std::cout << start++ << "\t";
    }
    std::cout << std::endl;
}
