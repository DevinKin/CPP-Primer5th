#include <iostream>
#include "../code/Sales_item.h"

int main() {
    Sales_item item;
    Sales_item sumItem;
    if (std::cin >> item) {
        sumItem = item;
        while (std::cin >> item) {
            sumItem += item;
        }
    }
    std::cout << sumItem << std::endl;
}
