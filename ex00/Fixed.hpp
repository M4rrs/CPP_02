#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int	_num;
		static const int	_bits; //fractional bits
	public:
		Fixed();
		Fixed( const Fixed &copy );
		Fixed &operator=( const Fixed &assign );
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
