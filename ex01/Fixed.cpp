#include "Fixed.hpp"

Fixed::Fixed (){
    std::cout << "Default Constructor called." << std::endl;
}

Fixed::Fixed( const int i ) {
	
}

Fixed::Fixed( const float f ) {}

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
	std::cout << "Copy Constructor called." << std::endl;
}

Fixed	&Fixed::operator=( const Fixed &assign ) {
	this->setRawBits(assign.getRawBits());
	std::cout << "Copy Assignment operator called." << std::endl;
	return (*this);
}

std::ostream &operator<<( std::ostream &out, const Fixed &insert ) {
    out << insert.getRawBits();
	return (out);
}

Fixed::~Fixed(){
    std::cout << "Default Destructor called." << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return _num;
}

void	Fixed::setRawBits( int const raw )
{
	_num = raw;
}