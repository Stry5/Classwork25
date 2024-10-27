#include "print.h"

namespace customer {
    void print(int ID, std::string name, std::string email, int ZIP, std::string street, std::string city) {
        std::cout << "ID:" << ID << std::endl;
        std::cout << "Name:" << name << std::endl;
        std::cout << "Email:" << email << std::endl;
        std::cout << "Steet:" << street << std::endl;
        std::cout << "City:" << city << std::endl;
        std::cout << "ZIP Code:" << ZIP << std::endl;

    }
}
