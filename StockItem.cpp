#include "StockItem.h"
#include <iostream>
#include <string>

StockItem::StockItem() {
    this -> description;
    this -> code_num = 0;
}

StockItem::StockItem(int code_num, std::string description) {
    this -> description = description;
    this -> code_num = code_num;
}

std::string StockItem::get_description(){
    return description;
}

int StockItem::get_item_code(){
    return code_num;
}

StockItem::~StockItem() {
    this -> description;
    this -> code_num = 0;
}