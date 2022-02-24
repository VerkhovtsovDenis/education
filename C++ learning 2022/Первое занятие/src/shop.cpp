#include <iostream>
#include <vector>
#include "shop.hpp"

Item::Item(std::string name = "", float price = 0.0):name(name), price(price){
}

void Client::push_back(Item item){
    this->Items.push_back(item);
}

Item Client::pop(){
    Item del = this->Items.back();
    this->Items.pop_back();
    return del;
}

float Item::get_price(){
    return this->price;
};

float get_all_prices(const Client &self){
    float sum = 0;
    for(auto item: self.Items)
        sum += item.get_price();
    return sum;
}