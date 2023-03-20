#include "Fixed.hpp"

const int Fixed::_bits = 8;

/*=============== CONSTRUCTORS ===============*/

Fixed::Fixed (){
    std::cout << "Default Constructor called." << std::endl;
}

Fixed::Fixed( const int i ) {
	_num = i << _bits;
    std::cout << "Int Constructor called." << std::endl;
}

Fixed::Fixed( const float f ) {
	_num = roundf(f * (float)(1 << _bits));
    std::cout << "Float Constructor called." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Fixed::~Fixed(){
    std::cout << "Default Destructor called." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
	std::cout << "Copy Constructor called." << std::endl;
}

/*=============== OVERLOADED OPERATORS ===============*/

Fixed	&Fixed::operator=( const Fixed &assign ) {
	this->setRawBits(assign.getRawBits());
	std::cout << "Copy Assignment operator called." << std::endl;
	return (*this);
}

std::ostream &operator<<( std::ostream &out, const Fixed &insert ) {
    out << insert.toFloat();
	return (out);
}

/*=============== PUBLIC ===============*/

int	Fixed::getRawBits( void ) const
{
	return _num;
}

void	Fixed::setRawBits( int const raw )
{
	_num = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_num / (float)(1 << _bits));
}

int	Fixed::toInt( void ) const
{
	return (_num >> _bits);
}