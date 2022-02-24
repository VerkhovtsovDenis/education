#ifndef _SHOP_HPP
#define _SHOP_HPP
#include <vector>
#pragma Once

class Item{
    public:
        Item(std::string, float);
        float get_price();

    private:
        std::string name;
        float price;

};

typedef std::vector<Item> Items_t;


class Client{
    public:
        void push_back(Item item);
        Item pop();

    private:
        friend float get_all_prices(const Client &self);

    protected:
        Items_t Items;
        
};



#endif //_SHOP_HPP
