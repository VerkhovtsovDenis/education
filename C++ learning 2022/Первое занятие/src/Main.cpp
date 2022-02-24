#include <iostream>
#include "shop.hpp"

int main(){
    Client my_client = Client();
    my_client.push_back(Item("Zewa", 65.3));
    my_client.push_back(Item("Pen", 10));
    my_client.push_back(Item("ZenBook", 4000));

    std::cout <<"Sum is: " << get_all_prices(my_client) << std::endl;
    
    my_client.pop();
    my_client.pop();
    my_client.pop();
    my_client.pop();

    std::cout << "Sum is: " << get_all_prices(my_client) << std::endl;

    return 0;
}