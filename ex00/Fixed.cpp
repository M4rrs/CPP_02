#include "Fixed.hpp"

Fixed::Fixed() : _num(0) {
	std::cout << "Constructor called." << std::endl; 
}

Fixed::~Fixed() {
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
	std::cout << "Copy Constructor called." << std::endl;
}

Fixed	&Fixed::operator=( const Fixed &assign ) {
	*this = assign;
	std::cout << "Copy Assignment operator called." << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return _num;
}

void	Fixed::setRawBits( int const raw )
{
	_num = raw;
}
