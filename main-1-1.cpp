#include <iostream>
#include "StockItem.h"
#include "StockItem.cpp"


int main() {

StockItem i1;
std::cout << "Default code: " << i1.get_item_code() << ", Default item: " << i1.get_description() << std::endl;

StockItem i2(1, "Laptop");
std::cout << "Code: " << i2.get_item_code() << ", Item: " << i2.get_description() << std::endl;
return 0;
}