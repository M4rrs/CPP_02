#include "Fixed.hpp"

const int Fixed::_bits = 8;

/*=============== CONSTRUCTORS ===============*/

Fixed::Fixed() : _num(0) {}

Fixed::Fixed( const int i ) {
	_num = i << _bits;
}

Fixed::Fixed( const float f ) {
	_num = roundf(f * (float)(1 << _bits));
}

/*=============== DESTRUCTOR ===============*/

Fixed::~Fixed(){}

/*=============== COPY CONSTRUCTOR ===============*/

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
}

/*=============== OVERLOADED OPERATORS ===============*/

Fixed	&Fixed::operator=( const Fixed &assign ) {
	this->setRawBits(assign.getRawBits());
	return (*this);
}

//arithmetic
Fixed Fixed::operator+( const Fixed &num ){
	return (this->toFloat() + num.toFloat());
}

Fixed Fixed::operator-( const Fixed &num ){
	return (this->toFloat() - num.toFloat());
}

Fixed Fixed::operator*( const Fixed &num ){
	return (this->toFloat() * num.toFloat());
}

Fixed Fixed::operator/( const Fixed &num ){
	return (this->toFloat() / num.toFloat());
}

//comparison
bool	Fixed::operator<( const Fixed &compare ) const{
	return (this->toFloat() < compare.toFloat());
}

bool	Fixed::operator>( const Fixed &compare ) const{
	return (this->toFloat() > compare.toFloat());
}

bool	Fixed::operator<=( const Fixed &compare ) const{
	return (this->toFloat() >= compare.toFloat());
}

bool	Fixed::operator>=( const Fixed &compare ) const{
	return (this->toFloat() >= compare.toFloat());
}

bool	Fixed::operator==( const Fixed &compare ) const{
	return (this->toFloat() == compare.toFloat());
}

bool	Fixed::operator!=( const Fixed &compare ) const{
	return (this->toFloat() != compare.toFloat());
}

//increment and decrement
Fixed Fixed::operator--( void ){
	--_num;
	return (*this);
} 

Fixed Fixed::operator--( int ){
	Fixed copy(*this);
	_num--;
	return (*this);
}

Fixed Fixed::operator++( void ){
	++_num;
	return (*this);
}

Fixed Fixed::operator++( int ){
	Fixed copy(*this);
	_num++;
	return (copy);
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

const Fixed &Fixed::min( Fixed &num1, Fixed &num2 ){
	if (num1.toFloat() <= num2.toFloat())
		return (num1);
	return (num2);
}

const Fixed &Fixed::min( const Fixed &num1, const Fixed &num2 ){
	if (num1.toFloat() <= num2.toFloat())
		return (num1);
	return (num2);
}

const Fixed &Fixed::max( Fixed &num1, Fixed &num2 ){
	if (num1.toFloat() >= num2.toFloat())
		return (num1);
	return (num2);
}

const Fixed &Fixed::max( const Fixed &num1, const Fixed &num2 ){
	if (num1.toFloat() >= num2.toFloat())
		return (num1);
	return (num2);
}

