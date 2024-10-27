#include "Customer.h"
#include "print.h"
#include <iostream>
int main()
{
    //define customer
    customer::Customer customer;

    std::cout << "Please input your name\n";
    getline(std::cin, customer.name);
    std::cout << "Please input your ID\n";
    std::cin >> customer.ID;
    std::cout << "Please input your email address\n";
    std::cin >> customer.email;

    address::Address address = { "666 Hell Rd.", "Oakland", 94619 };
    customer.address = address;


   customer::print(customer.ID,customer.name,customer.email,customer.address.ZIP,customer.address.street,customer.address.city);


}
