#include "Store.h"
#include <iostream>
#include <string>

Store::Store() {
    this -> capacity = 0; 
}

Store::Store(int capacity)  {
    this -> capacity = capacity;   
}


// returns the number items currently stocked
// note that if more than one of the same item is in stock they are *all* counted
// i.e. if 3 widgets and 2 hammers are in stock then it will return 5.
int Store::get_Total_Stock_Count(){
    if (StockItem::get_item_code()!=0){
        int Total = 0;
        return Total++;
    }
}

int Store::get_Stock_Count(int item_code){
    if ()

}


StockItem *get_Stock_List(){
    for (int i = )
    return get_stuck_List
};
