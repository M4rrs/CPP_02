#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {

    private:
        int _num;
        static const int    _bits;
    public:
        Fixed();    //default
        Fixed( const int i );
        Fixed( const float f );
        Fixed( const Fixed  &copy );
        Fixed &operator=( const Fixed &assign );
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream &operator<<( std::ostream &out, const Fixed &insert );

#endif
