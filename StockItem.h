#ifndef STOCKITEM_H
#define STOCKITEM_H
#include <iostream>
#include <string>

class StockItem {

private:

    //attributte
    std::string description;
    int code_num;

public:

// a constructor that takes the item description and the item code number as inputs
StockItem();               // a default constructor 
StockItem(int code_num, std::string description); 

std::string get_description();    // returns the item description

int get_item_code();       // returns the item code of the item
~StockItem();               //A default destructor

};

#endif 