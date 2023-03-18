#include "Fixed.hpp"

int main(void ) {
    Fixed a; // default construct
    a.setRawBits(510);
    Fixed b(a); //copy constructor
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}