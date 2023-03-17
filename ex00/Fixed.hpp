#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int	_num;
		static const int	_bits; //fractional bits
	public:
		Fixed(/* args */);
		Fixed( const Fixed &fixed );
		Fixed &operator=( const Fixed &x );
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif