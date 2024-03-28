#include <iostream>
#include "Store.h"
#include "StockItem.h"
int main() {

Store Store(2);


StockItem i1(1, "Widget");
StockItem i2(2, "Hammer");
StockItem i3(1, "Widget");


if (Store.add_Stock(i1)) {
std::cout << "Added item 1 to the store" << std::endl;
} else {
std::cout << "Could not add item 1 to the store" << std::endl;
}
if (Store.add_Stock(i2)) {
std::cout << "Added item 2 to the store" << std::endl;
} else {
std::cout << "Could not add item 2 to the store" << std::endl;
}
if (Store.add_Stock(i3)) {
std::cout << "Added item 3 to the store" << std::endl;
} else {
std::cout << "Could not add item 3 to the store" << std::endl;
}


std::cout << "The Stock currently has " <<
Store.get_Total_Stock_Count() << " Items" << std::endl;

if (Store.get_Stock_Count(1)) {
std::cout << "The Store has " <<      << "Widget."   << std::endl;
} else if (Store.get_Stock_Count(2)) {
std::cout << "The Store has " <<      << " hammer."  << std::endl;
}

return 0;
}